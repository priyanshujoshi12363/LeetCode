class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int w = 0;
        int r = w + 1;
        int n = nums.size();

        while(r < n){
             if(nums[r] != nums[w]){
                w++;
                nums[w] = nums[r];
             }
             r++;
        }

        return w + 1;
    }
};