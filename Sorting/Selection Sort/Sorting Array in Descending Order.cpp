#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    void selectionSort(int arr[], int n){
        //Write your code here...
        for(int i=0; i<n-1; i++){
            int max_idx=i;
            for(int j=i+1; j<n; j++){
                if(arr[j]>arr[max_idx]){
                    max_idx = j;
                }
            }
            swap(arr[i], arr[max_idx]);
        }
    }
};
