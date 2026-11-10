#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void print1toNInDescendingOrder(int N) {
        // Code Here
        if(N<1){
            return;
        }
        cout<<N<<endl;
        print1toNInDescendingOrder(N-1);
    }
};
