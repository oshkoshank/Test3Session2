#include<stdio.h>

int size();
void input();
int greatest();
void output();

int main()
{
  int n = size();
  int a[n];
  input(n,a);
  int larg = greatest(n,a);
  output(n,a,larg);
  return 0;
}

int size()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    return n;
}

void input(int n, int a[n])
{
    printf("Enter the numbers: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
}

int greatest(int n, int a[n])
{
    int index = 0;
    for(int i = 0; i < n; i++)
    {
      {
        if(a[i]>a[0])
        {
            index = i;
        }
      }
    }
    return index;
}

void output(int n, int a[n], int larg)
{
    printf("The larget number among ");
    for(int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        if(i<n-1)
        {
            printf(", ");
        }
    }
    printf(" is %d which is present at index %d",a[larg],(larg+1));
}