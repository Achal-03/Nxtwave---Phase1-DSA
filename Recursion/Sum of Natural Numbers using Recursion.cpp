#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int recursionSum(int N) {
        // Write your code here...
        if(N==1){
            return 1;
        }
        return N + recursionSum(N-1);
    }
};
