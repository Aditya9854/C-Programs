
 #include<stdio.h>
 #include<conio.h>

 int main()
 {
        int No=0;

        printf("\n\n Enter a Number to Find Given Number is Even or Odd = ");
        scanf("%d",&No);

        (No==0)? printf("\n\n Given Integer Number %d is Neutral",No):((No%2==0)? printf("\n\n Given Number %d is Even ",No): printf("\n\n Given Number %d is Odd",No));

        printf("\n\n Enter any Key To Exit..\n");

        getch();
        return(0);

 }
