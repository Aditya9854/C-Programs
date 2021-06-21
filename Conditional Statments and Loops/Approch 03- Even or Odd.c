   #include<stdio.h>
   #include<conio.h>

   int main()
   {
          int No =0;

          printf("\n\nEnter a Number to find given Number is even or Odd = ");
          scanf("%d",&No);

          if(No==0)
          {
                 printf("\n\n Given Integer Number %d is Neutral",No);
          }
          else if(No%2==0)
          {
                 printf("\n\nGiven Integer Number %d is Even ",No);
          }
          else
          {
                 printf("\n\n Given Integer Number %d is Odd ",No);
          }

          printf("\n\n Enter Any key to Exit..");

           getch();
           return 0;
    }
