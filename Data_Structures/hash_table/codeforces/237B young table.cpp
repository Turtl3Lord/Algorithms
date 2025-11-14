#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define INFINITE 999999

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> celulas(n,vector<int>(n,INFINITE));
    vector<int> cellPerLines;
    unordered_map<int,string> storePositions;
    vector<string> swapList; 
    vector<int> orderedCells;
    int swapCount = 0;

    for (int i = 0; i < n; i++)
    {
        int numberOFCells;
        cin>>numberOFCells;
        cellPerLines.push_back(numberOFCells);
    }

    for(int i=0; i<n; i++){

        for (int j = 0; j < cellPerLines[i]; j++)
        {
            int value;
            cin>>value;
            celulas[i][j] = value;
           storePositions[value] = to_string(i+1) + " " + to_string(j+1);

            orderedCells.push_back(value);
        }
        
    }
   

    sort(orderedCells.begin(),orderedCells.end()); 

 int count =0;
    for(int i=0; i<n; i++){

        for (int j = 0; j < cellPerLines[i]; j++)
        {
            if(celulas[i][j]!=orderedCells[count]){
                swapCount++;
                string temp = "";
                swapList.push_back(storePositions[celulas[i][j]] + " " + storePositions[orderedCells[count]]);
                temp = storePositions[celulas[i][j]];
               
               storePositions[celulas[i][j]] =  storePositions[orderedCells[count]];
               storePositions[orderedCells[count]] = temp;
            }
            count++;
        }
        
    }
    



    cout<<swapCount<<endl;
    for (int i = 0; i < swapList.size(); i++)
    {
        cout<<swapList[i]<<endl;
    }
    
}

int main() {
    
   
        solve();
    
    
    return 0;
}