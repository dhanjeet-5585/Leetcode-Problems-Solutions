class Solution {
public:
    int find(vector<int> &difficulty, int target) {
        int low = 0;
        int high = difficulty.size() - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (difficulty[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    
        return low;
    }

    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        map<int, int> mymap;
        for (int i = 0; i < difficulty.size(); i++) {
            mymap[difficulty[i]] = max(mymap[difficulty[i]], profit[i]);
        }

        
        sort(difficulty.begin(), difficulty.end());
        for (int i = 1; i < difficulty.size(); i++) {
            mymap[difficulty[i]] = max(mymap[difficulty[i]], mymap[difficulty[i - 1]]);
        }

        int sum = 0;
        for (int j = 0; j < worker.size(); j++) {
            int idx = find(difficulty, worker[j]);
            if (idx == 0) continue; 
            int validIdx = idx - 1; 
            sum += mymap[difficulty[validIdx]];
        }
        return sum;
    }
};
