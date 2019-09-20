// yet another reason to use python
#include<bits/stdc++.h>
using namespace std;

#define ld long double
#define PI 3.141592653589793

int main(){
    ld X[26], Y[26];
    char letter;
    ld r, theta;

    cin >> r;

    for (int i = 0; i < 26; i++){
        cin >> letter;
        cin >> theta;

        X[letter - 'A'] = r * cosl((PI * theta) / 180.0);
        Y[letter - 'A'] = r * sinl((PI * theta) / 180.0);

    }
    
    ld x = 0.0, y = 0.0, dist = 0.0;

    string input;

    getline(cin>>ws,input);

    for(char c : input){
        if(isalpha(c)){
            ld xCurr = X[toupper(c) - 'A'];
            ld yCurr = Y[toupper(c) - 'A'];
            
            ld delta = sqrtl((xCurr - x) * (xCurr - x) + (yCurr - y) * (yCurr - y));

            x = xCurr;
            y = yCurr;
            dist += delta;
            cout << setprecision(15) <<  c << "    " << delta << endl;
        }
    }
    cout << ceil(dist);

}