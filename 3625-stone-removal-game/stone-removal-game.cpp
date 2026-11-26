class Solution {
public:
    bool canAliceWin(int n) {
        int f = 0 ; 
        int m = 10 ; 
        while(n >= m ){
            if( n >= m){
                f++ ;
                n -= m ; 
            }
            m-- ;
        }
        if(f % 2 == 0){
            return 0 ;
        }
        else return 1 ; 
    }
};