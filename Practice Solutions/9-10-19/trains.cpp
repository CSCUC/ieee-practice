#include<bits/stdc++.h> 
using namespace std; 

bool sortFn(const pair<int,int> &a, const pair<int,int> &b){
  if(a.first != b.first)
    return a.first < b.first;
    
  if(a.second == 0 || a.second == 2)
    return false;
  if(b.second == 0 || b.second == 2)
    return true;
  return false;
}

int main()
{

  int N, NA, NB, T;

  cin >> N;

  for(int tc = 0; tc < N; tc++){
    vector<pair<int,int> > events;
    cin >> T >> NA >> NB;
    char garb;
    int min, hr;
    for(int i = 0; i < NA; i++){
      cin >> hr >> garb >> min;
      events.push_back(pair<int,int>(hr*60+min,0));

      cin >> hr >> garb >> min;
      events.push_back(pair<int,int>(hr*60+min+T,1));
    }

    for(int i = 0; i < NB; i++){
      cin >> hr >> garb >> min;
      events.push_back(pair<int,int>(hr*60+min,2));

      cin >> hr >> garb >> min;
      events.push_back(pair<int,int>(hr*60+min+T,3));
    }

    sort(events.begin(), events.end(), sortFn);

    int A = 0,B = 0, Astart = 0, Bstart = 0;

    for(int i = 0; i < events.size(); i++){
      int time  = events[i].first;
      //cout << "Event at " << time /60 << ':' << time % 60 << "    "  <<events[i].second << endl;
      switch(events[i].second){
        case 0:
          if(A-- == 0){
            Astart++;
            A = 0;
          }
          break;
        case 1:
          B++;
          break;
        case 2:
          if(B-- == 0){
            Bstart++;
            B = 0;
          }
          break;
        case 3:
          A++;
          break;
      }
    }




    cout << "CASE #" << tc + 1 << ": " << Astart << ' ' << Bstart << '\n';


  }







  return 0;
}

/*
bool sortFn(const pair<int,int> &a, const pair<int,int> &b){
  if(a.first != b.first)
    return a.first < b.first;
  if(a.second == 1 || a.second == 3)
    return true;
  return true;
}
*/