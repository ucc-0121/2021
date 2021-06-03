```C
week8-1

#include <stdio.h>
char tree[1000000][32];
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=0;t<T;t++){
		int N=0;
		for(int i=0;  ;i++){
			gets( tree[i] );
			if(strcmp(tree[i],"")==0){
				N=i;
				break;
			}
	for(int i=0;i<N;i++){
        printf("%s\n",tree[i]);
        }
    }
}
```
```C
week8-2
#include <stdio.h>
#include <stdlib.h>
char tree[1000000][32];
int compare (const void *p1,const void *p2 )
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=0;t<T;t++){
		int N=0;
		for(int i=0;  ;i++){
			gets( tree[i] );
			if(strcmp(tree[i],"")==0){
				N=i;
				break;
			}
        }
        qsort(tree,N,32,compare);
        for(int i=0;i<N;i++){
        printf("%s\n",tree[i]);
        }
    }
}
```
```C
week8-3
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
```
```C
week8-4
  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
char others[80];
int compare (const void *p1,const void p2 )
{
    return strcmp((char)p1,(char*)p2);
}
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
        gets( others );
        }
    qsort(name,n,80,compare);
        for(int i=0;i<n;i++){
            printf("%s\n",name[i]);
            }
        }
```
```C
week8-5

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
char others[80];
int compare (const void *p1,const void p2 )
{
    return strcmp((char)p1,(char*)p2);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",name[i]);
        gets( others );
        }
    qsort(name,n,80,compare);
    int ans=1;
    printf("%s ",name[0]);
        for(int i=0;i<n-1;i++){
        if(strcmp (name[i],name[i+1])!=0){
            printf("%d\n",ans);
            printf("%s ",name[i+1]);
            ans=1;
            }else{
            ans++;
            }
        }
        printf("%d\n",ans);
    }
    
```
```C
week 8-6
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
char others[32];
int compare (const void *p1,const void *p2 )
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n", &T);

	for(int t=0;t<T;t++){
		int N=0;
		for(int i=0;  ;i++){
			gets( tree[i] );
			if(strcmp(tree[i],"")==0){
				N=i;
				break;
			}
		}
		qsort(tree,N,32,compare);

		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++){
			if(strcmp(tree[i],tree[i+1])!=0){
			printf("%.4f\n",100*ans/(float)N);
			printf("%s ",tree[i+1]);
			ans=1;
		}else{
			ans++;
		}
	}
	printf("%.4f\n",100*ans/(float)N);
	}
}
        
```
