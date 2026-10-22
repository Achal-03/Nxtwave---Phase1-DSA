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
    Node* deleteNodeWithValueX(Node* head, int x) {
        //Write your code here...
        if(head==nullptr){
            return nullptr;
        }
        if(head->next==nullptr){
            if(head->data == x){
                return nullptr;
            }
            return head;
        }
        Node* t1 = head;
        Node* t2 = head->next;
        if(t1->data == x){
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        if(t2->data == x){
            t1->next = t2->next;
            delete t2;
            return head;
        }
        while(t2!=nullptr){
            if(t2->data == x){
                t1->next = t2->next;
                delete t2;
                return head;
            }
            t1 = t1->next;
            t2 = t2->next;
        }
        return head;
    }

};
