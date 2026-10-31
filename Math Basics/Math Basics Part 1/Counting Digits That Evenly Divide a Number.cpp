#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int evenlyDivides(int N) {
        // Write your code here...
        int no_of_divisible_digits=0;
        int temp = N;
        while(temp!=0){
            int last_digit = temp%10;
            if(N%last_digit == 0){
                no_of_divisible_digits++;
            }
            temp/=10;
        }
        return no_of_divisible_digits;
    }
};
