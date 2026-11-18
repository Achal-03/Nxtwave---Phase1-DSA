#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int fib(int n){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        return fib(n-1)+fib(n-2);
    }
    
    vector<int> getTransformedArray(vector<int>& arr, int n, int index=0) {
        // Code Here
        if(index==n){
            return arr;
        }
        arr[index] = fib(arr[index]);
        return getTransformedArray(arr, n, index+1);
    }
};
