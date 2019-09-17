#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second

typedef long double ld;

typedef unsigned long long lli;


int maxOf(int a, int b){
    return (a > b ? a : b);
}

int minOf(int a, int b){
    return (a < b ? a : b);
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int tests = 0;
    cin >> tests;
    for(int test = 0; test < tests; test++){

        int N;
        cin >> N;

        char inChar;
        cout << "Case #" << test + 1 << ": ";

        for(long i = 0; i < 2*N - 2 ; i++){
            cin >> inChar;
            cout << (inChar == 'E'? 'S' : 'E');
        }

        cout << endl;
    }
}

// https://codingcompetitions.withgoogle.com/codejam/round/0000000000051705/00000000000881da