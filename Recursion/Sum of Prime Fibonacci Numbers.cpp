#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int sumOfPrimeFibonacci(int n, int a=1, int b=1) {
        if(n==0){
            return 0;
        }
        int sum=0;
        if(isPrime(a)){
            sum += a;
        }
        return sum + sumOfPrimeFibonacci(n-1, b, a+b);
    }
};
