#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int smallestElement(int arr[], int n){
        //Write your code here...
        int mini = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i] < mini){
                mini = arr[i];
            }
        }
        return mini;
    }
};
