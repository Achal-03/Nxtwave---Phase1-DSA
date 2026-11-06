#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool checkPerfectNumber(int num) {
        //Write your code here...
        if(num==1){
            return false;
        }
        int x = sqrt(num);
        int sum = 1;
        for(int i=2; i<=x; i++){
            if(num%i==0){
                sum += i;
                if(i != num/i){
                    sum += num/i;
                }
            }
        }
        return (sum==num);
    }

};
