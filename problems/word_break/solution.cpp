class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {

        int max_len = 0;
        for (int i = 0; i < wordDict.size(); i++) {
            max_len = max(max_len, (int)wordDict[i].length());
        }

        vector<bool> value;
        value.push_back(true);

        for (int i = 0; i < s.size(); i++) {
            bool found = false;
            string curr_str = "";

            for (int j = i; j >= 0 && i - j + 1 <= max_len; j--) {
                curr_str = s[j] + curr_str;

                for (int k = 0; k < wordDict.size(); k++) {
                    if (wordDict[k] == curr_str && value[j]) {
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }

            value.push_back(found);
        }

        return value.back();
    }
};
