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
    Node* deleteKthNode(Node* head, int k) {
        //Write your code here...
        if(head==nullptr || k<0){
            return nullptr;
        }
        
        Node* temp = head;
        
        // Find the kth node using zero-based indexing
        for (int i = 0; i < k; i++) {
            if (temp == nullptr) {
                return head;
            }
            temp = temp->next;
        }
        if (temp == nullptr) {
            return head;
        }
        
        Node* first = temp->prev;
        Node* second = temp->next;
        
        //moving first node
        if(first!=nullptr){
            first->next = second;
        }
        else{
            head = second;
        }
        
        //moving second node
        if(second != nullptr){
            second->prev = first;
        }
        
        delete temp;
        return head;
    }

};
