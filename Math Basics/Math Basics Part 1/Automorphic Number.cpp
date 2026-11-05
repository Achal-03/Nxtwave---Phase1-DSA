#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkAutomorphicNumber(int num) {
        //Write your code here...
    //     int no_of_digits=0, reversed_num=0;
    //     int temp=num;
    //     while(temp!=0){
    //         int last_digit = temp%10;
    //         reversed_num = (reversed_num*10) + last_digit;
    //         temp /= 10;
    //     }
    //     int power = pow(num, 2);
    //     int power_reversed = 0;
    //     while(power!=0){
    //         int last_digit = power%10;
    //         power_reversed = (power_reversed*10)+last_digit;
    //         power/=10;
    //         if(to_string(reversed_num)==to_string(power_reversed)){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
    
    long long square = 1LL * num * num;

        while (num > 0) {
            if (num % 10 != square % 10) {
                return false;
            }

            num /= 10;
            square /= 10;
        }

        return true;
    }

};
