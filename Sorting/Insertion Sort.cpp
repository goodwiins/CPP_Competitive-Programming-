#include <iostream>
#include <string>
using namespace std;
int main(){
    int N = 6;
    int arr[N] = {6,4,3,7,8,0};
    for (int i = 0; i < N;i++){
        int j = i;
        while (j >= 1 && arr[j] < arr[j-1])
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
        
    }

    for (int i = 0; i < N;i++) cout << arr[i] << " "; cout << "\n";
    return 0;
    
}