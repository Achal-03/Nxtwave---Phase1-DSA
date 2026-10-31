#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int reverseNumber(int N) {
        // Write your code here...
        int rev=0;
        while(N!=0){
            int last_digit = N%10;
            rev = (rev*10)+last_digit;
            N/=10;
        }
        return rev;
    }
};
