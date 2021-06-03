```C
week5-1
#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char*p=line;
    for(int i=0;line[i]!=0;i++){
        p=&line[i];
        char c = line[i];
        if(c!='2') printf("%c",c);
    }
    printf("\n");
    }

```
```C
week5-2
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
    }

```
```C
week5-3
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}

```
```C
week5-4
#include <stdio.h>
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int main()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}


```
```C
week5-5
#include <stdio.h>
#include <string.h>
char line [100][10];

int main()
{
	int N;
	scanf("%d",&N);
	
		for(int i=0;i<N;i++){
			scanf("%s",line[i]);
		}
		
		char temp[10];
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
			if(strcmp( line[i],line[j])> 0){
				strcpy(temp,line[i]);
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
	
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}
```
