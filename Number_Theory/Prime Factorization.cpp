#include <iostream>
#include <fstream>
using namespace std;
void prin_prime_factors(int N){
    for (int i = 2; i * i <= N;i++ ){
        if (N%i == 0){
            cout << i << " ";
            while (N%i == 0)
                N /= i;
        }
    }
   if (N > 1)
    cout << N << " ";
  cout << "\n";
}

int main(){
    ifstream cin("input.txt");
    int N;
    cin >> N;
    prin_prime_factors(N);    
}