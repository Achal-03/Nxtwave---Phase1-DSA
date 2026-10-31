#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printDigit(int n) {
        // Write your code here...
        while(n!=0){
            cout << n%10 << endl;
            n/=10;
        }
    }
};
