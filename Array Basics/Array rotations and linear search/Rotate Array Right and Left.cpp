#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    vector<int> rotateArray(vector<int>& arr, int x, int y) {
        //Write your code here...
        int n = arr.size();
        x = x%n;
        y = y%n;
        while(x>=1){
            int last_digit = arr[n-1];
            arr.pop_back();
            arr.insert(arr.begin(), last_digit);
            x--;
        }
        while(y>=1){
            int first_element = arr[0];
            arr.erase(arr.begin());
            arr.push_back(first_element);
            y--;
        }
        return arr;
    }
};
