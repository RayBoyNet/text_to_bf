#include <stdio.h>

void code_generator(int val){
  int i = val/10;
  int j = val%10;
  while(i){
    printf("+");
    i--;
  }
  printf("[>++++++++++<-]>");
  while(j){
    printf("+");
    j--;
  }
  printf(".>");
}

void space_generator(){
  printf("+++");
  printf("[>++++++++++<-]>");
  printf("++.>");
}

int main(int argc,char *argv[]){
  int i = 1;
  while (argv[i]){
    int j = 0;
    while (argv[i][j]){
      // printf("%d ",argv[i][j]);
      code_generator(argv[i][j]);
      puts("");
      j++;
    }
    space_generator();
    puts("");
    i++;
  }
  puts("");
  return 0;
}
