class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> my_dict;

        int l = 0;
        int r = 0;
        int maximum = 0;

        while (r < s.length()) {

            if (my_dict.find(s[r]) != my_dict.end() 
                && l <= my_dict[s[r]]) {

                l = my_dict[s[r]] + 1;

                my_dict[s[r]] = r;

                maximum = max(maximum, (r - l + 1));

                r++;
            }
            else {

                my_dict[s[r]] = r;

                maximum = max(maximum, (r - l + 1));

                r++;
            }
        }

        return maximum;
    }
};