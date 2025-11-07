#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

struct Node{
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr){}
};

//problem 1: to find the K-th element without now the size of the list
void solveProblem1(int k, Node* head){
    Node* current = head;
    for (int i = 0; i < k; i++)
    {
        cout<<current->data<<"->";
        current = current->next;
    }
    

}
void singlyLinkedList(){
    int n;
 
    cout<<"number of values: "<<endl;
    cin>>n; 
    int x;
      cin>>x;
    Node* head =new Node(x);
    Node* current = head;
    for (int i = 0; i < n-1; i++)
    {
        cin>>x;
        current->next = new Node(x);
        current = current->next;
       
    }
    
    solveProblem1(n-2,head);
     
       
}

void doublyLinkedList(){

    
}

int main() {
   
    return 0;
}