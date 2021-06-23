
  #include<stdio.h>
  #include<conio.h>

  int main()
  {
          int R=1,C=1;
          printf("\n=================******=====================\n");
          for(R=1;R<=10;R++)
          {
              for(C=5;C<=10;C++)
              {
                  printf(" %3d ",R*C);
              }
              printf("\n");
          }
          printf("\n=================******=====================\n");
          getch();
          return 0;
  }
