#include <iostream>
#include <vector>

using namespace std;



void replace(vector<int>& array, int a, int b){
    int c = array[a];
    array[a] = array[b];
    array[b] = c;
}


int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int start = 0;
    int end = n - 1;
    for(int i = 0; i < end; i++){
        if(array[i] == 2){
            replace(array, i, end);
            end--;
            i--;
        }else if(array[i] == 0){
           replace(array, i, start);
           start++; 
        }
    }
    for(int i = 0; i < n; i++){
        cout << array[i] << endl;
    }
    return 0;
}
