#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define debug(x) cerr << #x << " = " << x << '\n';

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;


struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode d(0);
        d.next = head;

        ListNode* p = &d;
        ListNode* q = &d;

        for (int i = 0; i <= n; i++) {
            p = p->next;
        }

        while (p) {
            p = p->next;
            q = q->next;
        }

        ListNode* t = q->next;
        q->next = t->next;
        delete t;

        return d.next;
    }
};
