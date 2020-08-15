#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
ifstream cin("input.txt");
int N,Q;
cin >> N >> Q;
vector<int> A(N,0);
for (int i = 0; i < N;i++)
    cin >> A[i];

for (int i = 0; i < Q;i++){
    int l, r;
    cin >> l >> r;
    l--; r--;
    for (int p1 = l,p2= r; p1< p2;p1++ , p2--){
        swap(A[p1],A[p2]);
    }
}
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";cout << "\n";
    
return 0;
}