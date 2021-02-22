#include <stdio.h>
 
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main()
{
    int a[1000];
    int n;
    printf("\nNhap so phan tu cua day so, n = ");
    scanf("%d", &n);
    nhap(a, n);
    for(int i = 0; i < n ;i++){
        printf("\nPhan tu cua arr: %d ",a[i]);
    }
    printf("\nMax = %d", max(a, n));
    printf("\nMin = %d", min(a, n));
    return 0;
}