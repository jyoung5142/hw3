#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
    //if empty
    if(head == nullptr){
        smaller = nullptr;
        larger = nullptr;
        return;
    }

    Node* curr = head;
    llpivot(head->next, smaller, larger, pivot);
    if(curr->val <= pivot){
        smaller = curr;
    }
    else{
        curr->next = larger;
        larger = curr;
    }

    head = nullptr;
}