#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printUppercaseLetterPyramid(int n) {
        // Write your code here...
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i; j++){
                cout << " ";
            }
            for(int j=65; j<=65+i-1; j++){
                cout << char(j);
            }
            for(int j=65+i-2; j>=65; j--){
                cout << char(j);
            }
            cout << endl;
        }
    }
};
