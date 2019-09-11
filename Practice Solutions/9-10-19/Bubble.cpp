#include <iostream>
using namespace std;

int main(){
    int n;                  // n is the size of the array
    cin >> n;               // get n from input stream

    int arr[100] = {0};     // problem statement gave maxSize = 100

    for(int i = 0; i < n; i++)
        cin >> arr[i];      // input array values

    int swapCount = 0;      // keep track of how many times a swap occurs

    for(int bubbleEnd = n - 1; bubbleEnd > 0; bubbleEnd--) {
                            // the sort looks first at the leading n - 1 pairs,
                            // then one less per iteration

        for(int i = 0; i < bubbleEnd; i++) {
                            // look at the ith pair, 
                            // where i starts from 0 and goes to bubbleEnd

            if(arr[ i ] > arr[ i+1] ) {
                            // if the elements are in the wrong order...
                int temp = arr[i]; // swap them
                arr[i]  = arr[i + 1];
                arr[i + 1] = temp;
                swapCount++;
            }
        }
    }                       // output swap count
    cout << "Swaps needed: " << swapCount << endl;
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';  // output array
    cout << endl;
}