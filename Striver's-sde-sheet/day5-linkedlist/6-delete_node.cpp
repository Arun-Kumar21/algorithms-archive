#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution{
public:
    void deleteNode(ListNode *node) {
        ListNode *t = node;
        ListNode *curr = node;
        
        while (t->next) {
            int val = t->next->val;
            t->val = val;
        
            curr = t;
        
            t = t->next;
        }
        
        curr->next = NULL;
    }
};
