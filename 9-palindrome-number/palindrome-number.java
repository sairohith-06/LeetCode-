class Solution {
    public boolean isPalindrome(int x) {
        if( x < 0) return false ; 
        int o = x ; 
        long rev = 0 ; 
        while( o > 0 ){
            rev = rev * 10 + o % 10 ; 
            o /= 10 ; 
        }
        return rev == x ; 
    }
}