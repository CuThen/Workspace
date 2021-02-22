#include <stdio.h>

void nhap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int main() {
    
    int arr[1000];
    int n;
    int i, total = 0;

    printf("\nNhap so phan tu cua day so, n = ");
    scanf("%d", &n);
    nhap(arr, n); 
     
   printf("In tat ca phan tu cua mang: \n");
   for(i = 0; i < n; i++) {
       printf("%d ", arr[i]);
    }
     
   // tinh tong cac phan tu cua mang
   for(i = 0; i < n; i++) {
      total = total + arr[i];
    }
   printf("\nTong cua mang : %2.1f",total);
   printf("\nGia tri trung binh cua mang la: %2.1f", (float) total / n);
   return 0;
}