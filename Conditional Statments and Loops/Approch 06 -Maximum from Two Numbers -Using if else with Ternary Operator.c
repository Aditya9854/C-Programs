// Maximum From Two Numbers - Using if else
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
      int Num1= 0,Num2= 0;

          printf("\n Enter Two Integer Numbers : ");
      Accept:
          scanf("%d%d",&Num1,&Num2);

          if(Num1==Num2)
          {
               printf("\n Both Numbers are Equal \n");
               printf("\n=====================*******=====================\n");
               printf("\n Enter Two Different integer Numbers For Comparison : ");
               goto Accept;
          }

          //condition ? true ststement : False statement ;

          (Num1>Num2)? printf("\n Number %d is Maximum. \n",Num1) : printf("\n Number %d is Maximum. \n",Num2);

          printf("\n Enter Any key to Exit.. ");

          getch();
          return 0;
  }
