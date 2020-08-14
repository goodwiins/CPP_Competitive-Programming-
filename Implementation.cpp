#include <bits/stdc++.h>
using namespace std;


struct Stack{
    static const int SZ = 4;
    int arr[SZ];
    int top;
    Stack(){
        top = -1;
    }
    bool isEmpty(){
        return (top < 0);
    }
    void push(int x){
        if (top = SZ - 1){
            cout << "stack overflow";
            return;
        }
        arr[++top] = x;
    }
    int peek(){
        if (top < 0 ){
            cout << "Empty Stack";
            return -1;
        }
        return arr[top];
    }
    int pop(){

        if (top < 0){
            cout << "stack underflow";
            return -1;
        }
        return arr[top--];
    }
    void  printstack(){
        for (int i = 0;i <= top;i++){
            cout << arr[i] << " <- ";
        cout << "\n";
        }
    }
};
int main(){
    Stack stack;
    stack.printstack();

}