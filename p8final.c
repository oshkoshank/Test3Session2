
#include<stdio.h>

typedef struct fraction
{
	int num;
	int den;
} frac;

int lcm();
int gcd();
int size();
void input();
frac add();
void output();

int main()
{
	int n = size();
	frac f[n];
	input(n, f);
	frac sum = add(n, f);
	output(n, f, sum);
	return 0;
}

int size()
{
	int n; 
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	return n;
}

void input(int n, frac f[n])
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter the Numerator of the %d Fraction ",i+1);
		scanf("%d", &f[i].num);
		printf("Enter the Denominator of the %d First Fraction ",i+1);
		scanf("%d", &f[i].den);
	}
}


void output(int n, frac f[n], frac sum)
{
	printf("The sum of ");
	for (int i = 0; i < n; i++)
	{
		printf("%d/%d", f[i].num, f[i].den);
		if (i<n-1)
		{
			printf(", ");
		}
	}
	printf(" is %d/%d", sum.num, sum.den);
}

int gcd(int a, int b)
{
	if (b==0)
	{
		return a;
	}
	return gcd(b, a % b);
}

int lcm(int n, frac a[n])
{
	int ans = a[0].den;
	for (int i = 0; i < n; i++)
	{
		ans = (((a[i].den * ans)) / (gcd(a[i].den, ans)));
	}
	return ans;
}

frac add(int n, frac f[n])
{
	frac sum;
	sum.num = 0;
	sum.den = lcm(n,f);
	for (int i = 0; i < n; i++)
	{
		sum.num = sum.num + (f[i].num) * (sum.den / f[i].den);
	}
	int hcf = gcd(sum.num,sum.den);

    sum.den = sum.den / hcf;
    sum.num = sum.num / hcf;
	return sum;
}