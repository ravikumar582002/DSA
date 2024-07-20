#include<bits/stdtr1c++.h>
using namespace std;
class ListNode{
          public:
          int  val; 
          ListNode*next;
          ListNode(int x){
                    this->val = x;
                    next = NULL;
          }
           //ListNode(int x, ListNode *next) : val(x), next(next) {}
           ListNode(int x,ListNode *next ){
                    this->val = x;
                    this->next = next;
           }
};
  ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        ListNode * ans=head;        
        while(ans!=NULL && s.find(ans->val)!=s.end()){
            ans=ans->next;       //Check for the head node excusively
        }
        head=ans;
        while(head!=NULL && head->next!=NULL){
            if(s.find(head->next->val)!=s.end()){
                head->next=head->next->next;
                continue;
            }
            head=head->next;
        }
        return ans;
    }
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
          int n,m;
          cout << " Enter length of linklist" << endl;
          cin >> n;
          cin>>m;
          vector<int>nums(n);
          for(int i=0;i<n;i++){
                    cin>>nums[i];
          }
          ListNode *head = new ListNode(0);
          ListNode *temp = head;
          for(int i=0;i<m;i++){
                    int a;
                    cin >> a;
                    temp->next =  new ListNode(a);
                    temp = temp->next;
          }

      head =modifiedList(nums,head) ;
         printList(head);
         return 0;
}