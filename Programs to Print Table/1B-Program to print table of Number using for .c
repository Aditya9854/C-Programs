// Print table using For
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
      int No=0,cnt=1;

      printf("\n Enter a Number To Print Its Table = ");
      scanf("%d",&No);

      for(cnt=1;cnt<=10;cnt++)
      {
           printf("\n %2d * %2d = %3d ",No,cnt,(No*cnt));

      }

      printf("\n\n Emter Any key To Exit ");

      getch();
      return 0;

  }
