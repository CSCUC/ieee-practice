#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
int main(){
    int tc;
    ull a, b;

    cin >> tc;
    while(tc--){
        cin >> a >> b;

        int count = 0;
        while(a != b){
            if (a > b){
                a /= 2;
                count++;
            }
            if(b > a){
                b /= 2;
                count++;
            }
        }
        cout << count << endl;
    }
}