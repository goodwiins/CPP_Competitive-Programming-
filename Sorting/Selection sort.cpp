#include <iostream>
#include <string>
using namespace std;
int main(){
    int N = 6;
    int arr[N] = {6,4,3,7,8,0};

    for (int i = 0; i < N; i++){
        int min_idx = i;
        for (int j = i + 1; j < N; j++){ 
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[i],arr[min_idx]);
    }

    for (int i = 0; i < N;i++) cout << arr[i] << " "; cout << "\n";
    return 0;
    
}