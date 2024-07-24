class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //store the given string in map using key as asending order string
        unordered_map<string, vector<string>> mp;
        //it will hold the output
        vector<vector<string>> ans;

        for(int i=0; i<strs.size(); i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            mp[word].push_back(strs[i]);
        }

        for(auto it : mp){
            //cout<<"it.first=>"<<it.first<<endl;
            ans.push_back(it.second);
        }
        return ans;
    }
};