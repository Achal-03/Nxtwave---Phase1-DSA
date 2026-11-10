#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    double recursivePower(double a, int b) {
        // Code Here
        if(b==1){
            return a;
        }
        return a * recursivePower(a, b-1);
    }
};
