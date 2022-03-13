#include<stdio.h>
typedef struct fraction
{
    int num;
    int den;
} frac;

frac input_fraction();
frac Largest_fraction();
void output();

int main()
{
    frac f1 = input_fraction();
    frac f2 = input_fraction();
    frac f3 = input_fraction();
    frac largest;
    largest = Largest_fraction(f1,f2,f3);
    output(f1,f2,f3,largest);
    return 0;
}

frac input_fraction()
{
    frac f;
    printf("Enter the numerator of the fraction: ");
    scanf("%d",&f.num);
    printf("Enter the denominator of the  fraction: ");
    scanf("%d",&f.den);
    
    return f;
}

frac Largest_fraction(frac f1, frac f2, frac f3)
{
    frac larg;
    larg.num = ( (f1.num*f2.den*f3.den) + (f2.num*f1.den*f3.den) + (f3.num*f1.den*f2.den));
    larg.den = f1.den*f2.den*f3.den;
    int gcd;
    for(int i = 2; i<=larg.num && i<=larg.den; ++i)
    {
        if(larg.num%i==0 && larg.den%i==0)
        {
            gcd = i;
        }
    }
    larg.num = larg.num/gcd;
    larg.den = larg.den/gcd; 
    return larg;
}

void output(frac f1, frac f2, frac f3, frac larg)
{
    printf("The sum of %d/%d + %d/%d + %d/%d is %d/%d ",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,larg.num,larg.den);
}