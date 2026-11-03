#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int countRepeatingDigits(int num) {
        //Write your code here...
        map<int, int> m;
        int count=0;
        while(num!=0){
            int last_digit = num%10;
            if(m.find(last_digit)!=m.end()){
                m[last_digit] += 1;
                if(m[last_digit]<=2){
                    count++;
                }
            }
            else{
                m[last_digit]=1;
            }
            num /= 10;
        }
        return count;
    }

};
