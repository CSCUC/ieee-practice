#include<bits/stdc++.h> 
using namespace std; 

int main()
{

  int N, S, Q, used = 0, numLeft, T;

  cin >> N;

  for(int tc = 0; tc < N; tc++){
    cin >> S;
    string garb;
    for(int i = 0; i < S; i++)
      getline(cin>>ws,garb);
    
    cin >> Q;

    //numLeft = S;
    used = 0;
    set<string> queries;
    string line;
    for(int i = 0; i < Q; i++){
      getline(cin>>ws,line);
      if(auto itr = queries.find(line) == queries.end()){
        if(queries.size() == S - 1){
          queries.clear();
          used++;
        }
        queries.insert(line);

      }

    }
    cout << "CASE #" << tc + 1 << ": " << used << '\n';


  }







  return 0;
}