// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//           public:
//           int data;
//           Node* next;
//           Node(int data){
//                     this->data=data;
//                     this->next=NULL;
//                     }
// };
// Node* insert(Node *head,int val){
//           Node *temp=new Node(val);
//           if(head==NULL){
//                     return head;
//           }
//           Node *curr=head;
//           while(curr->next!=NULL){
//                     curr=curr->next;
//           }
//           curr->next=temp;
//           return  head;

// }
// void  print(Node* head){
//           Node* temp=head;
//           while(temp!=NULL){
//                     cout<<temp->data<<" ";
//                     temp=temp->next;
// }
// cout<<endl;
// }
// int main(){
//           int n;
//           cin>>n;
//           Node* head=NULL;
//           int val;
//           for(int i=0;i<n;i++){
//                     cin>>val;
//                head=   insert(head,val);
//           }
//           print(head);
//           return 0;
// }


/////////////another method  for insertion
#include<bits/stdc++.h>
using namespace std;

class Node{
          public:
          int data;
          Node* next;
          Node(int data){
                    this->data=data;
                    this->next=NULL;
                    }
};
void insertAtFront(Node*& head) {
    Node* newNode = new Node(4);
    newNode->next = head;
    head = newNode;
}
void insertattail(Node *head){
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node *newNode=new Node(4);
    temp->next=newNode;

}
void insertatmiddlel(Node *head){
    Node *temp=head;
    //Node *prev=NULL;
    int mid=3;
    for(int i=0;i<mid;i++){
        temp=temp->next;
    }
    Node *newNode=new Node(0);
    newNode->next=temp->next;
    temp->next=newNode;
}
void  print(Node* head){
          Node* temp=head;
          while(temp!=NULL){
                    cout<<temp->data<<" ";
                    temp=temp->next;
}
cout<<endl;
}
int main(){
          int n;
          cin>>n;
          Node* head=NULL;
          Node* temp =NULL;
          int val;
          for(int i=0;i<n;i++){
                    cin>>val;
                    Node* newnode =new Node(val);
                    if(head==NULL){
                              head=newnode;
                              temp=head;
                              }
                              else{
             temp->next=newnode;
              temp=temp->next;
                              }
          }
          insertAtFront(  head);
          insertattail(head);
          insertatmiddlel(head);
          print(head);
          return 0;
}