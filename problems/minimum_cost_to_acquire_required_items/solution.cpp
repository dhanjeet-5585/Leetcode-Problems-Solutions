class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth,
                          int need1, int need2) {

        

        long long costA = (long long)need1 * cost1
                        + (long long)need2 * cost2;

        long long k1 = min(need1, need2);
        long long costB = k1 * costBoth
                        + (long long)(need1 - k1) * cost1
                        + (long long)(need2 - k1) * cost2;

        long long k2 = max(need1, need2);
        long long costC = k2 * costBoth;

        return min({costA, costB, costC});
    }
};



