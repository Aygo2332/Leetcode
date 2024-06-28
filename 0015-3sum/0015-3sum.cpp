class Solution
{
    public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            int numTwo=-nums[i],first=i+1, last=nums.size()-1;
            while(first<last)
            {
                if(nums[first]+nums[last]==numTwo)
                {
                    ans.push_back({nums[i],nums[first],nums[last]});
                    while(first<last && nums[first+1]==nums[first])
                        first++;
                    while(first<last && nums[last-1]==nums[last])
                        last--;
                    first++;
                    last--;
                }
                else if(nums[first]+nums[last]<numTwo)
                    first++;
                else
                    last--;
                while(i+1<nums.size() && nums[i+1]==nums[i])
                    i++;
            }
        }
        return ans;
    }
};