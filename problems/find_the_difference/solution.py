class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        sorted_s= "".join(sorted(s))
        sorted_t= "".join(sorted(t))
        
        i=0
        while i < len(sorted_s) and sorted_s[i] == sorted_t[i]:
            if sorted_s[i]!= sorted_t[i]:
                return sorted_t[i]
            else:
                i+=1
        
        return  sorted_t[i]
        