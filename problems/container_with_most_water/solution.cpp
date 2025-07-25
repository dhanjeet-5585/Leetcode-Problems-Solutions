class Solution {
public:
    int maxArea(vector<int>& height) {
        int left= 0;
        int right=height.size()-1;
        int maxwater=0;
        while(left<right){
            int width= abs(right-left);
            int ht= min(height[left],height[right]);
            int currwater=width*ht;
            maxwater= max(currwater,maxwater);
            height[left]< height[right] ? left++ : right--;

        }
        return maxwater;
        
    

        
    }
};