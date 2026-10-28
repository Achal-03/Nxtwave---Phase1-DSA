#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printLetterTriangle(int n) {
        // Write your code here...
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout << char(65+j) << " ";
            }
            cout << endl;
        }
    }
};
