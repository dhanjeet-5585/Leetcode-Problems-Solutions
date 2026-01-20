class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = accumulate(A.begin(), A.end(), 0);
        int sumB = accumulate(B.begin(), B.end(), 0);
        
        int diff = (sumA - sumB) / 2; 
        unordered_set<int> setA(A.begin(), A.end());
        
        for (int y : B) {
            int x = y + diff;
            if (setA.count(x)) {
                return {x, y};
            }
        }
        return {};
    }
};


