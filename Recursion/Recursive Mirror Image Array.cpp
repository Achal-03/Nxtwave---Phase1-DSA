#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    bool isMirrorImage(vector<int>& arr, int n, int i=0){
        // Code Here
        if(i>=n/2){
            return true;
        }
        if(arr[i]!=arr[n-i-1]){
            return false;
        }
        return isMirrorImage(arr, n, i+1);
    }
};
