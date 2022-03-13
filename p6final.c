#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void input();
int count();
void output();

int main()
{
  char a;
  input(&a);
  int res = count(&a);
  output(&a,res);
  return 0;
}

void input(char *a)
{
  size_t size = 50;
  a = (char*)malloc(size);
  char **b = &a;
  printf("Enter the sentence \n");
  size_t c = getline(b,&size,stdin);
}

int count(char *a)
{
  int res=0;
  char* token = strtok(a, " ");
  while (token != NULL) 
  {
    res++;
    token = strtok(NULL, " ");
  }

  return res;
}

void output(char *a, int res)
{
  printf("The number of words in %s is %d",a,res);
}