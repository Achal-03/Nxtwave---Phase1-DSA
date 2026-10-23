#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void leftRotate(int arr[], int n, int k){
        //Write your code here...
        //brute force approach
        // k = k%n;
        // for(int i=0; i<k; i++){
        //     int first = arr[0];
        //     for(int j=1; j<n; j++){
        //         arr[j-1] = arr[j];
        //     }
        //     arr[n-1] = first;
        // }
        //optimal approach
        k = k%n;
        int left=0, right = k-1;
        while(left <= right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        left = k, right = n-1;
        while(left<=right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        left = 0, right = n-1;
        while(left<=right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};
