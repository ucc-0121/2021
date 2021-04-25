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
