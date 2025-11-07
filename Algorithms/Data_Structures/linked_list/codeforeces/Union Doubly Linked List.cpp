#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()


struct Node{
    int nodePosition;
    int positionPrev;
    int positionNext;
    Node* next;
    Node* prev;

    Node(int nodePosition,int left, int right) :nodePosition(nodePosition), positionPrev(left), positionNext(right), next(nullptr), prev(nullptr){}
    
};

vector<Node*> prepareList(int positions) {
    vector<Node*> listOFAllNodes(positions+1, nullptr);
    for (int i = 1; i <= positions; i++)
    {
        int positionNext,positionPrev;
        cin>>positionPrev>>positionNext;
        Node* node = new Node(i,positionPrev,positionNext);
        if(positionPrev<i and positionPrev>0){
            node->prev = listOFAllNodes[positionPrev];
            listOFAllNodes[positionPrev]->next = node;
            listOFAllNodes[positionPrev]->positionNext = i;

        }
        if(positionNext<i and positionNext>0){
            node->next = listOFAllNodes[positionNext];
            listOFAllNodes[positionNext]->prev = node;
            listOFAllNodes[positionNext]->positionPrev = i;
        }
        listOFAllNodes[i]=node;

    }
    return listOFAllNodes;
    
}


vector<Node*> searchAllNodeFromSubList(Node* head){
    vector<Node*> listOfNodes;
    Node* current = head;
    while(true){
        listOfNodes.push_back(current);
        if(current->positionNext==0){
        return listOfNodes;}
        current = current->next;
    }

}

void solve(int numberElements,vector<Node*> listOfAllNodes){

    vector<vector<Node*>> AllSubLists;
    int count = 0;
    for(int i = 1; i<=numberElements;i++){
        if(listOfAllNodes[i]->positionPrev==0){

        AllSubLists.push_back( searchAllNodeFromSubList(listOfAllNodes[i]));     
    if(count>0){
    
        Node* nextElement =AllSubLists[count][0];
        Node* CurrentElement =AllSubLists[count-1][AllSubLists[count-1].size()-1];
        CurrentElement->next=nextElement;
        CurrentElement->positionNext=nextElement->nodePosition;
        nextElement->prev = CurrentElement;
        nextElement->positionPrev = CurrentElement->nodePosition;


    }
        
        count++; 
        

    }

}

for (int i = 1; i < listOfAllNodes.size(); i++)
{
   cout<<listOfAllNodes[i]->positionPrev<<" "<<listOfAllNodes[i]->positionNext<<endl;
}

}

int main() {
    
    int t;
    cin >> t;
    vector<Node*> listOFAllNodes;
    listOFAllNodes =  prepareList(t);
    solve(t,listOFAllNodes);
    
    
    return 0;
}