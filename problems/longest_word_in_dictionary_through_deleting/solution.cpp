class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        vector<string> answers;

        for (auto &word : dictionary) {
            int i = 0, j = 0;  
            while (i < s.size() && j < word.size()) {
                if (s[i] == word[j]) j++;
                i++;
            }
            if (j == word.size()) {
                answers.push_back(word);
            }
        }

        int max_length = 0;
        vector<string> filtered_answers;
        for (int i = 0; i < answers.size(); i++) {
            max_length = max(max_length, (int)answers[i].size());
        }

        for (int y = 0; y < answers.size(); y++) {
            if (answers[y].size() == max_length) {
                filtered_answers.push_back(answers[y]);
            }
        }

        if (filtered_answers.empty()) {
            return "";
        } else if (filtered_answers.size() == 1) {
            return filtered_answers[0];
        } else {
            sort(filtered_answers.begin(), filtered_answers.end());
            return filtered_answers[0];
        }
    }
};
