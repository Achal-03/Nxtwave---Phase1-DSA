#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    void bubbleSort(int arr[], int n){
        //Write your code here...
        for(int i=n-1; i>=0; i--){
            bool check = true;
            for(int j=1; j<=i; j++){
                if(arr[j-1]>arr[j]){
                    swap(arr[j-1], arr[j]);
                    check = false;
                }
            }
            if(check){
                break;
            }
        }
    }
};
