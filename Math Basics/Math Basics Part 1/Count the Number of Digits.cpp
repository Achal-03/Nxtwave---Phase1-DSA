#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countDigits(int n){
        //Write your code here...
        int no_of_digits=0;
        while(n!=0){
            no_of_digits++;
            n /= 10;
        }
        return no_of_digits;
    }
};
