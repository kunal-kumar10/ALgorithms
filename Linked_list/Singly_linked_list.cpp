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


void insertAtHead(node * &head,int data){
    
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}


void insertAtTail(node * &tail, int data){

    node *temp = new node(data);
    tail->next = temp; 
    tail = temp;
}

void print(node *head){
    node *temp = head;

    while(temp!=NULL){
        cout << temp->a << " ";
        temp = temp->next;
    }
    cout << endl;
}


void insertAtMiddle(node * &head, int data, int pos,node * &tail){
    if(pos == 1){
        insertAtHead(head,data);
    }
    else{
        node *temp = new node(data);
        node *ptr=head;
        pos--;
        while(--pos){
            ptr=ptr->next;
        }

        if(ptr->next == NULL){
            ptr->next = temp;
            tail = temp;
            return ;
        }

    temp->next = ptr->next;
    ptr->next = temp;
    }
}

void delHead(node *&head){
    node *temp;
    temp = head;
    head = head->next;
    delete temp;
}

void deleteAtpos(node * &head,int pos, node *&tail){
    if(pos == 1){
        delHead(head);
        return;
    }
    node *ptr = head;
    node *ptr1 = ptr->next;

    pos--;
    while(--pos){
        ptr=ptr->next;
        ptr1 = ptr1->next;
    }
    ptr->next = ptr1->next; 
    if(ptr1->next == NULL){
        tail = ptr;
    }
    delete ptr1;
}


void delTail(node *&tail, node *head){
    node *ptr=head;

    while(ptr->next != tail){
        ptr = ptr->next;
    }


    ptr->next = NULL;
    delete tail;
    tail = ptr;
}

void delValue(node *&head,int value, node *&tail){
    node *ptr = head;
    int cnt=1;
    while(ptr!=NULL){
        if(cnt ==1 && ptr->a ==value){
            delHead(head);
        }
        
        if(ptr->a ==value && cnt!=1){
            deleteAtpos(head,cnt,tail);
        }
        cnt++;
        ptr = ptr->next;
    }
}

int main(){
    node *head = new node(5);
    node *tail = head;

    insertAtHead(head,7);
    insertAtMiddle(head,23,2,tail);
    insertAtTail(tail,34);
    insertAtMiddle(head,43,5,tail);
    insertAtTail(tail,56);
    delTail(tail,head);
    deleteAtpos(head,1,tail);
    print(head);
    delValue(head,23,tail);
    print(head);
    cout << head->a << " "<< tail->a << endl;

    return 0;
}