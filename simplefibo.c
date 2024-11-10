#include <stdio.h>



void fibonaci(int n){
    int a = 0, b = 1, next;

    for(int i = 1; i<n; i++){

        printf("%d",a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
} 


int main(){
    int n;
    printf("Enter the number to generate a fibonacci series: ");
    scanf("%d", &n);


    fibonaci(n);
    return 0;

}