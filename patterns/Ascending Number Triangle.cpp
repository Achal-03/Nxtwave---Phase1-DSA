#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAscendingNumberTriangle(int n) {
        // Write your code here...
        int num=1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
};
