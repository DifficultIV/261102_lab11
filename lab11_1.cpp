#include<iostream>
using namespace std;

long long int fibonacci(long long int);

int main(){
    long long int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(long long int x){
    if(x >= 0){
    if(x == 0) return x;
    else if(x == 1) return x;
    else return fibonacci(x-1) + fibonacci(x-2);
    }
    else return 0;
}