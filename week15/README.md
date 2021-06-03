```C
15-1
//自動打鐘的程式
void setup(){
  size(400,200);
}
void draw(){
  int s= second();//0...59秒
  if(s%2==0) background(#50C5E8);
  else background(#50E8A9);
}

```
```C
15-1(2)
void setup(){
  size(400,200);
  textSize(40);//大字
}
void draw(){
  int s= second();//s會增加0...59
  background(#50C5E8);
 // text(59-s,100,100);//59....1減少
  text(10-s%11,100,100);//10.9.8.7...3.2.1.0,共11個數
}
```
```C
15-3
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  background(#50C5E8);
}
void mousePressed(){
  player.play();
}
```
```C
15-4
點擊播放 點擊停止
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player = new SoundFile(this, "bell.mp3");
}
void draw(){
  background(#50C5E8);
}
void mousePressed(){
  if(player.isPlaying()){
  player.stop();  
  }else{
    player.play();//太吵了
  }
}
```
```C
15-5 tada
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);//大字
  player = new SoundFile(this, "tada.mp3");
}
void draw(){
  int s= second();//s會增加0...59
  background(#50C5E8);
 // text(59-s,100,100);//59....1減少
  text(10-s%11,100,100);//10.9.8.7...3.2.1.0,共11個數
  if(10-s%11==0 && !player.isPlaying()){
    player.play();
  }
}
```
```C
15-6
function setup() {
  createCanvas(400,200);
}
function draw() {
    let s = second();
    if(s%2==0){
      background(255,0,0);
    }else{
      background(58,114,191);
    }
    
}
```
