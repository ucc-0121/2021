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
