#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   
    int n;
    cin >> n;
 
    map<int, vector<string>> map;
   
    string name;
    int height;
 
    for(int i = 0; i < n; i++){
       cin >> name >> height;
       map[height].push_back(name);
    }
 
    int start = 1;

    for(auto itr = map.begin(); itr != map.end(); itr++){
        vector<string> *vals = &(itr -> second);
        sort(vals -> begin(), vals -> end());
        for(auto str = vals -> begin(); str != vals -> end(); str++){
            cout << *str << ' ';
        }
        cout << start << ' ' << start + vals -> size() - 1 << '\n';
        start += vals -> size();
    }
    return 0;
}

/*
6                      
TheJoker 180
HarleyQuinn 160
MrHammer 220
Bloody 220
Muggs 180
Paulie 180

test your code here
https://csacademy.com/ieeextreme-practice/task/8761fb7efefcf1d890df1d8d91cae241/
*/