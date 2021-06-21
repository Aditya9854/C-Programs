
 #include<stdio.h>
 #include<conio.h>

 int main()
 {
      int No = 0;

      printf("\n Enter a Number => ");
      scanf("%d",&No);

      if(No % 5 == 0)
      {
            printf("\n Given Number %d is Divisible By 5.\n",No);
      }
      else if(No % 7 == 0)
      {
            printf("\n Given Number %d is Divisible By 7.\n",No);
      }
      else
      {
            printf("\n Given Number %d is Not Divisible By Both 5 & 7.\n",No);
      }
      getch();
      return 0;

 }
