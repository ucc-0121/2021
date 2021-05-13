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
