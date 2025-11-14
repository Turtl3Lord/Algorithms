#include <bits/stdc++.h>
using namespace std;

// Complexidade de tempo: O(log n)
// Complexidade de espaço: O(1)
// A busca binária é iterativa e usa apenas variáveis escalares adicionais.
// mid = left + (right - left) / 2 evita overflow, pois mantém os valores dentro do intervalo do tipo int.
void binarySearch(int value, vector<int>& list) {
    int left = 0;
    int right = list.size()-1;
    int mid;
  

    while(left<=right){ 
        mid = left + (right - left)/2; 
        if(list[mid]==value){
            
            cout<<"numero encontrado na posicao "<<mid+1<<" da lista"<<endl;
            return;
        }
        if(list[mid]>value){
            right=mid-1;
        }
        if(list[mid]<value){
            left = mid+1;
        }

    }

        cout<<"numero nao encontrado na lista"<<endl;

    


}

int main() {


    vector<int> orderedList={18,29,34,46,58,62,79,85,91};
    

        binarySearch(34, orderedList);
    
    
    return 0;
}