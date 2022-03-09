#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("enter the value of n\n");
  scanf("%d",n);
  printf("enter the value of r\n");
  scanf("%d",r);
}
int ncr(int n, int r)
{
  int a=1,b=1,c=1;
  for(int i=1;i<=n;i++)
    {
      a=a*i;
    }
  for(int i=1;i<=(n-r);i++)
    {
     b=b*i;
    }
  for(int i=1;i<=r;i++)
    {
      c=c*i;
    }
  int result;
  result=((a)/(b*c));
  return result;
}
void output(int n, int r, int result)
{
  printf("the value of %d C %d is %d",n,r,result);
}
int main()
{
  int a,b,c;
  input_n_and_r(&a,&b);
  c=ncr(a,b);
  output(a,b,c);
  return 0;
}

