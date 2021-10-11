// Pointer Arithmatic - Increment

  #include<stdio.h>
  #include<conio.h>

  int main()
  {
      int Num[5]={15,59,88,27,65};
      int *Ptr = Num;

      printf("\n Base Address Of Array is = %d",Num);   //2686712
      printf("\n Value Of Pointer is = %d",Ptr);        //2686712
      printf("\n Value Of Array Element Where Pointer Pointing =%d",*Ptr);   //15

      getch();

      Ptr++;
      // Ptr++  => Ptr + (Size Of (<Data type Ptr>)*1)
      //        => 2686712 + (Size of (int) * 1)
      //        => 2686712 + (4 * 1)
      //        => 2686716

      printf("\n\n New Value Of Pointer Is = %d",Ptr); //2686716
      printf("\n Value Of Array Element Where Pointer Pointing = %d",*Ptr);  //59

      getch();
      return 0;
  }




















