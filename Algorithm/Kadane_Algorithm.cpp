#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int number;
    cin >> number;
    int array[number];
    for(int i = 0; i < number; i++){
        int n;
        cin >> n;
        array[i] = n;
    }

    int maxsum = array[0];
    int sum = 0;

    for (int i = 0; i < number; i++){
        sum += array[i];
        if (sum > maxsum) {
            maxsum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }

    cout << maxsum << endl;


    return 0;
    
}