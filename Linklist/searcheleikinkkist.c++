// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//           public:
//           int data;
//           Node *next;
//           Node(int x){
//                     this->data = x;
//                     this ->next=NULL;
//           }
// };
// Node *insert(Node *head,int val){
//           Node *newnode=new Node(val);
//           if(head==NULL){
//                     head = newnode;
//                     return head;
//           }
//           Node *temp=head;
//           while(temp->next!=NULL){
//                     temp=temp->next;
//           }
//           temp->next=newnode;
//           return head;
// }
// // bool findelement(Node *head,int ele){
// //           Node *temp=head;
// //           while(temp->next!=NULL){
// //                     if(temp->data==ele){
// //                               return true;
// //                               }
// //                               temp=temp->next;
// //           }
// //           return false;
// // }
// Node *reverse(Node *head){
//           if(head==NULL)
//           return head;
//           Node *temp=head;
//           Node *prev=NULL;
//           while(temp!=NULL){
//                     Node *t1=temp->next;
//                     temp->next=prev;
//                     prev=temp;
//                     temp=t1;
//           }
//           return prev;
// }
// void print(Node *head){
//        Node *temp=head;
//        while(temp!=NULL){
//           cout<<temp->data<<" ";
//           temp=temp->next;
//        }
//        cout<<endl;
// }
// int main(){
//           int n;
//           cin>>n;
//           int ele;
//           cin>>ele;
//           Node *head=NULL;
//           for(int i=0;i<n;i++){
//                     int z;
//                     cin>>z;
//                     head=insert(head,z);
//           }
//           // if(findelement(head,ele)){
//           //           cout<<"true"<<endl;
//           // }
//           // else{
//           //           cout<<"false"<<endl;
//           // }
//           head=reverse(head);
//           print(head);
//           return 0;
// }


//&&&&&&&&&&&&&another method to reverse the link list  by recursion^^^^^^^^^^^^^^^^^^^^
#include<bits/stdc++.h>
using namespace std;
class Node{
          public:
          int data;
          Node *next;
          Node(int x){
                    this->data = x;
                    this ->next=NULL;
          }
};
void reversell(Node* head,Node* curr,Node* prev){
   if(curr==NULL){
      head=prev;
      return;
      }
      Node* forword = curr->next;
      reversell(head,forword,curr);
      curr->next=prev;
}
Node *reverse(Node *head){
          if(head==NULL)
          return head;
          Node *curr=head;
          Node *prev=NULL;
         reversell(head,curr,prev);
         return head;
}
Node *insert(Node *head,int val){
          Node *newnode=new Node(val);
          if(head==NULL){
                    head = newnode;
                    return head;
          }
          Node *temp=head;
          while(temp->next!=NULL){
                    temp=temp->next;
          }
          temp->next=newnode;
          return head;
}
void print(Node *head){
       Node *temp=head;
       while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;
       }
       cout<<endl;
}
int main(){
          int n;
          cin>>n;
          int ele;
          cin>>ele;
          Node *head=NULL;
          for(int i=0;i<n;i++){
                    int z;
                    cin>>z;
                    head=insert(head,z);
          }
          head=reverse(head);
          print(head);
          return 0;
}
