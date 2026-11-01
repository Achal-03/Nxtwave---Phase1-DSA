#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> printDivisors(int n) {
        // Write your code here...
        int x = sqrt(n);
        vector<int> v;
        for(int i=1; i<=x; i++){
            if(n%i==0){
                v.push_back(i);
                if(n/i != i){
                    v.push_back(n/i);
                }
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};
