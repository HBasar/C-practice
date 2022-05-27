/*A five-digit number is entered through the keyboard.
Write a program to obtain the reversed number and to
determine whether the original and reversed
numbers are equal or not. */

#include<stdio.h>
int main()
{
    int number,reverse_num=0,reminder,num;
    printf("Enter digit = ");
    scanf("%d",&number);
    num=number;

    while(number!=0){
        reminder = number%10;
        reverse_num = reverse_num*10+reminder;
        number = number/10;
    }
    printf("\nRevers number is %d",reverse_num);

    if(reverse_num==num)
        printf("\n\nNumbers are equal");
    else
        printf("\n\nNumbers are not equal\n\n");

    getch();
}
