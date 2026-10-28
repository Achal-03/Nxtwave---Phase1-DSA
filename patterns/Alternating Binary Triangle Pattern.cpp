#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printAlternatingBinaryTriangle(int n) {
        // Write your code here...
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                for(int j=1; j<=i; j++){
                    if(j%2!=0){
                        cout << 1 << " ";
                    }
                    else{
                        cout << 0 << " ";
                    }
                }
            }
            else{
                for(int j=0; j<i; j++){
                    if(j%2!=0){
                        cout << 1 << " ";
                    }
                    else{
                        cout << 0 << " ";
                    }
                }
            }
            cout << endl;
        }
    }
};
