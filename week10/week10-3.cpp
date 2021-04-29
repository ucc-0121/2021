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
