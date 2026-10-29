#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscLetterPyramid(int n) {
        //Write your code here...
        for(int i=n; i>=1; i--){
            for(int j=i; j<=n; j++){
                cout << char(65+j-1) << " ";
            }
            cout << endl;
        }
    }
};
