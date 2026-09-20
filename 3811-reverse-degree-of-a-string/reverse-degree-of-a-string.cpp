class Solution {
public:
    int reverseDegree(string s) {
        int ind = 1 ;
        int ans = 0 ;
        int i = 0 ;
        while(s[i] != '\0'){
            ans += ('z' - s[i] + 1) * ind ;
            ind++ ;
            i++ ;
        }
        return ans ;
    }
};