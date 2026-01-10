class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int pair=0;
        int singles=0;
        while(l<r)
    {
        if(people[l]+people[r]<=limit)
        {
            pair++;
            l++;
            r--;
        }
        else{
            singles++;
            r--;
        }
    }
    if(l==r){
        singles++;
    }
    return singles+pair;
        
    }
};