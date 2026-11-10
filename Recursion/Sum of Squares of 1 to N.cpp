#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int square(int n, int i=2){
        if(i<2){
            return n;
        }
        return n*square(n, i-1);
    }
    int recursiveSumOfSquares(int n) {
        // Code Here
        if(n==1){
            return 1;
        }
        return square(n) + recursiveSumOfSquares(n-1);
    }
};
