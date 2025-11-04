#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void solve() {
         int n,k;
         int count= 0;
         
      
        cin>>n>>k;
        vector<int> number(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
          number[i] =x;

        }

        sort(number.begin(),number.end(), greater<int>());
      
        int t = number[k-1];
        
      for (int i = 0; i < n; i++)
      {
        if(number[i]==0) break;
        if(number[i]>=t)
        count++;
        else
        break;
      }
      

       cout<<count<<endl;
        
        
}

int main() {
    

   
        
        solve();
    
    
    return 0;
}