class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA = 0;
        int n = height.size();
        int i = 0;
        int j = n - 1;

        while(i < j){
            int area = min(height[i], height[j]) *( j-i);
            maxA = max(maxA ,area );

            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
    return maxA;
    }

};