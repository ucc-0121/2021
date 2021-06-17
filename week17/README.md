```C
17-1
void setup(){
  size(400,200);
  textSize(40);
}
String line="hello";
void draw(){
  background(#8FF0D3);
  text(line,100,100);//可以將字串LINE畫出來
  text("World",100,150);//也可以印出來
}
```
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="hello";
char c='9';
void draw(){
  background(#8FF0D3);
  text(line+c+100,100,100);//可以將字串LINE畫出來
  text("World:"+key,100,150);//也可以印出來
}//這裡發現 字串的+其實是越加越長
//key會對應你最後按下的(字母.數字.符號)
```
```C
17-3
void setup(){
  size(400,200);
  textSize(40);
}
char c='9';
int win=0;
void draw(){
  background(#8FF0D3);
  text("Pressed:"+c,100,100);
  text("You :"+key,100,150);
  if(c==key) win=1;
  else win=0;
  
  if(win==1) text("You win!",100,50);
}
```
