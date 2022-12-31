#include<stdc++.h>
using namespace std;

class node{
    public:
    int a;
    node *next;
    node *prev;

    node(int data){
        this->a = data;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insertAtHead(node * &head,int data){
    
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void print(node *head){
    node *temp = head;

    while(temp!=NULL){
        cout << temp->a << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse(node *&head,node *&tail){
    node *ptr = head;
    node *prev = NULL;
    while(ptr!=NULL){
        prev = ptr->prev;
        swap(ptr->next,ptr->prev);
        ptr = ptr->next;
    }
    swap(head,tail);
}
int main(){
    node *head = new node(1);
    node *tail = head;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    print(head);
    cout << head->a << " " << tail->a << endl;
    cout << head->next->a << endl;
    reverse(head,tail);
    print(head);
    cout << head->a << " " << tail->a << endl;
    cout << head->next << endl;
    return 0;
}