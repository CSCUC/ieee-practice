#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long
#define MAX 1000000000000000000

//lli a = 18,446,744,073,709,551,615

class bigInt{
public:
    vector<lli> vals;

    bigInt(lli in){
        vals.push_back(in);
    }
    bigInt(){}
    void operator=(const bigInt& right){
        vals.clear();
        for(auto val : right.vals){
            vals.push_back(val);
        }
    }
    
    bigInt operator+(const bigInt& right){
        bigInt out;
        lli carry = 0, i = 0, curr;
        while(true){
            curr = (i < right.vals.size() ? right.vals[i] : 0) + 
            (i < vals.size() ? vals[i] : 0) + carry;
            out.vals.push_back(curr % MAX);
            carry = curr / MAX;
            i++;
            if(right.vals.size() <= i && vals.size() <= i && carry == 0)
                break;
        }
        return out;
    }
    
    friend ostream& operator<<(ostream& out, const bigInt& right){
        for(int i = right.vals.size() - 1; i >=0; i--){
            if(i == right.vals.size() - 1)
                cout << right.vals[i];
            else
                out << setw(18) << setfill('0') << right.vals[i];
        }
        return out;
    }
};

int main(){  

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    bigInt fib [22000] = {bigInt(1), bigInt(1)};
    for(int i = 2; i < 22001; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int tc, n;
    cin >> tc;
    while(tc--){
        cin >> n;
        cout << fib[n] << endl;
    }
}

// https://csacademy.com/ieeextreme-practice/task/96c8b1313edd72abf600facb0a14dbab/