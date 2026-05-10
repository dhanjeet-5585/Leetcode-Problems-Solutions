class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        map<int,int> all_int;

        for(int i = 1; i <= 3000; i++){
            all_int[i] = 0;
        }

        for(int i = 0; i < arr.size(); i++){
            all_int[arr[i]]++;
        }

        vector<int> vec;

        for(const auto& pair : all_int){
            if(pair.second == 0){
                vec.push_back(pair.first);
            }
        }

        return vec[k-1];
    }
};