#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void printHourglassPattern(int n) {
        //Write your code here...
        for(int i=n; i>=1; i--){
            for(int j=i; j>=1; j--){
                cout << "* ";
            }
            for(int j=0; j<2*(n-i); j++){
                cout << "  ";
            }
            for(int j=i; j>=1; j--){
                cout << "* ";
            }
            cout << endl;
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << "* ";
            }
            for(int j=0; j<2*(n-i); j++){
                cout << "  ";
            }
            for(int j=1; j<=i; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
};
