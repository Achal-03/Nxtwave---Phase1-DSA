#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    bool isPalindrome(int n) {
        // Write Your Code Here...
        int temp = n;
        int rev=0;
        while(temp!=0){
            int last_digit = temp%10;
            rev = (rev * 10) + last_digit;
            temp/=10;
        }
        return n==rev;
    }
};
