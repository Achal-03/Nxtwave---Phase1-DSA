#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int removeDuplicates(int arr[], int n){
        //Write your code here...
        int pos = 0;
        for(int i=1; i<n; i++){
            if(arr[pos] != arr[i]){
                pos++;
                arr[pos] = arr[i];
            }
        }
        return pos+1;
    }
};
