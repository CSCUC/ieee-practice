// stairs.cpp
// gets 33.33 but translated python code gets 100/100 LOL
#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        // recreated each run
        int n = 0, n1 = 1, n2 = 1;
        int uI = 0;
        cin >> uI;
        // Fibonacci Sequence
        for(int i = 0; i < uI - 1; i++)
        {
              n = n1 + n2;
              n1 = n2;
              n2 = n;
        }
        cout << n2 << endl;
    }
    return 0;
}
