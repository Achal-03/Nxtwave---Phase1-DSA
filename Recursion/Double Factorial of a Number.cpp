#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int doubleFactorial(int n) {
        // Code Here
        if(n==0 || n==1)
            return 1;
        if(n==2)
            return 2;
        return n*doubleFactorial(n-2);
            
        
    }
};
