class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int numbers[60000 + 1];
        memset(numbers, 0, sizeof(numbers));
        for (int i = 0; i < nums.size(); i++){
            numbers[nums[i] + 30000]++;
        }
        for (int i = 0; i <= 60000; i++){
            if(numbers[i] == 1){
                return i - 30000;
            }
        }
        return 0;
    }
};