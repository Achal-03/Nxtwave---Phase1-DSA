#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string sortCharactersByFrequency(string s) {
        //Write your code here...
        map<char, int> mp;
        for(int i=0; i<s.length(); i++){
            if(m.find(s[i]) != m.end()){
                m[s[i]] += 1;
            }
            else{
                m[s[i]] = 1;
            }
        }
        for (auto pair : m){
            cout << pair.first 
        }
    }
};
