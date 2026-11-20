#include <bits/stdc++.h>
using namespace std;

class solution{
public:
  void insertionSort(int arr[], int n){
    //Write your code here...
    for(int i=1; i<n; i++){
        int j=i;
        while(arr[j-1]<arr[j] and j>=1){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
  }
};
