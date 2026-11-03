#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPrime(int n) {
        // Write Your Code Here...
        vector<int> v;
        int x = sqrt(n);
        // for(int i=1; i<=x; i++){
        //     if(n%i==0){
        //         v.push_back(i);
        //         if(n/i!=i){
        //             v.push_back(n/i);
        //         }
        //     }
        // }
        // return v.size()==2;
        if(n==1){
            return false;
        }
        for(int i=2; i<=x; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
