#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
int make_palindrome(string s){
    int n = s.size();
    int action = 0;
    for (int i = 0, j = n -1; i < j; i++,j--)
    {
        if(s[i] != s[j])
            action++;   
    } 
    return action;
}
 int main() {
    ifstream cin("input.txt");
    string s; 
    cin >> s;
    cout << make_palindrome(s);
    return 0;
}