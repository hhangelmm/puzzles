/* Given an array of integers, find two numbers such that they add up to a specific target number.
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 */

#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target) {
    struct node {
        int data;
        int tag;
        struct   node* next;
    };
    int hash_length = numsSize/3;
    struct node* intlist[hash_length] ;
    int i = 0,tmp = 0,j = 0;
    for(i = 0; i<hash_length; i++){
        intlist[i] = NULL;
    }
    for(i = 0; i < numsSize; i++){
        struct node* intnode = malloc(sizeof(struct node));
        intnode->data = nums[i];
        intnode->tag = i;
        intnode->next = NULL;
        if(target == 0)
            tmp = abs(nums[i]%hash_length);
        else
            tmp = abs(nums[i]%target%hash_length);
        if(intlist[tmp] == NULL)
            intlist[tmp] = intnode;
        else{
            struct node* pnode_tmp = intlist[tmp];
            while(pnode_tmp->next != NULL){
                pnode_tmp = pnode_tmp->next;
            }
            pnode_tmp->next = intnode;
        }
    }
    i = 0;
    while(i<numsSize){
        tmp = target - nums[i];
        struct node* psnode = intlist[abs(tmp%hash_length)];
        while(psnode != NULL){
            if(psnode->data == tmp && i != psnode->tag){
                int* pint = malloc(2*sizeof(int));
                pint[0] = i+1;
                pint[1] = psnode->tag+1;
                return pint;
            }
            psnode = psnode->next;
        }
        i++;
    }
    return NULL;
}

int main (){
    int nums[3] = {3,2,4};
    int* pint = twoSum(nums,3,6);
    printf("%d,%d",pint[0],pint[1]);
    free(pint);
}
