class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
    
        int max_radius = 0;
        sort(heaters.begin(), heaters.end());
        
        for (int i = 0; i < houses.size(); i++) {
            int target = houses[i];

            int low = 0;
            int high = heaters.size() - 1;
            int result = -1; 
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (heaters[mid] >= target) {
                    result = heaters[mid];
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            
            int low1 = 0;
            int high1 = heaters.size() - 1;
            int result1 = -1; 
            while (low1 <= high1) {
                int mid1 = low1 + (high1 - low1) / 2;
              
                if (heaters[mid1] <= target) {
                    result1 = heaters[mid1];
                    low1 = mid1 + 1;
                } else {
                    high1 = mid1 - 1;
                }
            }

            // Start by assuming the minimum distance for this house is a very large number.
            int current_min_radius = INT_MAX;

            // 1. Check if a heater exists to the right.
            if (result != -1) {
                // If it exists, its distance is a candidate for the minimum.
                current_min_radius = result - target;
            }

            // 2. Check if a heater exists to the left.
            if (result1 != -1) {
                // If it exists, calculate its distance.
                int dist_to_left = target - result1;
                // We want the smaller of the two distances (left vs right).
                current_min_radius = min(current_min_radius, dist_to_left);
            }

            // 3. Update the overall maximum radius needed for ALL houses.
            max_radius = max(max_radius, current_min_radius);
        }

     
        return max_radius;
    }
};