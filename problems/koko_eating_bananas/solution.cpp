class Solution {
public:
    int find_max(vector<int> &piles){
        int maxi = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long calculate_hourly_speed(vector<int> &piles, int k){
        long long total_hour = 0;
        for(int i = 0; i < piles.size(); i++){
            // promote to long long before arithmetic to avoid overflow
            total_hour += ((long long)piles[i] + k - 1) / k;
        }
        return total_hour;
    }

    int Binary_search(vector<int>& piles, int h){
        int low = 1;
        int high = find_max(piles);
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long val = calculate_hourly_speed(piles, mid);
            if(val <= h){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

    int minEatingSpeed(vector<int>& piles, int h){
        return Binary_search(piles, h);
    }
};

