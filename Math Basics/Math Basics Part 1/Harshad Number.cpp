#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkHarshadNumber(int num) {
        //Write your code here...
        int temp = num;
        int sum = 0;
        while(temp!=0){
            sum += (temp%10);
            temp /= 10;
        }
        return (num%sum==0);
    }
};
