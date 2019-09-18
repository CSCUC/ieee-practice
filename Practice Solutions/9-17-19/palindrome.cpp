#include<bits/stdc++.h>
using namespace std;

int main(){
    string palidrone;
    cin >> palidrone;
    bool isPali = true;
    for(int i = 0; i < palidrone.size() / 2; i++){
        if(palidrone[i] != palidrone[palidrone.size() - 1 - i])
            isPali = false;
    }
    if (isPali)
        cout << "Palindrome!" << endl;
}