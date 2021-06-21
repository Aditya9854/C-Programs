    #include<stdio.h>
    #include<conio.h>

    int main()
    {
        int No=0;

        printf("\n\n Enter a Number to find given Number is Even or Odd = ");
        scanf("%d",&No);

        (No%2==0)? printf("\n\n Given Number %d is Even ",No): printf("\n\n Given Number %d is odd",No);

        printf("\n\n Enter any Key To Exit..\n");

        getch();
        return 0;

    }
