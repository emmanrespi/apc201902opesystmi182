ecrespicio@opesyst:~$ cd c_programming_practice
ecrespicio@opesyst:~/c_programming_practice$ ./learnc02.exe
Enter an integer: 7
7 is an odd integer.



#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if  (number%2 == 0) 
    {
        printf("%d is an even integer.",number);
    }
    else
    {
        printf("%d is an odd integer.",number);
    }
    return 0;
}
