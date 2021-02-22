#include <stdio.h>

/* Trong C++ co function o trong struct nhung ben C khong co? */



// Ma tran vuong , chua lam ma tran thuong co the bien doi co phep nhan 2 ma tran
// Xai ham tra ve struct (chua xai)

#define MAX 100
typedef struct  
{
    int mat[MAX][MAX];
    int n; // cap cua matrix
    
}matrix;

void enter_matrix(matrix* x)
{
    printf("Nhap cap cua ma tran : ");
    scanf("%d",&x->n);
    for( int i = 0 ; i < x->n ; i++){
        for ( int j = 0 ; j < x->n ; j++){
            printf("mat[%d][%d] : ",i,j);
            scanf("%d",&x->mat[i][j]);
        }
    }
}
void print_matrix(matrix* x)
{

    for( int i = 0 ; i < x->n ; i++){
        for ( int j = 0 ; j < x->n ; j++){
            printf(" %d ",x->mat[i][j]);    
        }
            printf("\n"); 
    }
}
void add_matrix(matrix x,matrix y)
{
    printf("Tong cua 2 ma tran : \n");
    for( int i = 0 ; i < x.n ; i++){
        for ( int j = 0 ; j < x.n ; j++){
            x.mat[i][j]+=y.mat[i][j];
            printf(" %d ",x.mat[i][j]);    
        }
            printf("\n");
    }
}
void subtr_matrix(matrix x,matrix y)
{
    printf("Tong cua 2 ma tran : \n");
    for( int i = 0 ; i < x.n ; i++){
        for ( int j = 0 ; j < x.n ; j++){
            x.mat[i][j]-=y.mat[i][j];
            printf(" %d ",x.mat[i][j]);    
        }
            printf("\n");
    }
}

void mulp_matrix(matrix x,matrix y)
{
    printf("Tich cua 2 ma tran : \n");
     for( int i = 0 ; i < x.n ; i++){
         for ( int j = 0 ; j < x.n ; j++){
             x.mat[i][j]*=y.mat[j][i];
             printf(" %d ",x.mat[i][j]);
         }
         printf("\n");
     }
}

int main()
{
    matrix m1,m2;
    enter_matrix(&m1);
    print_matrix(&m1);

    enter_matrix(&m2);
    print_matrix(&m2);

    add_matrix(m1,m2);

    mulp_matrix(m1,m2);
    


    return 0;
}