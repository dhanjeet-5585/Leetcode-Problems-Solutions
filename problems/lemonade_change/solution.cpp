class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int c:bills)
        {
            if(c==5)
            {
                five++;
            }
            else if(c==10)
            {
                if(five!=0)
                {
                    ten++;
                    five=five-1;
                }
                else{
                    return false;
                }

            }
            else
            {
                if(ten!=0 && five!=0)
                {
                    ten=ten-1;
                    five=five-1;
                }
                else if(five>=3)
                {
                    five=five-3;
                }
                else
                {
                    return false;
                }

            }
            
        }
        return true;
        
    }
};