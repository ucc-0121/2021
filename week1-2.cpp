#include <stdio.h>
int main()
{
	int a[90],n=0;
	for(int i=1;i<=90;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		else n=n+1;
	}
	for(int k=n;k>0;k--){
		printf("%d ",a[k]);
	}
	printf("\n");
}
