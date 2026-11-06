#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int secondLargestDigit(int num) {
        //Write your code here...
        int max1=-1, max2=-1;
        while(num!=0){
            int last_digit = num%10;
            if(last_digit>max1){
                max2 = max1;
                max1 = last_digit;
            }
            if(last_digit<max1 and last_digit>max2){
                max2 = last_digit;
            }
            num /= 10;
        }
        return max2;
    }

};
