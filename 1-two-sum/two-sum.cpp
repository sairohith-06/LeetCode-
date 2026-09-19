class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            int a = nums[i];
            int m = target -a;
            if(mp.find(m) != mp.end())
            {
                return {mp[m],i};
            }
            mp[a] = i;
        }
        return {-1,-1};
    }
};