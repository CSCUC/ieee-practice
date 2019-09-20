#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc, sum, n, num;
    cin >> tc;
    while(tc--){
        set<int> valSet;
        bool found = false;
        cin >> sum >> n;
        while(n--){
            cin >> num;
            if(!found && valSet.find(sum - num) != valSet.end()){
                found = true;
                if(num > sum - num)
                    cout << sum - num << ' ' << num << endl;
                else 
                    cout << num << ' ' << sum - num << endl;
            }
            valSet.insert(num);

        }
        if(!found)
            cout << "!OK" << endl;
    }
}

// https://csacademy.com/ieeextreme-practice/task/bear-sums/statement/