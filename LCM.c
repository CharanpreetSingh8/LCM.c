#include <stdio.h>

//Find Greatest common divisor
// LCM = a*b/GCD

int gcd(int a, int b)
{
    if(a == 1 || b == 1){
        return 1;
    }
    else if (a == b)
    {
        return a;
    }
    else if (a>b)
    {
        if (a%b == 0){
            return b;
        }
        else {return (gcd(a%b,b));}
    }
    else if (a == 0 || b == 0)
    {
        return 0;
    }
    else if (a<b)
    {
        if(b%a == 0){
            return a;
        }
        else{return (gcd(a,b%a));}
    }
    else{}
}

int lcm(int q, int w)
{
    if(q == 0 || w == 0){
        return 0;
    }
    else{
        return (q*w/gcd(q,w));
    }          
}


int main()
{
    int m, n;
    printf("Enter any two numbers:\n");
    scanf("%d\n%d", &m, &n);

    printf("The LCM of the numbers %d,%d is %d", m, n, lcm(m,n));
    return 0;
}
