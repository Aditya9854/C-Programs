
 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     char ch = '\n';

     printf("\n Enter A Character = ");
     scanf("%c",&ch);

     if( (ch>='A')&&(ch<='Z') )
     {
         printf("\n Given Character is Upper Case.\n");
     }
     else if( (ch>='a')&&(ch<='z') )
     {
         printf("\n Given Character is lower Case.\n");
     }
     else
     {
         printf("\n Given Character is Neither Upper Case Nor Lower Case.\n");
     }
     getch();
     return 0;
 }
