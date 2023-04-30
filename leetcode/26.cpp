class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int last = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if(nums[i] != last){
                last = nums[i];
                k++;
                nums[k] = nums[i];
            }
        } 
        return k + 1;       
    }
};