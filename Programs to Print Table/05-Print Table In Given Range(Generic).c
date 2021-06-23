
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
          int Start_Num=0,End_Num=0,R=1,C=1;

          printf("\n Enter A Range To Print Table => ");
          printf("\n Enter A Start Number = " );
          scanf("%d",&Start_Num);
          printf("\n Enter A End Number = ");
          scanf("%d",&End_Num);

          printf("\n\n*******Table From %d To %d ***********\n\n",Start_Num,End_Num);

          if(Start_Num < End_Num)
          {
              for(R=1; R<=10; R++)
              {
                  for(C=Start_Num; C<=End_Num; C++)
                  {
                      printf(" %3d ",R*C);
                  }
                  printf("\n");
              }
          }
          else
          {
              for(R=1;R<=10;R++)
              {
                  for(C=Start_Num; C>=End_Num; C--)
                  {
                      printf(" %3d ",R*C);
                  }
                  printf("\n");
              }
          }
          printf("\n\**************************************\n");

          getch();
          return 0;
  }
