class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st ; 
        st.push(-1) ;
        int ans = 0 ; 
        for(int i = 0 ; s[i] != '\0' ; i++){
            if(s[i] == '('){
                st.push(i) ;
            }
            else{
                st.pop() ; 
                if(st.empty()){
                    st.push(i) ;
                }
                int length = i - st.top() ; 
                ans = max(ans,length) ;
            }
        }
        return ans ; 
    }
};