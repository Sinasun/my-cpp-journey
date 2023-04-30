class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++){
            cout << counter << endl;
            if ((nums[i] == 0) && (counter < nums.size() ) ){
                nums.erase(nums.begin() + i);
                nums.insert(nums.begin() + nums.size(), 0);
                i--;
            }
            counter++;
        }
    }
};