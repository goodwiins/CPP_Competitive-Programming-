#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream cin("input.txt");
    int N,d;
    cin >> N >> d;
    vector<int> v(N);
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    vector<int> res(8);


    for (int i = N - d, j = 0;i < N;i++,j++) res[j] = v[i];
    for (int i = 0, j = d;i < N - d;i++,j++) res[j] = v[i];

    for (int i = 0; i < N;i++)
        cout << res[i] << " ";
    return 0;


}