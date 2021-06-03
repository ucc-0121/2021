```C
week3-1
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}

```

```C
week3-2
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printfAll()
{
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int *p=&a[2];
    *p=222;
            printfAll();
    p=p+2;
    *p=666;
            printfAll();
    p--;
    *p=555;
            printfAll();
}
```

```C
week3-3
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
```

```C
week3-4
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];

    int *p=(int*)malloc(sizeof(int)*10);

    return 0;
}
```
