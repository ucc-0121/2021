```C
16-1
void setup(){
  size(400,200);
}
void draw(){
  background(#6FF5BA);
  ellipse (50,50,80,80);
//       圓心, 寬,高 
}
```
```C
16-2
void setup(){
  size(400,200);
}
void draw(){
  background(#6FF5BA);
  fill(255);
  ellipse (50,50,80,80);
//       圓心, 寬,高 
  fill(#53A4CE);
  float stop=mouseX/50.0;
  text(stop,100,100);//劃出弧度
  arc(50,50,80,80,0,stop);
  //  圖心  寬高 開始 結束
}
```
```C
16-3
void setup(){
  size(400,200);
}
void draw(){
  background(#6FF5BA);
  fill(255);
  ellipse (50,50,80,80);
//       圓心, 寬,高 
  fill(#53A4CE);
  float start=mouseX/50.0;
  textSize(40);
  text(start,100,100);
  arc(50,50,80,80,0+start,0.1+start);
  //  圖心  寬高 開始 結束
}
```
