/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* p=list1, *q=list1, *r=list2;
            while(r->next!=NULL){
                r=r->next;
            }
            b+=1;
            while(b>0){
                q=q->next;
                b--;
            }
            a-=1;
            while(a>0){
                p=p->next;
                a--;
            }
            r->next=q;
            p->next=list2;
        return list1;
    }
};