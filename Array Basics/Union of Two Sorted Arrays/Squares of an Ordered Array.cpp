#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int square(int n, int i=2){
        if(i==1){
            return n;
        }
        return n * square(n, i-1);
    }
    vector<int> getSortedSquares(vector<int>& arr) {
        //Write your code here...
        vector<int> res;
        for(int i=0; i<arr.size(); i++){
            arr[i] = square(arr[i]);
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};
