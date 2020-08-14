#include <fstream>
#include <iostream>
using namespace std;


void merge(int A[], int B[], int C[], int N, int M){
    int i = 0, j = 0, m = 0;
    while (i < N && j < M){
        if (A[i] < B[j])
            C[m++] = A[i++];
        else
            C[m++] = B[j++];
}
    while (i < N)  // B exhauseted
        C[m++] = A[i++];
    while (j < M)  // A exhauseted
        C[m++] = B[j++];
}
int main(){
    ifstream cin("input.txt");
    int N, M ;
    cin >> N >> M;
    int A[N] ,B[M],C[M + N];
    for (int i = 0;i < N;i++) cin >> A[i];
    for (int i = 0;i < M;i++) cin >> B[i];
    merge(A,B,C,N,M);
    for(int i = 0 ; i < N + M; i++)
        cout << C[i] << " ";
    return 0;
}



