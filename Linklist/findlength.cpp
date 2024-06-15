#include<bits/stdtr1c++.h>
using namespace std;
class Node{
          public:
          int  data; 
          Node*next;
          Node(int data){
                    this->data = data;
                    next = NULL;
          }
};
int countlength(Node *head){
          Node *temp=head;
          int count=0;
          while(temp!=NULL){
                    count++;
                    temp=temp->next;
          }
         return count;
}

int main(){
          int n;
          cout << " Enter length of linklist" << endl;
          cin >> n;
          Node *head = new Node(0);
          Node *temp = head;
          for(int i=1;i<=n;i++){
                    int a;
                    cin >> a;
                    temp->next =  new Node(a);
                    temp = temp->next;
          }

         cout << " Length of linklist " << countlength(head->next) << endl;
}