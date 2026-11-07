#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int sumOfDigits(int num) {
        //Write your code here...
        int sum = num%9;
        if(sum == 0){
            return 9;
        }
        return sum;
    }

};
