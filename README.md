### 我的第一份作業
[第一週](https://github.com/ucc-0121/2021/blob/gh-pages/week1)
------------
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
##hackmd的部分</br>
[第二週](https://github.com/ucc-0121/2021/blob/gh-pages/week2)
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
[第三週](https://github.com/ucc-0121/2021/blob/gh-pages/week3)
------------
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
[第四週](https://github.com/ucc-0121/2021/blob/gh-pages/week4)
------------
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
[第五週](https://github.com/ucc-0121/2021/blob/gh-pages/week5)
------------
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
/*
```C
week5-4
#include <stdio.h>
int a[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
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
*/
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
[第七週](https://github.com/ucc-0121/2021/blob/gh-pages/week7)
------------
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
[第八週](https://github.com/ucc-0121/2021/blob/gh-pages/week8)
------------
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
[第十週](https://github.com/ucc-0121/2021/blob/gh-pages/week10)
------------
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
[第十一週](https://github.com/ucc-0121/2021/blob/gh-pages/week11)
------------
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
[第十二週](https://github.com/ucc-0121/2021/blob/gh-pages/week12)
------------
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
```C
week12-3

#include <stdio.h>
int a[100];
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=0;t<T;t++){
        int N;
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        int ans=0;
        printf("Optimal train swapping takes %d swaps.\n",ans);
    }
}

```
```C
week12-4
#include <stdio.h>
int a[100];
int main()
{
    int T,N;
    scanf("%d",&T);
    for(int t=0;t<T;t++){
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%d",&a[i]);
        }
        int ans=0;
        for(int k=0;k<N-1;k++){
            for(int i=0;i<N-1;i++){
        if(a[i]>a[i+1]){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        ans++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",ans);
    }
}

```
```C
week12-5
#include <stdio.h>
int a[10000];
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)==2){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		
		
		printf("%d %d\n",n,m);
		for(int i=0;i<n;i++){
			printf("%d\n",a[i]);
		}	
	}
}

```
```C
week12-6(not done)
#include <stdio.h>
int a[10000];
void swap(int i,int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)==2){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]%m>a[j]%m) swap(i,j);
				if(a[i]%m==a[j]%m &&a[i]%2==0&&a[j]%2!=0) swap(i,j);
				if(a[i]%m==a[j]%m &&a[i]%2!=0&&a[j]%2!=0&&a[i]<a[j])swap(i,j);
				if(a[i]%m==a[j]%m &&a[i]%2==0&&a[j]%2!=0&&a[i]>a[j])swap(i,j);
			}
		}
		
		
		printf("%d %d\n",n,m);
		for(int i=0;i<n;i++){
			printf("%d\n",a[i]);
		}	
	}
}

```
[第十三週](https://github.com/ucc-0121/2021/blob/gh-pages/week13)
------------
```C
13-1
void setup(){
  size(1024,400);
}
void draw(){
  if (mousePressed) background(51,146,203); 
  else background(51,203,128);
}
```
```C
13-2
size(1024,400) 
 background(51,203,128);
```
```C
13-3
void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//互動版本每秒畫60次
  if (mousePressed) background(51,146,203); //按下去淺藍
  else background(51,203,128);//否則淺綠
  textSize(80);//文字大小
  text(a,512,200);//劃出文字
}
int a=0;
void mousePressed(){
  a++;
}
```
```C
13-4
void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//互動版本每秒畫60次
  if (mousePressed) background(51,146,203); //按下去淺藍
  else background(51,203,128);//否則淺綠
  textSize(80);//文字大小
  text("中文壞掉Now a is:"+a,212,200);//劃出文字
}//目標!!文字全系列都交一下
int a=0;
void mousePressed(){
  a++;
}

```
```C
13-5
//開新的
void setup(){
  size(1024,400);
}
void draw(){
  background(#C1F6FF);//色碼
  int s=second();
  int m=minute();
  int h=hour();
  textSize(80);
  text(h+":"+m+":"+s,100,200);
   //數字 字串 數字 字串 數字
}

```
```C
13-6
//開新的
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",80));
}
void draw(){
  background(#85A9AF);//色碼
  int s=second();
  int m=minute();
  int h=hour();
  textSize(80);
  text(h+":"+m+":"+s,100,200);
  int total=s+60*m+60*60*h;
  int closeH=17,closeM=40,closeS=0;
  int total2=closeS+60*closeM+60*60*closeH;
  int ans=total2-total;
  text("剩下幾秒:"+ans,100,100);
   //數字 字串 數字 字串 數字
}
```
```C
13-7
//開新的
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",80));
}
void draw(){
  background(#85A9AF);//色碼
  int s=second();
  int m=minute();
  int h=hour();
  textSize(80);
  text(h+":"+m+":"+s,100,200);
  int total=s+60*m+60*60*h;
  int closeH=17,closeM=40,closeS=0;
  int total2=closeS+60*closeM+60*60*closeH;
  int ans=total2-total;
  text("剩下幾秒:"+ans,100,100);
  int ansH=ans/60/60%60,ansM=ans/60%60,ansS=ans%60;
  text(ansH+":"+ansM+":"+ansS,100,300);
   //數字 字串 數字 字串 數字
}
```
[第十四週](https://github.com/ucc-0121/2021/blob/gh-pages/week14)
------------
```C
14-1
void setup(){//設定只做一次
float ans= random(60);//亂數 會是<60的浮點數
text(ans,20,20);//畫出ans
}
void draw(){//畫圖 每秒60次

}
```
```C
14-2
int ans=0;
void setup(){//設定只做一次
//  float ans= random(60);//亂數 會是<60的浮點數
  size(300,300);
  textSize(30);
}
void draw(){//畫圖 每秒60次
background(#62AED3);
text(ans,20,30);
}
  void mousePressed(){//按下去 互動一次
    ans = (int)random(60);//浮點數不能直接變整數
}
```
```C
14-3
int []a={1,2,3,4,5,6,7,8,9,10};//Java
int i1,i2;
void setup(){
  size(400,100);
  textSize(30);
  }
 void draw(){
   background(#62AED3);
   for(int i=0;i<10;i++){
     text(a[i],i*40,50);
   }
   rect(i1*40,50,30,30);
   rect(i2*40,50,30,30);
 }
 void mousePressed(){
   for(int i=0;i<100;i++);{
     i1=(int)random(10);
     i2=(int)random(10);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }
 }
```
```C
14-4
int []a=new int[47];//JAVA陣列
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;
//讓a[i]的陣列裡面要先放整齊對應的數字
  for(int i=0;i<1000;i++){
    int i1 = (int)random(47);
    int i2 = (int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊 先洗好牌 先知道得獎號碼 等下再掉出來
}
void draw(){
  background(#62AED3);
  for(int i=0;i<5;i++){
    text(a[i],i*80,100);
  }
}
```
```C
14-5
int []a=new int[47];//JAVA陣列
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;
//讓a[i]的陣列裡面要先放整齊對應的數字
  for(int i=0;i<1000;i++){
    int i1 = (int)random(47);
    int i2 = (int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊 先洗好牌 先知道得獎號碼 等下再掉出來
}
int N=0;
void draw(){
  background(#62AED3);
  for(int i=0;i<N;i++){
    text(a[i],i*80,100);
  }
}
void mousePressed(){
  N++;
}
```
```C
14-6
int []a=new int[47];//JAVA陣列
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;
//讓a[i]的陣列裡面要先放整齊對應的數字
  for(int i=0;i<1000;i++){
    int i1 = (int)random(47);
    int i2 = (int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊 先洗好牌 先知道得獎號碼 等下再掉出來
}
int N=0;
void draw(){
  textAlign(CENTER,CENTER);//文字對齊:中.中
  background(#62AED3);
  for(int i=0;i<N;i++){
    fill(255); ellipse(    i*80+40,100,55,55);
    fill(0);     text(a[i],i*80+40,100);
  }
}
void mousePressed(){
  N++;
}
```
[第15週-上課鐘聲](https://github.com/ucc-0121/2021/blob/gh-pages/week15)
------------
```C
15-1
//自動打鐘的程式
void setup(){
  size(400,200);
}
void draw(){
  int s= second();//0...59秒
  if(s%2==0) background(#50C5E8);
  else background(#50E8A9);
}

```
```C
15-1(2)
void setup(){
  size(400,200);
  textSize(40);//大字
}
void draw(){
  int s= second();//s會增加0...59
  background(#50C5E8);
 // text(59-s,100,100);//59....1減少
  text(10-s%11,100,100);//10.9.8.7...3.2.1.0,共11個數
}
```
```C
15-3
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  background(#50C5E8);
}
void mousePressed(){
  player.play();
}	
```
```C
15-4
點擊播放 點擊停止
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "bell.mp3");
}
void draw(){
  background(#50C5E8);
}
void mousePressed(){
  if(player.isPlaying()){
  player.stop();  
  }else{
    player.play();//太吵了
  }
}
```
```C
15-5 tada
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//大字
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  int s= second();//s會增加0...59
  background(#50C5E8);
 // text(59-s,100,100);//59....1減少
  text(10-s%11,100,100);//10.9.8.7...3.2.1.0,共11個數
  if(10-s%11==0 && !player.isPlaying()){
    player.play();
  }
}
```
```C
15-6
function setup() {
  createCanvas(400,200);
}
function draw() {
    let s = second();
    if(s%2==0){
      background(255,0,0);
    }else{
      background(58,114,191);
    }
    
}
```
第十六週
------------
```C
week16-1
void setup(){
  size(400,200);
}
void draw(){
  background(#6FF5BA);
  ellipse (50,50,80,80);
//       圓心, 寬,高 
}
```
```C
16-2
void setup(){
  size(400,200);
}
void draw(){
  background(#6FF5BA);
  fill(255);
  ellipse (50,50,80,80);
//       圓心, 寬,高 
  fill(#53A4CE);
  float stop=mouseX/50.0;
  text(stop,100,100);//劃出弧度
  arc(50,50,80,80,0,stop);
  //  圖心  寬高 開始 結束
}
```
```C
16-3
void setup(){
  size(400,200);
}
void draw(){
  background(#6FF5BA);
  fill(255);
  ellipse (50,50,80,80);
//       圓心, 寬,高 
  fill(#53A4CE);
  float start=mouseX/50.0;
  textSize(40);
  text(start,100,100);
  arc(50,50,80,80,0+start,0.1+start);
  //  圖心  寬高 開始 結束
}
```
```C
16-4
void setup() {
  size(400, 200);
}
void draw() {
  background(#B389EA);
  fill(255);
  ellipse(100, 100, 180, 180);

  fill(255, 0, 0);
  float start=mouseX/50.0;
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-5
void setup() {
  size(400, 200);
}
void draw() {
  background(#B389EA);
  fill(255);
  ellipse(100, 100, 180, 180);

  fill(255,0,0);
  float start=mouseX/50.0;
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-6
void setup() {
  size(400, 200);
}
float start=0;
void draw() {
  background(#B389EA);
  if(start <10) start+=0.01;// float start=mouseX/50.0;
  fill(255);
  text(start,200,150);
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-7
void setup() {
  size(400, 200);
}
float start=0,v=0.07;
void draw() {
  background(#B389EA);
  if(v>0.001){
  start +=v;//位置 速度 加速度 (位置會加上速度)
  v*=0.99;//摩擦力為讓速度變慢 位置 速度 加速度(速度加上加速度)
  }
 // if(start <10) start+=0.01;// float start=mouseX/50.0;
  fill(255);
  text(start,200,150);
  text(v,200,170);
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-8
void setup() {
  size(400, 200);
}
float start=0,v;
void mousePressed(){
  v = random(1);
}
void draw() {
  background(#B389EA);
  if(v>0.001){
  start +=v;//位置 速度 加速度 (位置會加上速度)
  v*=0.99;//摩擦力為讓速度變慢 位置 速度 加速度(速度加上加速度)
  }
 // if(start <10) start+=0.01;// float start=mouseX/50.0;
  fill(255);
  text(start,200,150);
  text(v,200,170);
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
