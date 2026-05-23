class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        my_dict= {}
        l=0
        r=0
        maximum=0
        while(r<len(s)):
            if s[r] in my_dict and l<=my_dict[s[r]]:
                l= my_dict[s[r]]+1
                my_dict[s[r]]=r
                maximum= max(maximum, (r-l+1))
                r=r+1

            else:
                my_dict[s[r]]=r
                maximum= max(maximum,(r-l+1))
                r+=1
        return maximum



        