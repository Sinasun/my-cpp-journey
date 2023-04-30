class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans(l.size());
        for(int i = 0; i < l.size(); i++){
            ans[i] = isArithmeticArray(nums, l[i], r[i]);
        }
        return ans;        
    }
    bool isArithmeticArray(vector<int>& nums, int start, int end){
        vector<int> numbers(end - start + 1);
        for(int i = 0; i <= end - start; i++){
            numbers[i] = nums[i + start];
        }
        if(numbers.size() <= 1){
            return true;
        }
        int low = numbers[0];
        int high = numbers[0];
        for(int i = 1; i < numbers.size(); i++){
            if(numbers[i] > high){
                high = numbers[i];
            }
            if(numbers[i] < low){
                low = numbers[i];
            }
        }
        cout << (high - low)/(end - start) << endl;
        if((high - low)%(end - start) != 0){
            return false;
        }else if((high - low)/(end - start) == 0){
            for (int i = 0; i < numbers.size(); i++){
                if(numbers[i] != low){
                    return false;
                }
            }
            return true;
        }

        int difference = (high - low)/(end - start);
        bool hass[end - start + 1];
        memset(hass, false, sizeof(hass));
        int counter = 0;
        for(int i = 0; i < numbers.size(); i++){
            cout << i << " Num "<<(numbers[i] - low)/difference << endl;
            if(!hass[(numbers[i] - low)/difference] && (numbers[i] - low)%difference == 0){
                hass[(numbers[i] - low)/difference] = true;
                counter++;
            }else{
                return false;
            }
        }

        cout << high << " " << low << " " << difference << " " << end - start << " Counter: "<<  counter <<  endl;
        if(counter == end - start + 1){
            return true;
        }
        //s[i] = s[0] + x * i;
        //s[a] - s[b] = x(a - b);
        //s[b] - s[c] = x(b - c);
        //s[c] - s[d] = x(c - d);
        return false;
    }
};