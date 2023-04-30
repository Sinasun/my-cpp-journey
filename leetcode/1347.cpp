class Solution {
public:
    int minSteps(string s, string t) {
        int chars[26];
        memset(chars,0,sizeof(chars));
        for (int i = 0; i < s.length(); i++){
            chars[(int)s[i] - 97] ++;
        }
        for (int i = 0; i < s.length(); i++){
            chars[(int)t[i] - 97] --;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++){
            cout << chars[i] << endl;
            sum+= abs(chars[i]);
        }

        return sum/2;
    }
};