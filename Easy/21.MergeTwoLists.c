#include<stdlib.h>
struct ListNode{
    int val;
    struct ListNode* next;
};
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;
    struct ListNode* list;
    if(list1->val<=list2->val){
        list = list1;
        list1 = list1->next;
    }else if(list2->val<=list1->val){
        list = list2;
        list2 = list2->next;
    }
    struct ListNode* ptr = list;
    while(list1!=NULL && list2!=NULL){
        if(list2->val<=list1->val){
            ptr->next = list2;
            list2 = list2->next;
        }else if(list1->val<=list2->val){
            ptr->next = list1;
            list1 = list1->next;
        }
        ptr = ptr->next;
    }
    if(list1!=NULL){
        ptr->next = list1;
    }else{
        ptr->next = list2;
    }
    return list;
}