class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        int maxlen = 0, maxf = 0;
        vector<int> freq (26, 0);
        while(right < s.size()){
            freq[s[right] - 'A']++;
            maxf = max(maxf, freq[s[right]-'A']);
            if(right - left + 1 - maxf <= k)
                maxlen = max(maxlen, right - left + 1);
            else{
                freq[s[left] - 'A']--;
                left++;
            }
            right++;
        }
        return maxlen;
    }
};