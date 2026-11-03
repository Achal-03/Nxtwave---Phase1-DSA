#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int calculateDigitSum(int N1, int N2) {
        // Write your code here...
        int total_sum = 0;
        for(int i=N1; i<=N2; i++){
            int temp=i;
            while(temp!=0){
                total_sum += (temp%10);
                temp/=10;
            }
        }
        return total_sum;
    }
};
