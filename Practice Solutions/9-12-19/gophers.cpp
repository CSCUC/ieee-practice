#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, N, M;
    cin >> T >> N >> M;

    for(int test = 0; test < T; test++){
        int *sol  = new int[M];

        int guesses [7] = {18,17,16,15,14,13,11};

        for(int guess = 0; guess < 7; guess++){
            for(int i = 0; i < 18; i++)         
                cout << guesses[guess] << ' ';
            cout << endl;

            int count = 0;
            for(int i = 0; i < 18; i++){
                int temp;
                cin >> temp;
                count += temp;
            }

            count %= guesses[guess];

            int insert = 0;
            while(insert * guesses[guess] + count <= M){
                sol[insert * guesses[guess] + count] += 1;
                insert += 1;
            }
        }
        int output = -1;
        for(int i = 0; i <= M; i++){
            if(sol[i] == 7){
                output = i;
                break;
            }
        }
        cout << output << endl;

        cin >> output;
        if(output == -1)
            break;
    }
}

// https://codingcompetitions.withgoogle.com/codejam/round/0000000000051635/0000000000104f1a