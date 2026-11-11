#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int factorial(int num){
        if(num==0 || num==1){
            return 1;
        }
        return num*factorial(num-1);
    }

    int sumOfFactorialsOfDigits(int n) {
        // Code Here
        if(n<=9){
            return factorial(n);
        }
        return factorial(n%10) + sumOfFactorialsOfDigits(n/10);
    }
};
