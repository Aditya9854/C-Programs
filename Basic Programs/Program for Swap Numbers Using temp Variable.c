//Swapping Two numbers using temp variable

#include<stdio.h>
#include<conio.h>

int main()
{
        int No1=0, No2=0,temp=0;

        printf("\n Enter Two Numbers => ");
        scanf("%d%d",&No1,&No2);

        printf("\n Numbers before swap => \n");
        printf("\n\t No1=%d, No2=%d\n",No1,No2);

        temp=No1;
        No1=No2;
        No2=temp;

        printf("\n Numbers After Swap =>\n");
        printf("\n\t No1=%d, No2=%d\n",No1,No2);

        getch();
        return 0;

}

