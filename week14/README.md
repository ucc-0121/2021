```C
14-1
void setup(){//設定只做一次
float ans= random(60);//亂數 會是<60的浮點數
text(ans,20,20);//畫出ans
}
void draw(){//畫圖 每秒60次

}
```
```C
14-2
int ans=0;
void setup(){//設定只做一次
//  float ans= random(60);//亂數 會是<60的浮點數
  size(300,300);
  textSize(30);
}
void draw(){//畫圖 每秒60次
background(#62AED3);
text(ans,20,30);
}
  void mousePressed(){//按下去 互動一次
    ans = (int)random(60);//浮點數不能直接變整數
}
```
```C
14-3
int []a={1,2,3,4,5,6,7,8,9,10};//Java
int i1,i2;
void setup(){
  size(400,100);
  textSize(30);
  }
 void draw(){
   background(#62AED3);
   for(int i=0;i<10;i++){
     text(a[i],i*40,50);
   }
   rect(i1*40,50,30,30);
   rect(i2*40,50,30,30);
 }
 void mousePressed(){
   for(int i=0;i<100;i++);{
     i1=(int)random(10);
     i2=(int)random(10);
     int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
   }
 }
```
```C
14-4
int []a=new int[47];//JAVA陣列
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;
//讓a[i]的陣列裡面要先放整齊對應的數字
  for(int i=0;i<1000;i++){
    int i1 = (int)random(47);
    int i2 = (int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊 先洗好牌 先知道得獎號碼 等下再掉出來
}
void draw(){
  background(#62AED3);
  for(int i=0;i<5;i++){
    text(a[i],i*80,100);
  }
}
```
```C
14-5
int []a=new int[47];//JAVA陣列
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;
//讓a[i]的陣列裡面要先放整齊對應的數字
  for(int i=0;i<1000;i++){
    int i1 = (int)random(47);
    int i2 = (int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊 先洗好牌 先知道得獎號碼 等下再掉出來
}
int N=0;
void draw(){
  background(#62AED3);
  for(int i=0;i<N;i++){
    text(a[i],i*80,100);
  }
}
void mousePressed(){
  N++;
}
```
```C
14-6
int []a=new int[47];//JAVA陣列
void setup(){
  size(500,200);//大一點
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;
//讓a[i]的陣列裡面要先放整齊對應的數字
  for(int i=0;i<1000;i++){
    int i1 = (int)random(47);
    int i2 = (int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }//作弊 先洗好牌 先知道得獎號碼 等下再掉出來
}
int N=0;
void draw(){
  textAlign(CENTER,CENTER);//文字對齊:中.中
  background(#62AED3);
  for(int i=0;i<N;i++){
    fill(255); ellipse(    i*80+40,100,55,55);
    fill(0);     text(a[i],i*80+40,100);
  }
}
void mousePressed(){
  N++;
}
```
