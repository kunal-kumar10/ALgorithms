#include<stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *prev;
    node *next;

    //Constructor
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

};

//Prints LINKED LIST
void print(node *head){
    node *ptr= head;

    while(ptr !=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

//Length of linked list
int len(node *head){
    int cn = 0;
    node *ptr = head;

    while(ptr!=NULL){
        cn++;
        ptr=ptr->next;
    }
    return cn;
}


//Insertion
void insertAthead(node *&head,int data,node *&tail){
    node *ptr = new node(data);
    if(head == NULL){
        head = ptr;
        tail = head;
        return ;
    }
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}

void insertAttail(node *&head,node *&tail,int data){
    node *temp = new node(data);
    if(tail == NULL){
        head = temp;
        tail = head;
        return ;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtpos(node *&head, int data, int pos,node *&tail){

    if(pos == 1){
        insertAthead(head,data,tail);
        return;
    }
    node *ptr=head;
    pos--;
    while(--pos){
        ptr = ptr->next;
    }

    if(ptr->next == NULL){
        insertAttail(head,tail,data);
        return;
    }

    node *temp = new node(data);
    temp->next = ptr->next;
    temp->prev = ptr;
    ptr->next = temp;
    ptr->next->prev = temp;
}


//Deletion
void delHead(node *&head){
    node *ptr = head;
    ptr->next->prev = NULL;
    head = head->next;
    delete ptr;
}

void delTail(node *&tail){
    node *ptr = tail;
    tail = ptr->prev;
    tail->next = NULL;
    ptr->prev = NULL;
    delete ptr;
}

void delAtpos(node *&head, int pos,node * &tail){

    if(pos==1){
        delHead(head);
        return ;
    }

    node *ptr = head;
    node *ptr1 = head->next;

    pos-=2;
    while(pos){
        ptr= ptr->next;
        ptr1=ptr->next;
        pos--;
    }

    if(ptr1->next == NULL){
        delTail(tail);
        return ;
    }

    ptr->next = ptr1->next;
    ptr1->next->prev = ptr1->prev;

    ptr1->prev = NULL;
    ptr1->next = NULL;
    delete ptr1;
}

int main(){
    node *head = NULL;
    node *tail = head;
    insertAthead(head,10,tail);
    insertAttail(head,tail,15);
    insertAtpos(head,20,2,tail);
    insertAtpos(head,25,4,tail);
    insertAtpos(head,251,1,tail);
    print(head);
    // delHead(head);
    // delTail(tail);
    delAtpos(head,1,tail);
    print(head);
    cout << len(head)<< endl;
    cout << head->data << " " << tail->data << endl;
    return 0;
}