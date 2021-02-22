#include <stdio.h>
#include <stdlib.h>

int main()
{
   int data[100];
   FILE *fptr;
      
      if ((fptr = fopen("C:\\Tang-Thuong-102-Ca-Hoi-Hoang.wav","r")) == NULL)//Mở file
      {
       printf("Error! opening file");
 
       exit(1);
      }
       for(int i = 0; i <= 44; i++)
   {
      fread(&data, sizeof(data), 1 , fptr); // Đọc file và lưu vào biến data 
      printf(" %d ", data[i]);
   }

      fclose(fptr);  // Đóng file
//1179011410  0  0  0  0  0  0  0  0  0  0  0  65535  0  65536  0  0  0  0  0  0  0  0  0  0  0  0  0  1  0  0  0  0  0  0  0  0  0  0  0  0  0  65536  0  0

    return 0;
}