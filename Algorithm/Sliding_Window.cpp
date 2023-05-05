#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;
    vector <int> array(n);
    for (int i = 0; i < n; i ++){
        cin >> array[i];
    }
    int window;
    cin >> window;

    int maxsum = 0;
    for (int i = 0; i <= n - window; i++){
        int sum = 0;
        for(int j = i; j < i + window; j++){
            sum += array[j];
        }
        if(sum > maxsum || i == 0){
            maxsum = sum;
        }
    }
    cout << maxsum << endl;
    return 0;
}