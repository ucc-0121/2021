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
