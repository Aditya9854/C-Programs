
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
      int Num =0;

      printf("\n Enter a Number To Cheak it is Positive or Negative =>");
      scanf("%d",&Num);

      (Num==0)? printf("\n Given Number is Neutral.\n"):(Num>0)? printf("\n Given Number %d is Positive.\n",Num): printf("\n Given Number %d is Negative.\n",Num);

      printf("\n Enter Any Key To Exit..");

      getch();
      return 0;

  }

