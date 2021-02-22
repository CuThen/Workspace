#include <stdio.h>

typedef struct{
    int mat[100][100];
    int m,n;   // m hang n cot
} matrix;

void enter_matrix(matrix* x)
{
    printf("Nhap hang cua ma tran : ");
    scanf("%d",&x->m);
    printf("Nhap cot cua ma tran : ");
    scanf("%d",&x->n);
    for( int i = 0 ; i < x->m ; i++){
        for ( int j = 0 ; j < x->n ; j++){
            printf("mat[%d][%d] : ",i,j);
            scanf("%d",&x->mat[i][j]);
        }
    }
}

void print_matrix(matrix* x)
{

    for( int i = 0 ; i < x->m ; i++){
        for ( int j = 0 ; j < x->n ; j++){
            printf(" %d ",x->mat[i][j]);    
        }
            printf("\n"); 
    }
}

void transpose_matrix(matrix* x)
{
    printf("\n");
    for( int i = 0 ; i < x->n ; i++){
        for ( int j = 0 ; j < x->m ; j++){
            printf(" %d ",x->mat[j][i]);    
        }
            printf("\n"); 
    }
}
int main()
{
   matrix m1;
   enter_matrix(&m1);
   print_matrix(&m1);

   transpose_matrix(&m1);
   
    return 0;
}