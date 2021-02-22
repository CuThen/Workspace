#include <stdio.h>
#include <stdbool.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top; 
}stack;

bool isFull(stack x){
     if (x.top == MAX)
         return true;
     else
         return false;
}

bool isEmpty(stack x){
     if ( x.top == -1)
         return true;
     else 
         return false;
}

void Push(stack* x,int input){
    if ( isFull(*x) == true ) 
         printf("\nStack is full.Error!!");
     else
         x->top++;
         x->data[x->top] = input;
}

void Pop(stack* x,int output){
    if ( isEmpty(*x) == true)
         printf("\nStack is empty.Error!!");
    else
        x->data[x->top] = output;
        x->top--;
}
int Top(stack x){
    return x.data[x.top];
}
 
int Size(stack x){
    return x.top + 1;
}

int main()
{
    stack stack1;
    return 0;
}



/*
Push: Thêm một phần tử vào đỉnh của ngăn xếp, số phần tử của ngăn xếp tăng lên 1.
Pop: Xóa bỏ phần tử đầu tiên ở đỉnh của ngăn xếp, số phần tử của ngăn xếp giảm đi 1.
Top: Lấy giá trị của phần tử đầu tiên ở đỉnh của ngăn xếp, số phần tử của ngăn xếp không thay đổi.
IsEmpty: Kiểm tra ngăn xếp trống hay không. Ngăn xếp trống là ngăn xếp không có phần tử nào.
IsFull: Kiểm tra ngăn xếp đã đầy hay chưa. Thao tác này không phải lúc nào cũng có.
Size: Lấy số lượng phần tử stack đang có.
*/