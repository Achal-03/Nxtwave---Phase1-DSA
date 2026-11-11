#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    void reverse(int arr[], int N, int i=0){
        //Write your code here...
        if(i>=N/2){
            return;
        }
        swap(arr[i], arr[N-i-1]);
        return reverse(arr, N, i+1);
    }
};
