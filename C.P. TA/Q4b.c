#include <stdio.h>
int check_cond(int);

int main()
{
    int num,ret;
    printf("Input a number: ");
    scanf("%d", &num);
    
    ret = check_cond(num);

    if (ret == 1)
    {
        printf("Yes there are three consecutive 5s in the entered number!!!");
    }
    else
    {
        printf("No there are no three consecutive 5s in the entered number!!!");
    }
    
    return 0;
}

int check_cond(int num)
{
    int ctr = 0;
    int rem;

    while (num > 0)
    {
        rem = num % 10;
        num /= 10;

        if (rem == 5)
            ctr++;
    }

    if (ctr == 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    ;
}
