class Solution {
public:
    int minAddToMakeValid(string s) {
        int o = 0 , m = 0 ; 
        for(char c : s){
            if(c == '('){
                o++ ;
            }
            else {
                if(o > 0){
                    o--;
                }
                else{
                    m++ ; 
                }
            }
        }
        return m + o;
    }
};