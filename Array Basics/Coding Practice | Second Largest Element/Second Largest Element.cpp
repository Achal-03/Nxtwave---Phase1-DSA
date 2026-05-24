#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int secondLargestElement(int arr[], int n){
        //Write your code here...
        int maxi = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
        }
        int second_maxi = INT_MIN;
        for(int i=1; i<n; i++){
            if((arr[i] < maxi) && arr[i] > second_maxi){
                second_maxi = arr[i];
            }
        }
        return second_maxi;
    }
};
