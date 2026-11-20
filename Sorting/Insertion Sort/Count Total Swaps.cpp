#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int countSwaps(int arr[], int n){
        //Write your code here...
        int count=0;
        for(int i=1; i<n; i++){
            int j=i;
            while(arr[j-1]>arr[j] and j>=1){
                swap(arr[j-1], arr[j]);
                j--;
                count++;
            }
        }
        return count;
    }
};
