
 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int i=0, j=0, r=0, c=0;

     printf("\n Enter Row & Column Value For Pattern : ");
     scanf("%d%d",&r,&c);

     printf("\n=================+++Pattern+++===================\n\n");

     for(i=1;i<=r;i++)
     {
         for(j=1;j<=c;j++)
         {
             if(j==1 || i==1 ||i==r ||j==c)
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
     printf("\n=================================================\n\n");

     getch();
     return 0;
 }
