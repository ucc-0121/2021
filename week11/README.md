```C
week11-1
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}

```
```C
week 11-2
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


```
```C
week11-3
#include <stdio.h>
#include <stdlib.h>
int compare(const void*p1,const void*p2)
{
    int d1 = *((int*)p1);
    int d2 = *((int*)p2);
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]={4,8,3,7,5,2,9,1,6,10};
int main()
{
    qsort(a, 10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}

```
```C
week11-4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[2000][80];
char others[80];
int compare( const void*p1,const void*p2)
{
    char *s1 = (char*)p1;
    char *s2 = (char*)p2;
    if(strcmp (s1,s2)>0) return 1;
    if(strcmp(s1,s2)==0) return 0;
    if(strcmp(s1,s2)<0) return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s ",name[i]);
		gets(others);
	}
	qsort(name,n,80,compare);
	int ans=1;
	printf("%s ",name[0]);

	for(int i=0;i<n-1;i++){
		if(strcmp(name[i],name[i+1])!=0){
			printf("%d\n",ans);
			printf("%s ",name[i+1]);
			ans=1;
		}
		else{
			ans++;
		}
	}
	printf("%d\n",ans);
}


```
```C
week11-5
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;get(line)!=NULL;t++){
		if(t>0) printf("\n");
		printf("blahblah");	
		printf("blahblah");
		printf("blahblah");
	}
}
```
```C
week11-6
#include <stdio.h>
char line[2000];
int ans[256];
int main()
{
	for(int t=0;gets(line)!=NULL;t++){
		for(int i=0;i<256;i++) ans[i]=0;
		
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0) printf("%d %d\n",i,ans[i]);
		}
	}
}
```
