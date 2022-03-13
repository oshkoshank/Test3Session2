#include<stdio.h>
int input_degree();
float input_x();
void input_coefficients();
float evaluate_polynomial();
void output();

int main()
{
  int n;
  n = input_degree();
  float x = input_x();
  float a[n+1];
  input_coefficients(n,a);
  float result = evaluate_polynomial(n,a,x);
  output(n,a,x,result);
  return 0;
}

int input_degree()
{
  int n;
  printf("Enter the degree of the polynomial : ");
  scanf("%d",&n);
  return n;
}

float input_x()
{
  int x;
  printf("Enter the value of x : ");
  scanf("%d",&x);
  return x;
}

void input_coefficients(int n, float a[n])
{
  printf("Enter the coefficinets of the polynomial: ");
  for(int i = 0; i < n; i++)
    {
      scanf("%f",a[i]);
    }
}

//Mistake made here check once again............
float evaluate_polynomial(int n, float a[n], float x)
{
  float result;
  result = 
  for(int i = n-1; i <=0; i--)
    {
      result = result*x + a[i];
    }
  return result;
}

void output(int n, float a[n], float x, float result)
{
  printf("The value of ");
  for(int i = 0; i< n; i++)
    {
      printf("%d",a[i])
    }
}