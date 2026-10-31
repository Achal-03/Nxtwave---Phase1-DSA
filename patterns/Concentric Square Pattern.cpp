#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printConcentricSquarePattern(int n) {
        //Write your code here...
        int size = 2*n - 1;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                int min_value = min({i, size-1-i, j, size-1-j});
                cout << n-min_value << " ";
            }
            cout << endl;
        }
    }
};
