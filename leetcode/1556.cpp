class Solution {
public:
    string thousandSeparator(int n) {
        string number = "";
        if(n == 0){
            return "0";
        }
        while (n >= 1){
            int a = n / 10;
            number = (char)('0' + (n - a * 10)) + number;
            n = n / 10;
        }   
        int counter = 0;
        string ans = "";
        for (int i = number.length() - 1; i >= 0; i--){
            cout << counter << endl;
            if(counter == 3){
                ans= '.' + ans;
                counter = 0;
            }
            ans = number[i] + ans;
            counter++;
        }
        return ans;
    }
};