
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
      int i=0, j=0, x=0;

      printf("\n Enter Row & Column Value For Pattern : ");
      scanf("%d",&x);

      printf("\n=================+++Pattern+++================\n\n");

      for(i=1;i<=x;i++)
      {
         for(j=1;j<=x;j++)
         {
             if(i==1 || i==x || j==1 ||((i==(x/2)+1)&&(i>=j)))
             {
                 printf(" * ");
             }
             else
             {
                 printf("   ");
             }

         }
         printf("\n");

      }
      printf("\n===============================================\n\n");

      getch();
      return 0;
  }
