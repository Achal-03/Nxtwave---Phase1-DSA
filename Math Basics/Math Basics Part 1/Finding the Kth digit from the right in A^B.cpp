#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int kthDigit(int A, int B, int k) {
        // Write your code here...
        // int power = pow(A, B);
        long long power = 1;
        for(int i=1; i<=B; i++){
            power = power * A;
        }
        int i=1;
        while(i<=k and power!=0){
            int last_digit = power%10;
            if(i==k){
                return last_digit;
            }
            power/=10;
            i++;
        }
    }
};
