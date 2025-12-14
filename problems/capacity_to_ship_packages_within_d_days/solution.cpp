class Solution {
public:

    bool is_it_possible(int days, vector<int>& weights, int capacity) {
        int total_days = 1;
        int current_weight = 0;

        for (int w : weights) {
            if (current_weight + w > capacity) {
                total_days++;
                current_weight = 0;
            }
            current_weight += w;
        }
        return total_days <= days;
    }

    int find_minimum_weight_of_ship(int days, vector<int>& weights) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (is_it_possible(days, weights, mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        return find_minimum_weight_of_ship(days, weights);
        
    }
};