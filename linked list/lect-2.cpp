#include<iostream>
using namespace std;



class Node{

    public:
     
     int d;
     Node* prev;
     Node* next;

     //constructor
     Node(int d){
        this->d=d;
        this->prev=NULL;
        this->next=NULL;
     }

};

int getlength(Node* head){

    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void print(Node* head){

    Node* temp=head;
    while(temp!=NULL){

        cout<<temp->d<<" ";
        temp=temp->next;
    }
}

void insertathead(Node* &head, int d){

    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    

}

void insertattail(Node* &tail,int d){
        Node* temp=new Node(d);

        tail->next=temp;
        temp->prev=tail;
        tail=temp;

}

void insertatposition(Node* head,Node* tail,int pos,int d){

    if(pos==1){
        insertathead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=0;

    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

    Node* nodetoinsert=new Node(d);

    nodetoinsert->next=temp->next;
    temp ->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

    
}


int main(){

    Node* node1=new Node(10);
    Node* head=node1;
   Node* tail=NULL;
    // print(head);
    cout<<getlength(head)<< endl;

    insertathead(head,10);
    insertathead(head,20);
    //  print(head);
    //  insertattail(tail,2);
    //  print(head);
     insertatposition(head,tail,2,90);
    //  print(head);
     insertatposition(head,tail,3,678);
     print(head);

    return 0;
}