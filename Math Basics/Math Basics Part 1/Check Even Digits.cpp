#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkEvenDigits(int num) {
        //Write your code here...
        while(num!=0){
            int last_digit=num%10;
            if(last_digit%2!=0){
                return false;
            }
            num /= 10;
        }
        return true;
    }

};
