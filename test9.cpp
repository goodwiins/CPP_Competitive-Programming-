#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ifstream cin("input.txt");
    int N,Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N;i++) cin >> A[i] ;
    vector<int> sum(N);
    sum[0] = A[0];
    for (int i = 1;i < N;i++)
        sum[i] = sum[i-1] + A[i];
    for (int i = 0;i < Q;i++){
        int l,r;
        cin >> l>> r;
        l--; r--;
        int ans  = sum[r];
        if (l > 0 )
            ans -= sum[l - 1];
        cout << ans <<" ";
    }
    return 0;
}
