#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

void selection_sort(vector<int>& arr) {
    int size = arr.size();
    int smallest_index=0;
    int k =0;
    while (k < size - 1) {
       
         for (int i = k; i < size; i++) {
        if (arr[i] < arr[smallest_index]) {
            smallest_index = i;
           
        }
    }
    swap(arr[k], arr[smallest_index]);
    k++;
    smallest_index = k;
 
    }
}

int main() {
    
vector<int> arr = {64, 25, 12, 22, 11, 98, 34, 50, 75, 10};

  selection_sort(arr);

    cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}