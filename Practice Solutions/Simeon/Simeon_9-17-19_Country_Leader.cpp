// Simeon D.
// 

#include <iostream>
#include <vector>
#include<algorithm>
#include <set>
#include <string>
#include <fstream>

using namespace std;
using std::ofstream;
using std::istream;



int Unique(string);

int main(){
    
    ofstream outClientFile("result2.txt",ios::out);
    ifstream inClientFile("A-large-practice.in.txt", ios::in);

    
    int n;

    inClientFile >> n;
    
    for(int o = 0; o < n; o++){
        int m;
      
        inClientFile >> m;
        
        vector<string> names(m+1);
        vector<int> uniq1(m+1);
        
        for(int b = 0; b < m+1; b++){
            
            string s;
            getline(inClientFile,s);
            names[b] = s;
            uniq1[b] = Unique(s);
            
        }
        
        
        vector<int> uniqueCopy(m+1);
        
        for(int j = 0; j < m+1; j++){
            uniqueCopy[j] = uniq1[j];
        }
        
        sort(uniqueCopy.begin(),uniqueCopy.end(), greater<int>());
        
        vector<string>possString;
        
        for(int i = 0; i < m+1; i++)
        {
            if(uniq1[i] == uniqueCopy[0]){
                possString.push_back(names[i]);
            }
        }
        sort(possString.begin(), possString.end());

        outClientFile << "Case #" << o+1 << ": " << possString[0] << endl;
        
        
    }
    
    return 0;
    
}

int Unique(string a){
    
    bool check[26] = {false};
    int total = 0;
    
    for(int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
            continue;
        if( check[a[i]-65] == false){
            check[a[i]-65] = true;
            total++;
        }
    }
    return total;
}


