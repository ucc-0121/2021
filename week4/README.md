```C
week4-1
#include <stdio.h>
struct DATA{
    float x,y,z;
};
int main()
{

}
```

```C
week4-2
#include <stdio.h>
struct DATA{
    float x,y,z;
}point1;
int main()
{
    point1.x=3;
    point1.y=5;
    point1.z=7;
    printf("%f %f %f",point1.x,point1.y,point1.z);
}
```

```C
week4-3
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

```

```C
week4-4
#include <stdio.h>
struct DATA{
    float x,y,z;
}a,b,c;
struct DATA points[5];

int main()
{
    struct DATA d,e,f;
    for(int i=0;i<5;i++){
    points[i].x=i*10;
    points[i].y=20;
    points[i].z=0;
    printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}

```

```C
week4-5
#include <stdio.h>
struct DATA{
    float x,y,z;
}a,b;
struct DATA c,d;

int main()
{
    struct DATA e;
    struct DATA f={1,2,3};
    printf("%f %f %f\n",a.x,a.y,a.z);
    printf("%f %f %f\n",b.x,b.y,b.z);
    printf("%f %f %f\n",c.x,c.y,c.z);
    printf("%f %f %f\n",d.x,d.y,d.z);
    printf("%f %f %f\n",e.x,e.y,e.z);
    printf("%f %f %f\n",f.x,f.y,f.z);

}

```
