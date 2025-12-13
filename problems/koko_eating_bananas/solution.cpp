class Solution {
public:
    long long required_hours(vector<int>& piles, int k) {
        long long total_time = 0;
        for (int i = 0; i < piles.size(); i++) {
            total_time += (piles[i] + k - 1) / k;
        }
        return total_time;
    }

    int find_minimum_banana_eating_speed(vector<int>& piles, int maxi, int h) {
        int low = 1, high = maxi;
        int ans = maxi;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long required_time = required_hours(piles, mid);

            if (required_time <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        return find_minimum_banana_eating_speed(piles, maxi, h);
    }
};
