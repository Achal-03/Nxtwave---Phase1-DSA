#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void moveZerosToEnd(int arr[],int n){
        //Write your code here...
        // if(n==1){
        //     return;
        // }
        // int pos = 0;
        // for(int i=1; i<n; i++){
        //     if(arr[pos]==0 && arr[i]!=0){
        //         swap(arr[pos], arr[i]);
        //         pos++;
        //     }
        //     if(arr[pos]!=0){
        //         pos++;
        //         if(pos+1 == n){
        //             return;
        //         }
        //     }
        // }
        // for(int i=pos; i<n; i++){
        //     arr[pos] = 0;
        //     pos++;
        // }
        // for(int i=0; i<n; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        int pos=0;
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                swap(arr[pos], arr[i]);
                pos++;
            }
        }
    }
};
