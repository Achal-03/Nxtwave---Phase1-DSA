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
    int lengthofLL(Node* head) {
        //Write your code here...
        int count=0;
        while(head!=nullptr){
            count++;
            head = head->next;
        }
        return count;
    }

};
