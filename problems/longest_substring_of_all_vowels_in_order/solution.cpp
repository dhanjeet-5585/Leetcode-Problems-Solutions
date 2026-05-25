class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int maxLen = 0;
        int i = 0;
        int n = word.size();

        while (i < n) {
            
            if (word[i] != 'a') { i++; continue; }

            int start = i;
            int uniqueCount = 1;

           
            while (i + 1 < n && word[i + 1] >= word[i]) {
                if (word[i + 1] > word[i]) uniqueCount++;
                i++;
            }

           
            if (uniqueCount == 5)
                maxLen = max(maxLen, i - start + 1);

            i++; 
        }

        return maxLen;
    }
};