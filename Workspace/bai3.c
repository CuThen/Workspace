#include <stdio.h>

void enter$(int *money){
    printf("Nhap vao so tien : ");
    scanf("%d",&*money);
}
int count_10$(int *money,int *count){
    if( *money < 10){
       return 0;
    }
    else{
       *count=*count + 1;
       *money=*money - 10;
       return count_10$(money, count);
    } 
}

int lessthan5(int *money,int *count){
    if ( *money == 1){
        *count=*count + 1;
        return 0;
    }
    else if ( *money == 0){
        return 0;
    }
    else{
        *count= *count + 1;
        *money= *money - 2;
        return lessthan5(money,count);
    }
}
void kiemtra(int money)
{
    int count = 0;
   switch (money)
    {
        case 1:
          printf("\nSo tien can la : %d ", ++count);
          break;
        case 2:
          printf("\nSo tien can la : %d ", ++count);
          break;
        case 5:
          printf("\nSo tien can la : %d ", ++count);
          break;
    }
}
int main()	
{
   int money,count = 0;
   enter$(&money);
   kiemtra(money);
    if ( money > 10 ){
        count_10$(&money,&count);
        if(money == 0)
        printf("\nSo tien can la : %d ",count);
        else{
        lessthan5(&money,&count);
        printf("\nSo tien can la : %d ",count);
        }
    }
    else    
    {
        count++;
        money=money - 5;
        lessthan5(&money,&count);
        printf("\nSo tien can la : %d ",count);
    }
	return 0;
}