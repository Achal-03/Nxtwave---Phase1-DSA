#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printDescendingLetterTriangle(int n) {
        // Write your code here...
        for(int i=n; i>=1; i--){
            for(int j=0; j<i; j++){
                cout << char(65 + j) << " ";
            }
            cout << endl;
        }
    }
};
