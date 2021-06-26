
   #include<stdio.h>
   #include<conio.h>

   int main()
   {
          int No =0;
          up:
          printf("\n\n Enter a Number to Find Given Number is Even or Odd= ");
          scanf("%d",&No);

          if(No==0)
          {
                printf("\n\n Given Integer Number %d is Neutral",No);
                goto up;
          }

          if(No%2==0)
          {
                printf("\n\n Given Integer Number %d is Even",No);

          }
          else
          {
                printf("\n\n Given Integer Number %d is Odd",No);

          }

          printf("\n\n Enter Any Key to Exit ");

         getch();
         return 0;
   }
