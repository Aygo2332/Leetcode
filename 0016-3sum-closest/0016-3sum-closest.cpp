class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin(),nums.end());
        int n=nums.size(),diff= INT_MAX,ans=0;
        for(int i=0;i<n;i++)
        {
            int a= nums[i],first=i+1, last=n-1;
            while(first<last)
            {
                if(a+nums[first]+nums[last]==target)
                    return target;
                else if(abs(a+nums[first]+nums[last]-target)<diff)
                    diff=abs(a+nums[first]+nums[last]-target),ans=a+nums[first]+nums[last];   
                if(a+nums[first]+nums[last]>target)
                    last--;
                else
                    first++;
            }
        }
        return ans;
    }
};