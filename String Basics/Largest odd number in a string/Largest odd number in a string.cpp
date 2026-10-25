#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string largestOddNumber(string s) {
        //Write your code here...
        for(int i=s.length()-1; i>=0; i--){
            if((int)s[i]%2!=0){
                return s.substr(0, i+1);
            }
        }
        return "";
    }
};
