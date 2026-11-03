#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkArmstrongNumber(int num) {
        //Write your code here...
        int temp = num, n = num;
        int count=0, total_sum=0;
        while(temp!=0){
            temp/=10;
            count++;
        }
        while(n!=0){
            int last_digit = n%10;
            total_sum += pow(last_digit, count);
            n /= 10;
        }
        return total_sum==num;
    }

};
