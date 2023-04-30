class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max = releaseTimes[0];
        int chars = keysPressed[0];

        for(int i = 1; i < releaseTimes.size(); i++){
            int duration = releaseTimes[i] - releaseTimes[i - 1];
            if(duration > max){
                max = duration;
                chars = keysPressed[i];
            }else if(duration == max && (int)keysPressed[i] > (int)chars){
                chars = keysPressed[i];
            }
        } 
        return chars;       
    }
};