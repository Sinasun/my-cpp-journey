class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool added = false;
        int position = digits.size() - 1;
        while(!added){
            if(digits[position] == 9){
                digits[position] = 0;
                
                if(position == 0){
                    digits.insert(digits.begin(), 1);
                    added = true;
                }else{
                    position--;
                }
            }else{
                digits[position] += 1;
                added = true;
            }
        }
        return digits;
    }
};