#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printfAll()
{
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int *p=&a[2];
    *p=222;
            printfAll();
    int*p2=p+4;
    *p=666;
            printfAll();
    p2--;
    *p=555;
            printfAll();
    return 0;
}
