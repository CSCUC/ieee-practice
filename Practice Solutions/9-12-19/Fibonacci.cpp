#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
    lli T, m;

    int fibVals[60] = {1, 1}; // only ever need the first 59 vals, they are cyclic
    
    for(int i = 2; i < 60; i++)
        fibVals[i] = (fibVals[i-1] + fibVals[i-2]) % 10;

    cin >> T;
    
    while(T--){
        cin >> m;
        cout << fibVals[m % 60] << endl;
    }
}

// https://csacademy.com/ieeextreme-practice/task/09f92a575cc006d4a6a7f525f370ec30/
// https://oeis.org/A001175