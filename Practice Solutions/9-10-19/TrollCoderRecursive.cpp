#include<bits/stdc++.h>
using namespace std;

void solve(int[],int, int, int, int, int);

int main()
{
    int count, n, test;
    int res[100] = {0};             

    cin >> n;

    cout << 'Q';
    for(int i = 0; i < n; i++)
        cout << " 1";
    cout << endl;                   

    cin >> count;           

    solve(res, 0, n, n, count, count);

    cout << 'A';  
    for(int i = 0; i < n; i++)      
        cout << ' ' << res[i];     
    cout << endl;
    return 0;
}

void solve(int arr[], int left, int right, int max, int subCount, int totalCount){
    
    if (subCount == 0){
        for(int i = left; i < right; i++)
            arr[i] = 0;
        return;
    }
    
    if(subCount == right - left){
        for(int i = left; i < right; i++)
            arr[i] = 1;
        return;
    }
    
    int after, newCount, leftCount, leftSize = (right - left) / 2;

    cout << 'Q';
    for(int i = 0; i < left; i++)
        cout << " 1";
    for(int i = left; i < leftSize + left; i++)
        cout << " 0";
    for(int i = leftSize + left; i < max; i++)
        cout << " 1";
    cout << endl;

    cin >> after;
    leftCount = (leftSize + totalCount - after) / 2;

    solve(arr, left, left + leftSize, max, leftCount, totalCount);
    solve(arr, left + leftSize, right, max, subCount - leftCount, totalCount);


}