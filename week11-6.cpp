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
