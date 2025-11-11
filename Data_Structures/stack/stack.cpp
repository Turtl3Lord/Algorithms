#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;

    Node(int value) : value(value), next(nullptr){}
};


class Stack{


    private: Node* top;

    public:
        Stack() : top(nullptr){}
        bool isEmpty(){
            return top==nullptr;
        };

        void push(int value){
            Node* next = new Node(value);
            next->next=top;
            top = next;
        }
        
        void pop(){
            if(isEmpty()){
                cout<<"a pilha está vazia"<<endl;
                return;
            }

            Node* temp = top;
            top = top->next;
            delete temp;

        }

        int peek(){
              if(isEmpty()){
                cout<<"a pilha está vazia"<<endl;
                return;
            }
            return top->value;
        }
    };