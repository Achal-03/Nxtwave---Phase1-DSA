#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeDup(vector<int>& arr) {
        int n = arr.size();
        int pos = 0;
        int temp = 0;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[pos]){
                if(temp==1){
                    continue;
                }
                pos++;
                arr[pos] = arr[i];
                temp++;
            }
            else{
                temp=0;
                pos++;
                arr[pos] = arr[i];
            }
        }
        return pos+1;
    }
};
