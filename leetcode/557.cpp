class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        for (int i = 1; i < s.length(); i ++){
            if((s[i]== ' ') || (i == s.length() - 1)){
                if(i == s.length() - 1){
                    i++;
                }
                
                int end = start + ((i - start) / 2);
                for (int j = start; j < end; j++){
                    char a = s[j];
                    s[j] = s[i - j + start - 1];
                    s[i - j + start - 1] = a;
                }
                start = i + 1;
            }
        }
        return s;
    }
};