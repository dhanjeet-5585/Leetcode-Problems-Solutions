class Solution {
public:
    int find_cookie(vector<int> &s , int greed_factor) {
        int low = 0, high = s.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (s[mid] >= greed_factor)
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        if (low >= s.size()) return -1;

        
        int val = s[low];
        s.erase(s.begin() + low);
        return val;
    }

    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(), s.end());
        sort(g.begin(), g.end()); 

        int count = 0;
        for (int i = 0; i < g.size(); i++) {
            int value = find_cookie(s, g[i]);
            if (value != -1)
                count++;
        }
        return count;
    }
};
