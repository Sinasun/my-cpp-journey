class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res(nums.size(),0);
        int length = nums.size();
        k = k % length;
        for (int i = 0; i < nums.size(); i++){
            if(i < k){
                res[i] = nums[length - k + i];
            }else{
                res[i] = nums[i - k];
            }
        }
        nums = res;
    }
};