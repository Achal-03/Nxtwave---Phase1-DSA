#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void printEvenOdd(int n, int i=1) {
        // Code Here
        if(i>n){
            return;
        }
        if(i%2==0){
            cout << i << " ";
        }
        printEvenOdd(n, i+1);
        if(i%2!=0){
            cout << i << " ";
        }
    }
};
