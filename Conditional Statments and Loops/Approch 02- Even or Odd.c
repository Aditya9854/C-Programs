  #include<stdio.h>
  #include<conio.h>

  int main()

   {
       int Num =0;

       printf("\n\n Enter Any Integer Number To Find It Is Even Or Odd = ");
       scanf("%d",&Num);

       if(Num%2==0)
       {
             printf("\n\n Given Integer Number %d is Even ",Num);
       }
       else
       {
             printf("\n\n Given Integer Number %d is Odd ",Num);
       }

       printf("\n\n Enter Any Key To Exit..");

       getch();
       return 0;

   }
