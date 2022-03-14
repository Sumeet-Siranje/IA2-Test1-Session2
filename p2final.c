#include<stdio.h>

int input_side(){
  int n;
  printf("enter the side of triangle\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c){
  if(a!=b && a!=c && b!=c){
    return 1;
  }
    return 0;
}

void output(int a,int b,int c,int isscalene)
{
  if(isscalene==0){
    printf("the triangle with side %d,%d and %d is not scalene\n",a,b,c);
  }
  else{
     printf("the triangle with side %d ,%d and %d is  scalene\n",a,b,c);
  
  }
}
int main(){
  int n1,n2,n3,n4;
  n1=input_side();
  n2=input_side();
    n3=input_side();
  n4=check_scalene(n1,n2,n3);
  output(n1,n2,n3,n4);
  return 0;
}