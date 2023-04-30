class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int last = nums[0];
        int counter = -1;
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] == last){
                counter++;
            }else{
                counter = 0;
                last = nums[i];
            }
            if(counter > nums.size() / 2 - 1){
                return nums[i];
            }
        }  
        return nums[nums.size() - 1];      
    }
};