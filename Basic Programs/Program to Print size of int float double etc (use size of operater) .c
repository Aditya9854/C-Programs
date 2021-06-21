
 #include<stdio.h>
 #include<conio.h>

 int main()
 {
     int No= 0;
     char ch='\0';
     int size = 0;

     size = sizeof(No);

     printf("\n Size for Integer No is = %d",size);
     printf("\n Size for Character varible ch is = %d ",sizeof(ch));
     printf("\n Size for Float data type = %d",sizeof(float));
     printf("\n Size for Double data type = %d",sizeof(double));

     getch();
     return 0;

 }
