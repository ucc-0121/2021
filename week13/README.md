
[第十三週](https://github.com/ucc-0121/2021/week13)
```C
13-1
void setup(){
  size(1024,400);
}
void draw(){
  if (mousePressed) background(51,146,203); 
  else background(51,203,128);
}
```
```C
13-2
size(1024,400) 
 background(51,203,128);
```
```C
13-3
void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//互動版本每秒畫60次
  if (mousePressed) background(51,146,203); //按下去淺藍
  else background(51,203,128);//否則淺綠
  textSize(80);//文字大小
  text(a,512,200);//劃出文字
}
int a=0;
void mousePressed(){
  a++;
}
```
```C
13-4
void setup(){//只做一次設定
  size(1024,400);
}
void draw(){//互動版本每秒畫60次
  if (mousePressed) background(51,146,203); //按下去淺藍
  else background(51,203,128);//否則淺綠
  textSize(80);//文字大小
  text("中文壞掉Now a is:"+a,212,200);//劃出文字
}//目標!!文字全系列都交一下
int a=0;
void mousePressed(){
  a++;
}

```
```C
13-5
//開新的
void setup(){
  size(1024,400);
}
void draw(){
  background(#C1F6FF);//色碼
  int s=second();
  int m=minute();
  int h=hour();
  textSize(80);
  text(h+":"+m+":"+s,100,200);
   //數字 字串 數字 字串 數字
}

```
```C
13-6
//開新的
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",80));
}
void draw(){
  background(#85A9AF);//色碼
  int s=second();
  int m=minute();
  int h=hour();
  textSize(80);
  text(h+":"+m+":"+s,100,200);
  int total=s+60*m+60*60*h;
  int closeH=17,closeM=40,closeS=0;
  int total2=closeS+60*closeM+60*60*closeH;
  int ans=total2-total;
  text("剩下幾秒:"+ans,100,100);
   //數字 字串 數字 字串 數字
}
```
```C
13-7
//開新的
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",80));
}
void draw(){
  background(#85A9AF);//色碼
  int s=second();
  int m=minute();
  int h=hour();
  textSize(80);
  text(h+":"+m+":"+s,100,200);
  int total=s+60*m+60*60*h;
  int closeH=17,closeM=40,closeS=0;
  int total2=closeS+60*closeM+60*60*closeH;
  int ans=total2-total;
  text("剩下幾秒:"+ans,100,100);
  int ansH=ans/60/60%60,ansM=ans/60%60,ansS=ans%60;
  text(ansH+":"+ansM+":"+ansS,100,300);
   //數字 字串 數字 字串 數字
}
```
