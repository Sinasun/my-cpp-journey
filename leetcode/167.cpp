class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while((right - left) > 1){
            if(numbers[right] + numbers[left] == target){
                return {left + 1, right + 1};
            } else if(numbers[right] + numbers[left] > target){
                right --;
            }else{
                left++;
            }
        }

        return {left + 1, right + 1};
    }
};