class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr || list2==nullptr)return list1==nullptr ? list2:list1;
        if(list1->val <= list2->val){
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else{
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
        return list1;
    }
};