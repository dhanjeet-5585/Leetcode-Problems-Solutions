class Solution {
public:
    bool isHappy(int n) {
        set<int> Myset;
        Myset.insert(n);
        int count=1;
        if(n==1) return true;
        while(true){
            int sum_of_squares=0;
            int curr_num=n;
            while(curr_num>0){
                int digit=curr_num%10;
                sum_of_squares+= (digit)*(digit);
                curr_num=curr_num/10;
            }
            n= sum_of_squares;
            Myset.insert(sum_of_squares);
            count++;
            if(Myset.size()!=count){
                return false;
            }
            if(sum_of_squares==1){
                return true;
            }

        }
        return true;

        
    }
};