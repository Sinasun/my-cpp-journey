class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int counter[10000];
        int n = deck.size() - 1;
        int first = 0;
        memset(counter, 0, sizeof(counter));
        for (int i = 0; i <= n; i++){
            counter[deck[i]]++;
        }
        int gcd = -1;

        for(int i = 0; i < 10000; i++){
            if(counter[i] != 0){
                if(gcd == -1){
                    gcd = counter[i];
                }
                gcd = __gcd(gcd, counter[i]);
            }
        }

        if(gcd == 1){
            return false;
        }
        return true;
    }
};