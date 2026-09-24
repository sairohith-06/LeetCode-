class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = -1  ;
        for(int i = 0 ; i < nums.size() ; i++){
            int sum = 0 ; 
            int copy = nums[i] ;
            while(copy > 0){
                int rem = copy % 10 ; 
                sum += rem ; 
                copy /= 10 ; 
            }
            if(sum == i){
                ans = i ;
                break ; 
            }
        }
        return ans ; 
    }
};