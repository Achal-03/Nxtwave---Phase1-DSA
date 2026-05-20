#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int largestElement(int arr[], int n){
        //Write your code here...
        int maxi = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>maxi){
                maxi = arr[i];
            }
        }
        return maxi;
    }
};
