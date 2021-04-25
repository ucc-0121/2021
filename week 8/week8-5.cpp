
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
