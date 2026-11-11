#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    bool checkPalindrome(string s, int N=0, int i=0){
        //Write your code here...
        N=s.length();
        if(i>=N/2){
            return true;
        }
        if(s[i]!=s[N-i-1]){
            return false;
        }
        return checkPalindrome(s, N, i+1);
    }
};
