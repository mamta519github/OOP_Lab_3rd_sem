//.Q.7.Sum of n elements using function concept.

#include <stdio.h>
#include <conio.h>

int sum(int number);

int main()
{
    int no;

    printf("\n How many numbers? : ");
    scanf("%d", &no);

    printf("\n Sum of the %d numbers is : %d ", no, sum(no));

    return 0;
}
int sum(int number)
{

    int i, addition = 0;

    for (i = 1; i <= number; i++)
    {
        addition += i;
    }
    return addition;
}