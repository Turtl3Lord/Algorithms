#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void solve() {
    int n;
    cin>>n;
    vector<int> timeAlice(n);
    vector<int> timeBob(n);
    int time;
    int bobPointer=n-1;
    int alicePointer=0;

    for (int i = 0; i < n; i++) {
        cin>>time;
        timeBob[i]=time;
        timeAlice[i]=time;
    }

     while(alicePointer<bobPointer){
        if(timeAlice[alicePointer]<timeBob[bobPointer]){
            timeBob[bobPointer]-=timeAlice[alicePointer];
            alicePointer++;
            if(alicePointer==bobPointer){ 
                alicePointer--;
                break;}
     }
        else
            if(timeAlice[alicePointer]>timeBob[bobPointer]){
                timeAlice[alicePointer]-=timeBob[bobPointer];
                bobPointer--;
            }
            else{
             
                alicePointer++;
                bobPointer--;
            }
        }
        if(alicePointer==bobPointer+1){
            alicePointer--;
        }

  
        cout<<++alicePointer<<" "<<n-(alicePointer)<<endl;
    

}

int main() {
    
    
        solve();
   
    
    return 0;
}