/*
 * Given a string, find the length of the longest substring without 
 * repeating characters. For example, the longest substring without 
 * repeating letters for "abcabcbb" is "abc", which the length is 3.
 *  For "bbbbb" the longest substring is "b", with the length of 1.
 */
#include <stdio.h>
#include <string.h>
#include <assert.h>

int lengthOfLongestSubstring(char* s) {
    int len = strlen(s);
    int i = 0, j = 1,tmp = 0;
    int maxsublen = (len)?1:0;
    int tmpsublen = (len)?1:0;
    char* p;
    int a;
    while(j<len && i<=j){
        a = s[j];
        p = strchr(s+i,a);
        if( p >= s+i && p < s+j){
            tmpsublen = (tmpsublen>1) ? (tmpsublen-1) :1;
            i++;
        }else{
            if(i != j)
                tmpsublen++;
            j++;
        }
        maxsublen = (maxsublen>tmpsublen)?maxsublen:tmpsublen;
    }
    return maxsublen;
}


int main()
{
    int a = lengthOfLongestSubstring("bdb");
    printf("%d\n",a);
    return 0;
}
