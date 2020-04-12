#include <iostream>
using namespace std;

// struct ListNode {
//  *     int val;
//  *     ListNode *next;
//       ListNode(int x) : val(x), next(NULL) {}
//  };

ListNode *oddEvenList(ListNode *head)
{

    ListNode *oddHead = new ListNode(-1);
    ListNode *evenHead = new ListNode(-1);

    ListNode *oddCurr = oddHead;
    ListNode *evenCurr = evenHead;

    while(head != NULL){
        ListNode *forw = head->next;
        oddCurr->next = head;
        evenCurr->next = head->next;

        oddCurr = oddCurr->next;
        evenCurr = evenCurr->next;

        if(forw != NULL)
        head = forw->next;
    }

    if(head != NULL){
        oddCurr->next = head;
        odCurr = head;
    }

    evenCurr->next = NULL;
    oddCurr->next = evenHead->next;
    return oddHead->next;


}

int main()
{
    return 0;
}