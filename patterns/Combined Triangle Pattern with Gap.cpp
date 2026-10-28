#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printCombinedTriangle(int n) {
        //Write your code here...
        for(int i=1; i<=n; i++){
            int temp=i;
            for(int j=1; j<=i; j++){
                cout << j << " ";
            }
            for(int j=1; j<=2*(n-i); j++){
                cout << "  ";
            }
            for(int j=temp; j>=1; j--){
                cout << j << " ";
            }
            cout << endl;
        }
    }
};
