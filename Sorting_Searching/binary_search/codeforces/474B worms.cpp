#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

struct Range{

    int init;
    int end;
    Range(int init, int end) : init(init), end(end){

    }
};

vector<Range*> prepareRanges(){
    vector<Range*> ranges;
    int n;
    cin>>n;
    int previous =0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
       ranges.push_back(new Range(previous+1, previous +x ));
       previous = previous + x;
    }
    return ranges;
}

int binarySearch( vector<Range*>& ranges, int value){
    int left = 0;
    int right = ranges.size()-1;
   

    while(left<=right)
    { 
    int mid = left + (right-left)/2;
       if(value<=ranges[mid]->end && value>=ranges[mid]->init){
        return mid+1;
       }
       if(value<ranges[mid]->end){
        right = mid-1;
       }
       if(value>ranges[mid]->init){
        left = mid +1;
       }
    }

    return -1;
    
}

void solve() {
    vector<Range*> ranges = prepareRanges();
    
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
       cout<< binarySearch(ranges,x)<<endl;

    }
    

    
}

int main() {
    

        solve();
    
    
    return 0;
}