class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
       for (int i = 0; i < nums.size() - 1; i++){
           if(isOkay(nums, i)){
               return true;
           }
           
       } 
       return false;
    }
    bool isOkay(vector<int>& nums, int removed){
        for(int i = 0; i < nums.size() - 1; i ++){
            if( i == removed ){
                continue;
            }else if((i + 1) == removed){
                if( i + 2 < nums.size()){
                    if(nums[i] >= nums[i + 2]){
                        return false;
                    }
                }
            }else{
                if(nums[i] >= nums[i + 1]){
                    return false;
                }
            }
        }
        return true;
    }
};