#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int value, Node* address){
            data = value;
            next = address;
        }
    public:
        Node(int value){
            data = value;
            next = NULL;
        }
};
*/

class solution {
public:
    Node* deleteKthNode(Node* head, int k) {
        //Write your code here...
        if(head==nullptr || k<0){
            return nullptr;
        }
        if(k==0){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        Node* temp = head;
        for(int i=0; i<k-1; i++){
            if(temp->next == nullptr){
                return head;
            }
            temp = temp->next;
        }
        if(temp->next == nullptr){
            return head;
        }
        
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
        
        return head;
    }

};
