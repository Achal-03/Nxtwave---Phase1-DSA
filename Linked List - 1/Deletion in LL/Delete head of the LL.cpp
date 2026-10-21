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
    Node* deleteHead(Node* head) {
        //Write your code here...
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        return head->next;
    }

};
