#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printSquarePattern(int n) {
        // Write your code here...
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
};
