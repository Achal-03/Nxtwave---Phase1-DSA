#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string reverseWords(string text) {
        //Write your code here...
        while(text.length()>0 && text.back()==' '){
            text.pop_back();
        }
        while(text.length()>0 && text[0]==' '){
            text.erase(0, 1);
        }
        string result = "";
        int p=text.length();
        for(int i=text.length()-1; i>=0; i--){
            if(text[i] == ' '){
                if(i == p-1) {
                    p = i;
                    continue;
                }
                
                result += text.substr(i+1, p-i-1);
                p = i;
                result += " ";
            }
            if(i==0){
                result += text.substr(i, p);
            }
        }
        return result;
    }
};
