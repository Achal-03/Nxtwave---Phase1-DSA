#include <bits/stdc++.h>
using namespace std;

class solution {
public:    
    void rearrangeArray(vector<int>& arr, int k) {
        for(int i=0; i<k; i++){
            int min_idx = i;
            for(int j=i+1; j<arr.size(); j++){
                if(arr[j] < arr[min_idx]){
                    min_idx = j;
                }
            }
            swap(arr[i], arr[min_idx]);
        }
    }
};
