#include<stdc++.h>
using namespace std;

class node{
    public:
    int a;
    node *next;

    node(int data){
        this->a = data;
        this->next = NULL;
    }
};

void print(node *head){
    node *temp = head;

    while(temp!=NULL){
        cout << temp->a << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(node * &head,int data){
    if(head == NULL){
        node *temp = new node(data);
        head = temp;
        return ;
    }
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

node *findMiddle(node *head) {
    node *ptr = head;
    node *ptr1 = head;
    
    while(ptr1!=NULL && ptr1->next!= NULL){
        ptr = ptr->next;
        ptr1 = ptr1->next->next;
    }
    return ptr;
}

int main(){
    node *head = new node(1);
    node *tail = head;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    print(head);
    cout << head->a << " "  << tail->a << endl;
    cout << findMiddle(head)->a<< endl;
    return 0;
}