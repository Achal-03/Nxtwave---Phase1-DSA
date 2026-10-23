#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToFront(int arr[], int n){
        //Write your code here...
        int pos = n-1;
        for(int i=n-1; i>=0; i--){
            if(arr[i]!=0){
                swap(arr[pos], arr[i]);
                pos--;
            }
        }
    }
};
