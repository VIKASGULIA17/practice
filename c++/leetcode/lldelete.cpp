class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==temp->val){
                    if(temp==head){
                        head=head->next;
                        break;    
                    }
                    else{
                        prev->next=temp->next;
                        break;
                    }
                }
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};