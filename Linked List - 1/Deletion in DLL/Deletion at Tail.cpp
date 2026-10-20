#include<bits/stdc++.h>
using namespace std;

/*
class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int value, Node* next_Address, Node* prev_Address){
            data = value; 
            next = next_Address; 
            prev = prev_Address;
        }
        Node(int value){
           data = value;
           next = nullptr;
           prev = nullptr;
        }
};
*/

class solution {
public:
    Node* deletionAtTail(Node* head) {
        //Write your code here...
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        Node* tail = head;
        while(tail->next != nullptr){
            tail = tail->next;
        }
        Node* curr;
        curr = tail->prev;
        curr->next = nullptr;
        tail->prev = nullptr;
        delete tail;
        return head;
    }

};
