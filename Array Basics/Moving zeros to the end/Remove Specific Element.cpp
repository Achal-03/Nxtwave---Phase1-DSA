#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int removeSpecificElement(vector<int>& arr, int target) {
        //Write your code here...
        int i=0;
        while(i<arr.size()){
            if(arr[i] == target){
                arr.erase(arr.begin()+i);
            }
            else{
                i++;
            }
        }
        return arr.size();
    }
};
