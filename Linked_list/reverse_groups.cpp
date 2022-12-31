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

bool isCircular(node* head){
    if(head == NULL){
        return true;
    }
    
    node *temp = head->next;
    bool flag = false;
   
    while(temp!=NULL){
        if(temp == head){
            flag = true;
            break;
        }
        temp = temp->next;
        cout << "HI" << endl;
    }
    
    return flag;
}

node *tail_index(node *head){
    node *ptr = head;
    
    while(ptr->next!=head){
        ptr = ptr->next;
    }
    
    return ptr;
}

node *Middle(node *head, node *tail){
    node *slow  = head;
    node *fast = head;
    
    while(fast!=tail && fast->next!=tail){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void splitList(node *head, node **head1_ref, node **head2_ref)
{
    node *tail = tail_index(head);
    // cout << tail->data << endl;
    // node *middle = Middle(head,tail);
    
    
    // *head1_ref = middle;
    // *head2_ref = middle->next;
    // (*head1_ref)->next = NULL;
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

node *detect(node *head){
    node *slow = head;
    node *fast = head;
    
    do{
        slow = slow->next;
        fast = fast->next;

        if(fast!=NULL){
            fast = fast->next;
        }
    }while(fast!=NULL && fast!=slow);

    if(fast == slow){
        return fast;
    }
    return NULL;
}

// void *start(node *head, node *&fast){
//     cout << fast->data << endl;
//     node *slow = head;
    
//     if(fast == head){
//         do{
//             slow=slow->next;
//         }while(slow->next!=head);
//         slow->next = NULL;
//     }
//     else{
//         while(slow->next!=fast->next){
//         fast = fast->next;
//         slow = slow->next;
//     }
//     fast->next = NULL;
//     }
// }


// node *removeLoop(node *head)
// {
//     node *intersection = detect(head);
//     if(intersection== NULL){
//         return head;
//     }
    
//     start(head,intersection);
//     return head;
// }


node *removeDuplicates(node *head)
{
    node *ptr = head;
        node *ptr1 = ptr->next;
    while(ptr1!=NULL){
        node *temp = ptr;

        
        while(ptr1!=NULL){
            if(ptr1->a == ptr->a){
                temp->next = ptr1->next;
                ptr1->next = NULL;
                delete ptr1;
                ptr1= temp->next;
            }
            temp = temp->next;
            ptr1 = ptr1->next;
        }
        ptr = ptr->next;
    }
    return head;
}
int reverse(int n){
        int rev=0;
        while(n!=0){
            int temp = n%10;        
            rev=rev*10+temp;
            n/=10;
        }
        return rev;
    }
int main(){
    node *head = new node(1);
    node *tail = head;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    tail->next = head->next;
    cout << head->a << " "<< tail->a << endl;
    cout << detect(head)->a << endl;
    cout << reverse(123) << endl;

    // int k;
    // cin>> k;

    // node *ptr = head;
    // node *ptr1 = head->next;
    // node *ptr2 = ptr1->next;


    // while(ptr!=NULL){
    //     for(int i=0; i<(k-1); i++){
    //         ptr->next = ptr2;
    //         ptr1->next = ptr;

    //         ptr1 = ptr2;
    //         ptr2 = ptr2->next;
    //     }
    // }

    // print(head);
    return 0;
}