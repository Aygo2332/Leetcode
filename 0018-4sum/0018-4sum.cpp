class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long int target){
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1; j<nums.size(); j++){
                long long int numTar=target-nums[i]-nums[j],left=j+1,right=nums.size()-1;
                while (left<right){
                    if(nums[left]+ nums[right] < numTar)
                        left++;
                    else if(nums[left]+ nums[right] > numTar)
                        right--;
                    else{
                        vector<int> v={nums[i],nums[j],nums[left],nums[right]};
                        ans.push_back(v);
                        while(left<right && nums[left+1]==nums[left])
                            left++;
                        while(left<right && nums[right-1]==nums[right])
                            right--;
                        left++;
                        right--;
                    }
                }
                while(j+1<nums.size() && nums[j+1]==nums[j])
                    j++;
            }   
            while(i+1<nums.size() && nums[i+1]==nums[i])
                i++; 
        }
        return ans;
    }
};