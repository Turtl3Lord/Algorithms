#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void solve() {
    int n;
    cin>>n;
    int firstEvenIndex = -1;
    int firstOddIndex = -1;
    int oddCount = 0;
    int evenCount =0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x%2==0){
           if(firstOddIndex==-1)
           firstOddIndex=i;
           oddCount++;
        } else{
            if(firstEvenIndex == -1)
            firstEvenIndex=i;
            evenCount++;
        }
    }
    if(evenCount>oddCount){
        cout<<firstOddIndex+1<<endl;
    } else{
        cout<<firstEvenIndex+1<<endl;
    }
    
}

int main() {
    
 solve();
    
    return 0;
}