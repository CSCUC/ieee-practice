#include<bits/stdc++.h>

using namespace std;

#define x first
#define y second

typedef long double ld;

typedef unsigned long long lli;

// I did not initially find the easy solution, so I ran with this one
// it passes all test cases


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

        char inChar, lastChar, firstChar;

        long countOther = 0;

        cin >> firstChar;

        long crossOver = 0;
        bool found = false;

        for(long i = 1; i < 2*N - 2 ; i++){
            cin >> inChar;

            if(inChar != firstChar){
                if(lastChar == inChar)
                    crossOver = countOther;
                countOther++;
            }
            lastChar = inChar;
        }
        
        long countE = N-1;
        long countS = N-1;

        //cout << "First Char is: " << firstChar << " lastChar is: " << lastChar << " Crossover is: " << crossOver << endl;

        cout << "Case #" << test + 1 << ": ";

        if(firstChar == 'E'){

            if(lastChar == 'S'){
                for(int i = 0; i < countS; i++)
                    cout << 'S';
                for(int i = 0; i < countE; i++)
                    cout << 'E';
            }

            else{
                for(int i = 0; i < crossOver; i++)
                    cout << 'S';
                for(int i = 0; i < countE; i++)
                    cout << 'E';
                for(int i = crossOver; i < countS; i++)
                    cout << 'S';
            }
        }
        else{
            if(lastChar == 'E'){
                for(int i = 0; i < countE; i++)
                    cout << 'E';
                for(int i = 0; i < countS; i++)
                    cout << 'S';
            }

            else{
                for(int i = 0; i < crossOver; i++)
                    cout << 'E';
                for(int i = 0; i < countE; i++)
                    cout << 'S';
                for(int i = crossOver; i < countE; i++)
                    cout << 'E';
            }
        }
        cout << endl;
    }
}