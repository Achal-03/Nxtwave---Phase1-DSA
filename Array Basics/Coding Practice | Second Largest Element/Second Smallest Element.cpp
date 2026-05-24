#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondSmallestElement(int arr[], int n){
        //Write your code here...
        int mini = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]<mini){
                mini = arr[i];
            }
        }
        int second_mini = INT_MAX;
        for(int i=0; i<n; i++){
            if(arr[i]>mini && arr[i]<second_mini){
                second_mini = arr[i];
            }
        }
        return second_mini;
    }
};
