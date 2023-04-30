class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1;
        bool visited[n + 1];
        memset(visited, false, sizeof(visited));
        return hasPath(nums, 0, n, visited);
    }
    bool hasPath(vector<int>& nums, int start, int n, bool visited[]){
        visited[start] = true;
        if (start == n){
            return true;
        }
        for (int i = 0; (i <= nums[start]) && (i <= n); i++){
            if(visited[start + i]== false){
                if(hasPath(nums, start + i, n, visited)){
                    return true;
                }

            }
        }
        return false;
    }

};