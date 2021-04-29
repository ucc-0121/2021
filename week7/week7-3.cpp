char *p1, *p2;
char line[4][10]={"jkl", "ghi", "def", "abc"};
char temp[10];
int main() {
  int n=4;
  for(int k=0; k<n-1; k++){
    for(int i=0; i<n-1; i++){
      p1=line[i]; p2=line[i+1];
      if( strcmp(line[i],line[i+1]) > 0 ){
        strcpy(temp, line[i]);
        strcpy(line[i], line[i+1]);
        strcpy(line[i+1], temp);
      }
    }
  }

  for(int i=0; i<n; i++){
    printf("%s\n", line[i]);
  }

  return 0;
}
