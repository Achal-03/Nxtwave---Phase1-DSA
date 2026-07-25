#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    bool validAnagram(string s1, string s2) {
        int lengthofs1 = s1.length();
        int lengthofs2 = s2.length();
        if (lengthofs1 != lengthofs2){
            return false;
        }
        map<char, int> s1_count;
        for(int i=0; i<lengthofs1; i++){
            if(s1_count.find(s1[i]) != s1_count.end()){
                s1_count[s1[i]]++;
            }
            else{
                s1_count[s1[i]] = 1;
            }
        }
        map<char, int> s2_count;
        for(int i=0; i<lengthofs2; i++){
            if(s2_count.find(s2[i]) != s2_count.end()){
                s2_count[s2[i]]++;
            }
            else{
                s2_count[s2[i]] = 1;
            }
        }
        return s1_count == s2_count;
    }

};
