 // print Characters in Given Range
 #include<stdio.h>
 #include<conio.h>

 int main()
 {
        char ch='\0',Start_ch='\0',End_ch='\0';

        printf("\n Enter a Start Point = ");
        Start_ch=getche();

        printf("\n Enter a End_Point = ");
        End_ch=getche();

        for(ch=Start_ch;ch<=End_ch;ch++)
        {
              printf("\n %c",ch);
        }
        getch();
        return 0;

 }
