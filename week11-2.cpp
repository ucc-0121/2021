#include <stdio.h>
typedef struct data{
    char c;
    int ans;
}DATA;
DATA listA;
int main()
{
    listA.c='A';
    listA.ans=1;

    printf("%c %d\n",listA.c, listA.ans);
}
