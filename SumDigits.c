#include <stdio.h>
int sum_of_digits(int n);
int main()
{
    int num;
    printf("Input number:");
    scanf("%d",&num);
    int sum = sum_of_digits(num);
    printf("Sum of digits:%d",sum);
    return 0;
}
int sum_of_digits(int n)
{
    if (n == 0){
       return 0;
    }
    else{
    return (n % 10 + sum_of_digits(n / 10));
    }
}
