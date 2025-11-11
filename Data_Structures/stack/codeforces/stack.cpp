#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void solve() {
    stack<int> valores;
        string operations;
    cin>>operations;

    for(int i=0; i<operations.size();i++){

if(operations[i]!='+' and operations[i]!='*'){
    valores.push(operations[i] - '0');
}
else{
    int value1 = valores.top();
    valores.pop();
    int value2 = valores.top();
    valores.pop();
    if(operations[i]=='*'){
        valores.push(value1*value2);
    }
    else{
        valores.push(value1+value2);
    }
}
    }
    cout<<"resultado: "<<valores.top()<<endl;
}

int main() {
    
    solve();



    
    return 0;
}