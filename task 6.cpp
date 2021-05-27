
#include<stdio.h>
#include<stdlib.h>

 
int main() {
    int i, j, rows;
    int n = 1;
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
         printf("\n\n\n");
 
    for (i = 1; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ",n);
            n = !n;
        }
        n = i % 2;
        printf("\n");
    }
    return(0);
}

