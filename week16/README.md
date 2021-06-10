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
```C
16-4
void setup() {
  size(400, 200);
}
void draw() {
  background(#B389EA);
  fill(255);
  ellipse(100, 100, 180, 180);

  fill(255, 0, 0);
  float start=mouseX/50.0;
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-5
void setup() {
  size(400, 200);
}
void draw() {
  background(#B389EA);
  fill(255);
  ellipse(100, 100, 180, 180);

  fill(255,0,0);
  float start=mouseX/50.0;
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-6
void setup() {
  size(400, 200);
}
float start=0;
void draw() {
  background(#B389EA);
  if(start <10) start+=0.01;// float start=mouseX/50.0;
  fill(255);
  text(start,200,150);
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-7
void setup() {
  size(400, 200);
}
float start=0,v=0.07;
void draw() {
  background(#B389EA);
  if(v>0.001){
  start +=v;//位置 速度 加速度 (位置會加上速度)
  v*=0.99;//摩擦力為讓速度變慢 位置 速度 加速度(速度加上加速度)
  }
 // if(start <10) start+=0.01;// float start=mouseX/50.0;
  fill(255);
  text(start,200,150);
  text(v,200,170);
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-8
void setup() {
  size(400, 200);
}
float start=0,v;
void mousePressed(){
  v = random(1);
}
void draw() {
  background(#B389EA);
  if(v>0.001){
  start +=v;//位置 速度 加速度 (位置會加上速度)
  v*=0.99;//摩擦力為讓速度變慢 位置 速度 加速度(速度加上加速度)
  }
 // if(start <10) start+=0.01;// float start=mouseX/50.0;
  fill(255);
  text(start,200,150);
  text(v,200,170);
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
```C
16-8
void setup() {
  size(400, 200);
}
float start=0,v;
void mousePressed(){
  v = random(1);
}
void draw() {
  background(#B389EA);
  if(v>0.001){
  start +=v;//位置 速度 加速度 (位置會加上速度)
  v*=0.99;//摩擦力為讓速度變慢 位置 速度 加速度(速度加上加速度)
  }
 // if(start <10) start+=0.01;// float start=mouseX/50.0;
  fill(255);
  text(start,200,150);
  text(v,200,170);
  for (int i=0; i<24; i++) {
    float shift=2*PI*i/24.0;
    if (i%3==0) fill(255);
    if (i%3==1) fill(#FFF86C);
    if (i%3==2) fill(#89D0EA);
    if(i==0) fill(#FA761E);
    arc(100, 100, 180, 180, shift+0+start, shift+PI/12+start);
  }
}
```
