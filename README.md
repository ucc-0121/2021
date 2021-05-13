### 我的第一份作業
第一週
```C
進階題1:分式化簡
#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=m;i>=1;i--){
	if(m%i==0 && n%i==0){
	m=m/i;
	n=n/i;
	}
	
}
 printf("%d %d\n",m,n);
}
```
```C
進階題2:讀入整數反敘列印
#include <stdio.h>
int main()
{
	int n=0,a[90];
	for(int i=1;i<=90;i++)
	{
		scanf("%d",&(a[i]));
		if(a[i]==0) break;
		else n=n+1;
	}
	for(int k=n;k>0;k--){
		printf("%d ",a[k]);
		}
		printf("\n");
}
```
```C
進階題3:A的B次方函數
#include <stdio.h>
int MYPOWER(int x,int y)
{
	int ans=1;
	if(x>=1 && x<=9)
	{
		for(int i=1;i<=y;i++)
		{
			ans*=x;
		}
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
```C
進階題4:漸增數列相加
#include <stdio.h>
int main()
{
	int a,n=0;
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		int j,z;
		j=i-1;
		z=j*i;
		n=n+z;
	}
	printf("%d\n",n);
}

```
```C
基礎題1:找零錢
#include <stdio.h>
int main()
{
	int a,n=0;
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		int j,z;
		j=i-1;
		z=j*i;
		n=n+z;
	}
	printf("%d\n",n);
}
```
```C
基礎題2:因數個數
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int k=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0){ k++;}
	}	
	printf("%d\n",k);
}


```
```C
基礎題3:找倍數
#include <stdio.h>
int main()
{
	int a,k=0;
	for(int i=1;i<=10;i++){
	scanf("%d",&a);
	if(a%3==0){ k++;}
	}
	printf("%d\n",k);

}

```
```C
基礎題4:整數轉換為等級
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	
	if(a>=90)printf("A\n");
	else if(a>=80)printf("B\n");
	else if(a>=60)printf("C\n");
	else if(a<60)printf("F\n");
}
```
##hackmd的部分
養眼歐派
第二週
------------
![123456](https://i.imgur.com/zWet5oE.jpg)
```C
##回家作業的部分week2-1
#include<stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}

```
```C
回家作業的部分week2-2
#include<stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    return 0;
}

```
```C
回家作業的部分week2-3
#include<stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    p2=p;
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    return 0;
}

```
第三週
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
第四週
```C
week4-1
#include <stdio.h>
struct DATA{
    float x,y,z;
};
int main()
{

}
```

```C
week4-2
#include <stdio.h>
struct DATA{
    float x,y,z;
}point1;
int main()
{
    point1.x=3;
    point1.y=5;
    point1.z=7;
    printf("%f %f %f",point1.x,point1.y,point1.z);
}
```

```C
week4-3
#include <stdio.h>
struct DATA{
    float x,y,z;
}point1;
struct DATA points[5];

int main()
{
    for(int i=0;i<5;i++){
    points[i].x=i*10;
    points[i].y=20;
    points[i].z=0;
    printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}

```

```C
week4-4
#include <stdio.h>
struct DATA{
    float x,y,z;
}a,b,c;
struct DATA points[5];

int main()
{
    struct DATA d,e,f;
    for(int i=0;i<5;i++){
    points[i].x=i*10;
    points[i].y=20;
    points[i].z=0;
    printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}

```

```C
week4-5
#include <stdio.h>
struct DATA{
    float x,y,z;
}a,b;
struct DATA c,d;

int main()
{
    struct DATA e;
    struct DATA f={1,2,3};
    printf("%f %f %f\n",a.x,a.y,a.z);
    printf("%f %f %f\n",b.x,b.y,b.z);
    printf("%f %f %f\n",c.x,c.y,c.z);
    printf("%f %f %f\n",d.x,d.y,d.z);
    printf("%f %f %f\n",e.x,e.y,e.z);
    printf("%f %f %f\n",f.x,f.y,f.z);

}

```
第五週
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
第七週
```C
week7-1
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
week7-2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char line[100][10];
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;
    
    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
//char temp[10];
int main()
{
    int n=4;
    //scanf("%d", &n);
    //for(int i=0; i<n; i++){
    //    scanf("%s", line[i]);
    //}
    
    qsort( line, n, sizeof(char[10]), compare);
    
    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}
```
```C
week7-3
char *p1, *p2;
char line[4][10]={"jkl", "ghi", "def", "abc"};
char temp[10];
int main() {
  int n=4;
  for(int k=0; k<n-1; k++){
    for(int i=0; i<n-1; i++){
      p1=line[i]; p2=line[i+1];
      if( strcmp(line[i],line[i+1]) > 0 ){
        strcpy(temp, line[i]);
        strcpy(line[i], line[i+1]);
        strcpy(line[i+1], temp);
      }
    }
  }
  
  for(int i=0; i<n; i++){
    printf("%s\n", line[i]);
  }
  
  return 0;
}
```
第八週
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
第十週
```C
week10-1
#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);

		printf("%s\n",line);
	}

}

```
```C
week10-2
#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);


		for(k=0;line[k]!=0;k++){
		char c= line[k];
		if(c>='A'&& c<='Z') printf("大");
		else if(c>='a'&&c<='z') printf("小");
		else printf("他");


			}

	}

}

```
```C
week10-3
#include <stdio.h>
char line[10000];
int ans[26];
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);


		for(int k=0;line[k]!=0;k++){
		char c= line[k];
		if(c>='A'&& c<='Z') ans[c-'A']++;
		else if(c>='a'&&c<='z') ans[c-'a']++;
			}
			for(int i=0;i<26;i++){
			printf("%c %d\n",'A'+1,ans[i]);}

	}

}

```
```C
week10-4
#include <stdio.h>
char line[10000];
int ans[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);


		for(int k=0;line[k]!=0;k++){
		char c= line[k];
		if(c>='A'&& c<='Z') ans[c-'A']++;
		else if(c>='a'&&c<='z') ans[c-'a']++;
		}
	}
	for(int i=0;i<26;i++){
		for(int j=i+1;j<26;j++){
			if(ans[i]<ans[j] || (ans[i]==ans[j] && alphabet[i]>alphabet[j])){
			int temp=ans[i];
			ans[i]=ans[j];
			ans[j]=temp;
			char c = alphabet[i];
			alphabet[i] = alphabet[j];
			alphabet[j]=c;
			}
		}
	}

	for(int i=0;i<26;i++){
		if(ans[i]>0) printf("%c %d\n",alphabet[i],ans[i]);

	}

}
```
```C
week 10-5
#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct{
	int ans;
	char c;
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2){
	if( ((BOX*)p1)->ans > ((BOX*)p2)->ans) return -1;
	else if( ((BOX*)p1)->ans < ((BOX*)p2)->ans) return +1;
	else return 0;
	}
int main()
{
	for(int i=0;i<26;i++) array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);
		for(int k=0;line[k]!=0;k++){
		char c= line[k];
		if(c>='A'&& c<='Z') array [c-'A'].ans++;
		else if(c>='a'&&c<='z') array[c-'a'].ans++;
		}
	}
	qsort(array,26,sizeof(BOX),compare);
	
	for(int i=0;i<26;i++){
		if(array[i].ans>0) printf("%c %d\n",array[i].c,array[i].ans);

	}

}

```
```C
week 10-5正解
#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct{
	int ans;
	char c;
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2){
	if( ((BOX*)p1)->ans > ((BOX*)p2)->ans) return -1;
	else if( ((BOX*)p1)->ans < ((BOX*)p2)->ans) return +1;
	else if( ((BOX*)p1)->c   < ((BOX*)p2)->c) return -1 ;
	else if( ((BOX*)p1)->c   > ((BOX*)p2)->c) return +1 ;
	else return 0;//相等時比字母
}
int main()
{
	for(int i=0;i<26;i++) array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);

	for(int i=0;i<n;i++){
		gets(line);
		for(int k=0;line[k]!=0;k++){
		char c= line[k];
		if(c>='A'&& c<='Z') array [c-'A'].ans++;
		else if(c>='a'&&c<='z') array[c-'a'].ans++;
		}
	}
	qsort(array,26,sizeof(BOX),compare);
	
	for(int i=0;i<26;i++){
		if(array[i].ans>0) printf("%c %d\n",array[i].c,array[i].ans);

	}

}
```
第十一週
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
第十二週
```C
week12-1
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int ans[256]={};
		char ascii[256];
		for(int i=0;i<256;i++) ascii[i]=i;
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;i++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}	
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0)printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}
```
```C
week12-2
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int ans[256]={};
		char ascii[256];
		for(int i=0;i<256;i++) ascii[i]=i;
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++){
			for(int j=i+1;j<256;j++){
				if(ans[i]>ans[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
					}
				if(ans[i]==ans[j]&&ascii[i]<ascii[j]){
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}	
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0)printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}
```
