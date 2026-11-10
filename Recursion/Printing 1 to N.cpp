#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void print1toNInAscendingOrder(int N, int i=1){
        // Code Here
        if(i>N){
            return;
        }
        cout << i << endl;
        print1toNInAscendingOrder(N, i+1);
        
    }
};
