#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void bublleSort(vector<int>& arr) {
  int size = arr.size();
  int k=1;
  while(k<size){
  for (int i = 0; i < size-k; i++)
  {
    int aux;
    if(arr[i+1]<arr[i]){
        aux = arr[i];
        arr[i] = arr[i+1];
        arr[i+1]=aux;
        
    }
 
 
}
   k++;}
  
}

int main() {
    
    
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bublleSort(arr);
    cout<<"Sorted array: \n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}