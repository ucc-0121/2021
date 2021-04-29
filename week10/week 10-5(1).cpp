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
