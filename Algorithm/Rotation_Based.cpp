#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> k >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    vector<int> ans(n);
    for(int i = k + 1; i < n; i++){
        ans[i - k - 1] = array[i];
    }
    for(int i = 0; i <= k; i++){
        ans[n - k + i - 1] = array[i];
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    return 0;
}