class Solution {
public:
    bool can_make_friend_request(int x, int y) {
 
        if (y <= 0.5 * x + 7) return false;
   
        if (y > x) return false;

        if (y > 100 && x < 100) return false;
        return true;
    }
    
    int numFriendRequests(vector<int>& ages) {
        sort(ages.begin(), ages.end());
        int total_requests = 0;
        int n = ages.size();
        

        for (int i = 0; i < n; i++) {
 
            int lower_bound_age = 0.5 * ages[i] + 7;
            

            int left = 0, right = i;
            while (left < right) {
                int mid = left + (right - left) / 2;
                if (ages[mid] <= lower_bound_age) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            
      
            int count = i - left;
            
           
            if (ages[i] > 14) { 
                int j = i + 1;
                while (j < n && ages[j] == ages[i]) {
                    count++;
                    j++;
                }
            }
            
            total_requests += count;
        }
        
        return total_requests;
    }
};