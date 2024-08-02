class Solution {
public:
    string simplifyPath(string path) {
        
        string curr = "", ans = "";
        stack<string> st;
        
        path.push_back('/');
        for(int i=0;i<path.length();i++) {
            if(path[i] == '/') {
                if(curr == ".." ) {
                    if(!st.empty())
                        st.pop();
                }
                else if(curr != "" && curr != ".") {
                    st.push(curr);
                }
                curr = "";
            }
            else {
                curr += path[i];
            }
        }

        while(!st.empty())
        {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if(ans == "") {
            ans = "/";
        }
        return ans;
    }
};