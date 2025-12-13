#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(x) (x).begin(), (x).end()


//solved using sliding window
void solve() {
    int n, t;
    cin>>n>>t;

    vector<int> a(n);
    int x;
    int maxBooksCount=0;
    int currentBooksTime=0;
    int k=0;

    for (int i = 0; i < n; i++)
    {
       cin>>x;
       a[i]=x;
    }

    for (int i = 0; i < n; i++)
    { 
        currentBooksTime+=a[i];
       if(currentBooksTime<=t){
        maxBooksCount++;
       } else{
        currentBooksTime-= a[k];
       
        k++;
       }
        
    }

    cout<<maxBooksCount<<endl;
    
    
}

int main() {
  

        solve();
    

    return 0;
}