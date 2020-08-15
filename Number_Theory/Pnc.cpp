#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
long long int number_of_ways(int n, vector<int> K){
    long long int total  = 0; 
    for (auto it : K)
        total += it;
    long long int A = (total *(total - 1)) / 2;
    long long int B = 0;
    for (auto it: K)
        B += (it * (it - 1)) / 2;
    return A - B;
}

int main(){
    ifstream cin("input.txt");
    int N;
    cin >> N;
    vector<int> K(N);
    for (int i = 0; i < N; i++)
        cin >> K[i] ;
    cout<< number_of_ways(N,K);    
}
