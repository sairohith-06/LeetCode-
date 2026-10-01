class Solution {
public:
    int minChanges(int n, int k) {
        if(n == k){
            return  0;
        }

        int count = 0 ;
        while( n > 0 || k > 0){
            int bit1 = n & 1 ; 
            int bit2 = k & 1 ; 
            if( bit1 == 1 && bit2 == 0){
                count++ ;
            }
            if(bit1 == 0 && bit2 == 1){
                return -1 ;
            }
            n = n >> 1 ; 
            k = k >> 1 ; 
        }
        return count ;
    }
};