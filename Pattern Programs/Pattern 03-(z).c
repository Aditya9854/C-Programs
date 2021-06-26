
#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,r=0,c=0;

    printf("\n Enter Row & Column value for Pattern : ");
    scanf("%d%d",&r,&c);

    printf("\n=================+++Pattern+++==================\n\n");

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i+j==c+1)
            {
                printf(" $ ");
            }
            else if(i==1||i==r)
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
