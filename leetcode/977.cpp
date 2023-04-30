class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int right = 0;
        int left = nums.size() - 1;
        for ( int i = res.size() - 1; i >= 0; i--) {
            if(abs(nums[right]) > abs(nums[left])){
                res[i] = pow(nums[right],2);
                right++;
            } else{
                res[i] = pow(nums[left],2);
                left--;
            }
        }
        
        return res;
    }
};