#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int sumOfDivisors(int num) {
        //Write your code here...
        int s=0;
        int n = sqrt(num);
        for(int i=1; i<=n; i++){
            if(num%i==0){
                s += i;
                if(i != num/i){
                    s += num/i;
                }
            }
        }
        return s;
    }

};
