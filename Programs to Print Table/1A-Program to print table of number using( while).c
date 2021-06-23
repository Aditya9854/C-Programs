  // print Table Using While
   #include<stdio.h>
   #include<conio.h>

   int main()
   {
       int No=0,cnt=1;

       printf("\n Enter A Number To print Its Table = ");
       scanf("%d",&No);

       while(cnt<=10)
       {
           printf("\n %2d * %2d = %3d",No,cnt,(No*cnt));
           cnt++;

       }

       printf("\n\n Enter Any Key to Exit ");

       getch();
       return 0;

   }

