#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc, testTotal, n, max;
    cin >> tc;
    testTotal = tc;
    string line;
    while(tc--){
        cin >> n;
        string maxName = "";
        max = 0;
        while(n--){
            getline(cin>>ws,line);
            set<char> charSet;
            for(auto c : line){
                if(c == ' ')
                    continue;
                charSet.insert(c);
            }
            if(charSet.size() == max){
                if(maxName.compare(line) > 0)
                    maxName = line;
            }
            if(charSet.size() > max){
                max = charSet.size();
                maxName = line;
            }
        }
        cout << "Case#" << (testTotal - tc) << ": " <<  maxName << endl;

    }
}