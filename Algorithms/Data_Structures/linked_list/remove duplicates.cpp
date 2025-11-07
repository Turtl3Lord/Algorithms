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
void removeDuplicates(Node* head) {
    if (!head) return;

    unordered_map<int, bool> flagged;
    Node* current = head;
    flagged[current->data] = true;

    while (current->next != nullptr) {
        if (flagged[current->next->data]) {
            current->next = current->next->next;
        } else {
            flagged[current->next->data] = true;
            current = current->next;
        }
    }
}




int main() {

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
    removeDuplicates(head);
    
    for (Node* temp = head; temp != nullptr; temp = temp->next)
    cout << temp->data << "->";
cout << "NULL\n";

     
   
    return 0;
}