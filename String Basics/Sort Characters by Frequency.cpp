#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    string sortCharactersByFrequency(string s) {
        //Write your code here...
        map<char, int> m;
        for(char ch: s){
            m[ch]++;
        }
        vector<pair<char, int>> freq(m.begin(), m.end());
        
        sort(freq.begin(), freq.end(), [](auto a, auto b){
            if(a.second != b.second){
                return (a.second > b.second);
            }
            return (a.first > b.first);
        });
        
        string res = "";
        
        for(auto p: freq){
            res += string(p.second, p.first);
        }
        
        return res;
    }
};
