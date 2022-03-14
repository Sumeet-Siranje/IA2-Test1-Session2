#include<stdio.h>
void input(float *base,float *height)
{
printf(" enter the base of triangle\n");
scanf("%f",base);
printf(" enter the height  of triangle\n");
scanf("%f",height);
}
void find_area(float base,float height,float *area){
*area=(base)*(height)/2.0;
}
void output(float base,float height,float area){
  printf(" given base %f and height %f now the area of triangle is %f\n",base,height,area);
}
int main(){
  float n1,n2,n3;
input(&n1,&n2);
find_area(n1,n2,&n3);
output(n1,n2,n3);
return 0;
}