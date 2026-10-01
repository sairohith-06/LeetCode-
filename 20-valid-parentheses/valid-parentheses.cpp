class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch : s)
        {
            if(ch == '(' || ch == '{'  || ch == '[')
            {
                st.push(ch);
            }
            else if(ch == ')' || ch == '}' || ch == ']')
            {
                if(st.empty())
                {
                    return 0;
                }
                char t = st.top();
                st.pop();
                if(ch == ')' && t != '(' ||
                   ch == '}' && t != '{' ||
                   ch == ']' && t != '[')
                   {
                    return 0;
                   }
            }
        }
        return st.empty();
    }
};