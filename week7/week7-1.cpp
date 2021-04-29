#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[100][10];
int compare (const void*p1,const void*p2)
{
    char *s1=(char*)p1;
    char *s2=(char*)p2;
    return strcmp(s1,s2);
}
char temp[10];
int main()
{
	int N;
	scanf("%d",&N);

		for(int i=0;i<N;i++){
			scanf("%s",a[i]);
		}
		qsort(a,N,10,compare);

	for(int i=0;i<N;i++){
		printf("%s\n",a[i]);
	}
}
