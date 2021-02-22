#include <stdio.h>

int main()
{
    int n = 4,k,j;
    
    for (int i = 1 ; i <= n ; i++)
    {
        j = 1;
        k = 4;
        while ( j <= 8)
        {
            if ( j < k + i && j > k - i )
            {
                printf("#");
            }
            else
                printf(" ");
            j++;
        }
        printf("\n");
    }
}
    