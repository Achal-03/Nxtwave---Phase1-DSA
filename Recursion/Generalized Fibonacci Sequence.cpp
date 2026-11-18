#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    vector<int> generateGeneralizedFibonacci(int k, vector<int>& start, int n) {
        // Code Here
        if(start.size()==n){
            return start;
        }
        else{
            start.push_back(accumulate(start.begin()+start.size()-k, start.end(), 0));
        }
        return generateGeneralizedFibonacci(k, start, n);
    }
};
