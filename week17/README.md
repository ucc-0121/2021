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
