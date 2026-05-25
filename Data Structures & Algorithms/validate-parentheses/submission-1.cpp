class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char,char> m = {{')' , '('},
        {'}', '{'} ,
        {']', '['}};
        if(s.length() <= 1) return false;
        for(char i : s) {
            if(m.count(i)) {
                if(!st.empty() and st.top() == m[i]){
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else{
                st.push(i);
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
