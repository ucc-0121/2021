#include <stdio.h>
struct DATA{
    float x,y,z;
}point1;
struct DATA points[5];

int main()
{
    for(int i=0;i<5;i++){
    points[i].x=i*10;
    points[i].y=20;
    points[i].z=0;
    printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}


