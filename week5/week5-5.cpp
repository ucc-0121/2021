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
