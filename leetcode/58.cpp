class Solution {
public:
    int lengthOfLastWord(string s) {
        int maxlengt = 0;
        int lengt = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                cout << maxlengt << endl;
                if(lengt != 0){
                    maxlengt = lengt;
                }
                
                lengt = 0;

            }else{
                lengt++;
            }
        } 
        cout << "d "<< maxlengt << endl;
 
        if(lengt == 0){
            return maxlengt;
        }
        return lengt;      
    }
};