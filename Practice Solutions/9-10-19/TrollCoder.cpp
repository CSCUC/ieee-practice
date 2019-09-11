#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int count, n, test;
    int res[100] = {0};             // create result array large enough to hold max input (100)

    cin >> n;

    cout << 'Q';
    for(int i = 0; i < n; i++)
        cout << " 1";
    cout << endl;                   // print out Q1111...111 with n 1's

    cin >> count;                   // save the number of 1's in the solution to count

                                    // now we will generate queries with all 1's and one zero
    for(int i = 0; i < n; i++){     // iterate through all positions in the query, 0 -> n
        cout << 'Q';                // create a Query
        for(int j = 0; j < n; j++){ // iterate though the current query
            if(j == i)              // if the position in the query is the index, 
                cout << " 0";       // that is where the zero goes
            else
                cout << " 1";       // else put a 1
        }
        cout << endl;               // end query

        cin >> test;                // get responce from code runner
        if(count > test)            // if our new guess is worse than all 1's,
            res[i] = 1;             // then we know there is a one in this query index
        else
            res[i] = 0;             // otherwise there is not
    }

    cout << 'A';                    // output the answer
    for(int i = 0; i < n; i++)      
        cout << ' ' << res[i];      // go through result array, outputing each value
    cout << endl;
    return 0;
}

// https://csacademy.com/ieeextreme-practice/task/troll-coder/
// test your code here