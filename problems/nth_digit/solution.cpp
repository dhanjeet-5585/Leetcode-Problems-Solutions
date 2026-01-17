class Solution {
public:
    int count_digits(long long num) {
        int value = 0;
        while (num > 0) {
            num /= 10;
            value++;
        }
        return value;
    }

    int find_soln(int n) {
        long long low = 1;
        long long high = n;
        while (low <= high) {
            long long mid = (low + high) / 2;
            int digits = count_digits(mid);
 
            long long total = 0;
            long long start = 1;
            long long len = 1;
            
            while (mid >= start * 10) {
                total += 9 * start * len;
                start *= 10;
                len++;
            }
            total += (mid - start + 1) * len;

            if (total < n) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }

            if (total >= n && total - len < n) {
                long long offset = n - (total - len);
                string s = to_string(mid);
                return s[offset - 1] - '0';
            }
        }
        return 0;
    }

    int findNthDigit(int n) {
        return find_soln(n);
    }
};
