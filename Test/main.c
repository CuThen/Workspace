#include <stdio.h>

typedef struct
{
    int mat[100][100];
    int n;
}matrix;

void enter_matrix(matrix *x)
{
    printf("Nhap cap cua ma tran m1 :");
    scanf("%d",&x->n);
    for( int i = 0 ; i < x->n ; i++){
        for ( int j = 0 ; j < x->n ; j++){
            printf("mat[%d][%d] : ",i,j);
            scanf("%d",&x->mat[i][j]);
        }
    }
}

int main()
{
   matrix m1;
   matrix* ptr_matrix;
   ptr_matrix = &m1;
   enter_matrix(ptr_matrix);
   for( int i = 0 ; i < m1.n ; i++){
        for ( int j = 0 ; j < m1.n ; j++){
            printf(" %d ",m1.mat[i][j]);    
        }
            printf("\n"); 
    }

   return 0;
}