#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    long long recursionFactorial(int n) {
        // Write your code here...
        if(n==1){
            return 1;
        }
        return n*recursionFactorial(n-1);
    }
};
