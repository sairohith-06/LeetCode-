class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
         int n = nums.size() ; 
        int sum = 0 ; 
        for(int num : nums){
            sum += num ; 
        }

        int target = sum - x ; 
        if(target == 0) return n ; 

        int prefix = 0 ;
        int ans = -1 ;
        unordered_map<int,int>mp ;
        mp[0] = -1 ;

        for(int i = 0 ; i < n ; i++){
            prefix += nums[i] ;

            int req = prefix - target ;
            
            if(mp.find(req) != mp.end()) {
               ans = max(ans,i - mp[req]) ; 
            }

            if(mp.find(prefix) == mp.end()){
                mp[prefix] = i ;
            }
        }
        if(ans == -1) return -1 ; 
        return n - ans  ; 
    }
};