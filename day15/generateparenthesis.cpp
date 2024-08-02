class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v = {"("};
        for(int i = 1; i < 2 * n; i++){
            int k = v.size() - 1;
            while(k >= 0){
                int cnt0 = 0, cnt1 = 0;
                for(auto i:v[k]){
                    if(i == '(')cnt0++;
                    else cnt1++;
                }
                if(cnt0 == n)v[k] += ')';
                else if(cnt0 == cnt1)v[k] += '(';
                else if(cnt0 > cnt1){
                    string tmp = v[k];
                    v[k] += '(';
                    tmp += ')';
                    v.push_back(tmp);
                }
                k--;
            }
        }
        // for(auto i:v)cout<< i << endl;
        return v;
    }
};