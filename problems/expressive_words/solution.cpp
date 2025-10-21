class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        int total = 0;

        for (int p = 0; p < words.size(); p++) {
            int i = 0, j = 0;
            string empty = "";
            string curr_word = words[p];
            bool valid = true;

            while (i < s.size() && j < curr_word.size()) {
                if (s[i] == curr_word[j]) {
                    int sum = 1, sum1 = 1;

                    // Count repeated chars in s
                    while (i + 1 < s.size() && s[i + 1] == s[i]) {
                        i++;
                        sum++;
                    }

                    // Count repeated chars in word
                    while (j + 1 < curr_word.size() && curr_word[j + 1] == curr_word[j]) {
                        j++;
                        sum1++;
                    }

                    // Stretchiness conditions
                    if (sum < sum1 || (sum != sum1 && sum < 3)) {
                        valid = false;
                        break;
                    }

                    // Move to next groups
                    i++;
                    j++;
                } else {
                    valid = false;
                    break;
                }
            }

            // Check both strings consumed fully
            if (valid && i == s.size() && j == curr_word.size()) total++;
        }

        return total;
    }
};
