#include <iostream>
#include <fstream>

using namespace std;


int print_fact_count(long long int N){
    int cnt = 0;
    for ( int i = 1; i <= N ;i++){
        if (N % i == 0)
        {
            cnt++;
            if (i != N/i){
                cnt++;
            }
        }
    
    }
return cnt;
}
int main(){
 
  ifstream cin("input.txt");
   int N;
  cin >> N;
  cout << print_fact_count(N) << endl;



}