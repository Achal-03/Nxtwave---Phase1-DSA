#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    string longest_common_prefix(vector<string>& words) {
        //Write your code here...
        int n = words.size();
        sort(words.begin(), words.end());
        
        string s1 = words[0];
        string s2 = words[n-1];
        if(s1[0] != s2[0]){
            return "";
        }
        else{
            string result="";
            for(int i=0; i<s1.length(); i++){
                if(s1[i] == s2[i]){
                    result += s1[i];
                }
            }
            return result;
        }
    }

};
