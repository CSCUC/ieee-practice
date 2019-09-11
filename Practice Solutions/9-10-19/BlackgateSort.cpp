#include<bits/stdc++.h>
using namespace std;
 
bool sortbysec(const pair<string,int> &a,
              const pair<string,int> &b)
{
   if(a.second != b.second)
     return (a.second < b.second);
   if(a.first.compare(b.first) < 0)
      return true;
   return false;
}
 
int main()
{
   
    int n;
    cin >> n;
 
    vector< pair <string, int> > vect;
   
    string name[n];
    int height[n];
 
    for(int i = 0; i < n; i++){
       cin >> name[i] >> height[i];
    }
 
    for (int i=0; i<n; i++){
       vect.push_back( make_pair(name[i],height[i]) );
    }
 
    sort(vect.begin(), vect.end(), sortbysec);
 
    cout << endl;
    int start = 1;
    int val = vect[0].second;
    int end = 1;
    cout << vect[0].first << ' ';
 
    for(int i = 1; i < n; i++){
 
      if(val != vect[i].second){
         cout << start << ' ' << end << '\n';
         start = end + 1;
         val = vect[i].second;
      }
      cout << vect[i].first << ' ';
      end ++;
     
    }
    cout << start << ' ' << end << '\n' << endl;
 
    return 0;
}

/*
6                      
TheJoker 180
HarleyQuin 160
MrHammer 220
Boody 220
Muggs 180
Paulie 180
*/