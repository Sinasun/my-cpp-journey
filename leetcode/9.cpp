class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string s = "";
        while(x > 0){
            int a = x / 10;
            cout << x - a * 10 << endl;
            s += '0' + (x - (a * 10));
            x = x/10;
        }
        cout << s << endl;
        for (int i = 0; i < s.length() / 2; i++){
            if(s[i] != s[s.length() - i - 1]){
                return false;
            }
        }
        return true;
    }
};