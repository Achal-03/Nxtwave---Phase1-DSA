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
    Node* deletionAtHead(Node* head) {
        //Write your code here...
        if(head==nullptr || head->next == nullptr){
            return nullptr;
        }
        Node* curr = head;
        head = curr->next;
        head->prev = nullptr;
        curr->next = nullptr;
        delete curr;
        return head;
    }

};
