/*  Student number: 202002299
    email address:  victormohapi39@gmail.com
    Full name:      Thamae Victor MOhapi
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//The function below tests if a number is prime

int prime(int n)
{

    int i, flag=0;

    if(n==0 || n==1)
        flag = 1;

    for(i=2; i<= n/2; i++)
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        return n;

}

//The function below reverses a number, checks if it is a palindrome and checks if the new number is prime

int palindrome(int n)
{
    int r, d = 0;
    int w = n;

    while(n>0)
    {
        r = n%10;
        d = d*10 +r;
        n = n/10;

    }

    if(w != d)
    {
        int q = sqrt(d);
        double p = sqrt(d);

        if (q==p && prime(q))
        {
            printf("%d \n", w);
            return w;
        }
    }
}

//The main function utilizes a for-loop and an if-statement to print the first 10 reversible prime squares

int main()
{
    for(long int y = 0; y < 10000000; y++)
        {
            int q = sqrt(y);
            double p = sqrt(y);

            if (q==p && prime(q))
            {
                palindrome(y);
            }
        }

    return 0;
}
