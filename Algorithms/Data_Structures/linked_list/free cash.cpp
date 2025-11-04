#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void solve() {
    int n;
    cin>> n;
    unordered_map<string,int>values;
    int bigger = 1;
    for (int i = 0; i < n; i++)
    {
        int h,m;
        cin>>h>>m;
        string key = to_string(h) + ":" + to_string(m);


        values[key]++;
        if(values[key]>bigger)
        bigger = values[key];

    }
    cout<<bigger<<endl;
    
}

int main() {
    
   
        solve();
   
    
    return 0;
}