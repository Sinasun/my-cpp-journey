class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int current = 0;
        int chars[130];
        memset(chars, 0, sizeof(chars));
        int indexx = 1;
        for(int i = 0; i < s.length(); i++){
            if(!chars[(int)s[i]]){
                chars[(int)s[i]] = true;
                current ++;
            }else{
                cout <<"i: " << i << " " <<  current << endl;
                if(current > max){
                    max = current;
                }
                memset(chars, 0, sizeof(chars));
                i = indexx - 1;
                indexx++;
                current = 0;
            }
            if(current > max){
                max = current;
            }
        }
        return max;
    }
};