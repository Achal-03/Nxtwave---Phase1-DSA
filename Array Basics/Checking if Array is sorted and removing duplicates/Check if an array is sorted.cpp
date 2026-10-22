#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool isSorted(int arr[],int n){
        //Write your code here...
        for(int i=1; i<n; i++){
            if(arr[i] < arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
