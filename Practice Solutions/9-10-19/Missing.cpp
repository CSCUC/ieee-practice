#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> vals;                      // create a set of ints
    int n, input;
    cin >> n;                           // how many vals to input
    for(int i = 0; i < n; i++){
        cin >> input;
        vals.insert(input);             //add vals to set
    }
    
    for(int i = 1; i < n + 2; i++){     // count up from 1
        if(vals.find(i) == vals.end()){ // if a missing el is found
            cout << i << endl;          // print it
            break;                      // exit the loop
        }
    }
}

// !NOTE! this solution is O(n) time and space
// let me know if anyone finds a O(1) space solution