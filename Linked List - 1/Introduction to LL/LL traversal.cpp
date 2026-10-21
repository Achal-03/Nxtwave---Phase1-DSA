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
    void traversal (Node* head) {
        //Write your code here...
        while(head!=nullptr){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }

};
