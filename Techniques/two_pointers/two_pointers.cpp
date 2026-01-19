#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void solve() {


    int n; ll target;
    if (!(cin >> n >> target)) return; 

    vector<ll> a(n);
    for (auto &v : a) cin >> v;

    sort(all(a));

    ll pairs = 0;
    int l = 0, r = n - 1;
    while (l < r) {
        ll sum = a[l] + a[r];
        if(sum<target) l++;
        else
        if(sum>target) r--;
        else{
    pairs++;
    l++;
    
    }
    }

    cout << pairs << '\n';
}

int main() {
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}