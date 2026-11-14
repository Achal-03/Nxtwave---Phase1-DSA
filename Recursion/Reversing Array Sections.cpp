#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void reverseArraySection(vector<int>& arr, int left, int right) {
        // Code Here
        if(left>right){
            return;
        }
        swap(arr[left], arr[right]);
        return reverseArraySection(arr, left+1, right-1);
    }
};
