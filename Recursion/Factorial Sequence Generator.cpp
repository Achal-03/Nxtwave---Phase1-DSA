#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<long long> factorialSequence(int n, vector<long long> v = {}) {
        //Code Here
        if(n==1){
            v.push_back(1);
            return v;
        }
        v = factorialSequence(n-1, v);
        v.push_back(v.back() * n);
        return v;
    }
};
