#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    vector<int> unionOfTwoSortedArrays(vector<int> a, vector<int> b){
        //Write your code here
        set<int> s;
        for(int x: a){
            s.insert(x);
        }
        for(int x: b){
            s.insert(x);
        }
        vector<int> res(s.begin(), s.end());
        return res;
    }
};
