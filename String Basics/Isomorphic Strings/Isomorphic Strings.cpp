#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool helper(string s2, string s1){
        map<char, char> m;
        for(int i=0; i<s1.length(); i++){
            if(m.find(s1[i]) != m.end()){
                if(m[s1[i]] != s2[i]){
                    return false;
                }
            }
            else{
                m[s1[i]] = s2[i];
            }
        }
        return true;
    }
    
    bool isomorphic(string s1, string s2) {
        //Write your code here...
        if(s1.length() != s2.length()){
            return false;
        }
        bool res1 = helper(s1, s2);
        bool res2 = helper(s2, s1);
        return res1&&res2;
    }
};
