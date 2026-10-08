class Solution {
public:
    long long splitArray(vector<int>& nums) {
        vector<int>A ; 
        vector<int>B ; 
        long long  a = 0 , b = 0 ; 
        int n = nums.size() ; 

        vector<bool>isprime(n+1,1);
        if(n > 0){
            isprime[0] = 0 ;
        }
        if( n > 1){
            isprime[1] = 0 ;
        }


        for(int i = 2 ; i * i <= n  ; i++){
            if(isprime[i]){
                for(int j = i  *i; j < n ; j += i){
                    isprime[j] = 0 ; 
                }
            }
        } 

        for(int i = 0 ; i < n ; i++){
            if(isprime[i]){
                a += nums[i] ;
            }
            else{
                b += nums[i] ;
            }
        }
        return abs(a-b) ;
        
    }
};