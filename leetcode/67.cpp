class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int c = 0;
        
        while(a.length()>b.length()){
            b.insert(0,1,'0');
        }
        while(b.length()>a.length()){
            a.insert(0,1,'0');
        }

        for (int i = a.length() - 1; i >=0; i--){
            int total = stoi(string(1, a[i])) + stoi(string(1, b[i])) + c;
            if(total == 0){
                ans.insert(0,1,'0');
                c = 0;
            }else if(total == 1){
                ans.insert(0,1,'1');
                c = 0;
            }else if (total == 2){
                ans.insert(0,1,'0');
                c = 1;
            }else{
                ans.insert(0,1,'1');
                c = 1;
            }
        }
        if (c == 1){
            ans.insert(0,1,'1');
        }
        return ans;
    }
};