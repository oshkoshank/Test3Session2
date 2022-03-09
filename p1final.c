#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter fraction 1\n");
  scanf("%d %d",num1,den1);
  printf("enter fraction 2\n");
  scanf("%d %d",num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
{
  *num3 = (num1*den2)+(den1*num2);
  *den3 = (den1*den2);
}
int gcd;
for(int i = 2; i<=*num3 && i<= *den3; ++i)
  {
    if(*num3%i==0 && *den3%i==0)
    {
      gcd=i;
    }
  }
  *num3=*num3/gcd;
  *den3=*den3/gcd;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d is: %d/%d",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int x1,y1,x2,y2,x3,y3;
  input(&x1,&y1,&x2,&y2);
  add(x1,y1,x2,y2,&x3,&y3);
  output(x1,y1,x2,y2,x3,y3);
  return 0;
}