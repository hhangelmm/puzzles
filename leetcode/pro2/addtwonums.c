/* You are given two linked lists representing two non-negative numbers. 
 * The digits are stored in reverse order and each of their nodes contain 
 * a single digit. Add the two numbers and return it as a linked list.

 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 */

#include <stdio.h>
#include <stdlib.h>


/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* newNode = NULL;
    struct ListNode* tmpNode = NULL;
    struct ListNode* tmpNode2 = NULL;
    int tmp = 0;
    int jinwei = 0;
    while(l1 || l2 || jinwei){
        tmp = 0;
        if(l1){
            tmp = l1->val;
            l1 = l1->next;
        }
        if(l2){
            tmp += l2->val;
            l2 = l2->next;
        }
        if(jinwei)
            tmp += jinwei;
        jinwei = (tmp>9)?1:0;
        tmp = tmp%10;
        tmpNode = malloc(sizeof(struct ListNode));
        tmpNode->val = tmp;
        tmpNode->next = NULL;
        if(newNode == NULL){
            newNode = tmpNode;
            continue;
        }
        tmpNode2 = newNode;
        while(tmpNode2->next){
            tmpNode2 = tmpNode2->next;
        }
        tmpNode2->next = tmpNode;

    }
    return newNode;
}

int main(){
    int a[1] = {5};
    int b[1] = {5};
    int i,j;
    struct ListNode* l1 = NULL;
    struct ListNode* l2 = NULL;
    struct ListNode* newNode = NULL;
    for(i = 0; i<1; i++){
        newNode = malloc(sizeof(struct ListNode));
        newNode->val = a[i];
        newNode->next = l1;
        l1 = newNode;
    }
    for(i = 0; i<1; i++){
        newNode = malloc(sizeof(struct ListNode));
        newNode->val = b[i];
        newNode->next = l2;
        l2 = newNode;
    }
    struct ListNode *tmpNode = addTwoNumbers(l1,l2);

    return 1;
}
