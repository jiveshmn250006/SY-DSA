// Name: Jivesh Manekar
// Roll no: SEA05
// Right-angle triangle with numbers

#include<stdio.h>
void main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf ("%d ", j);
        }
        printf("\n");
    }
}






// Name: Jivesh Manekar
// Roll no: SEA05
// Diamond shape with numbers

#include<stdio.h>
void main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = n-1; j >= i; j--){
            printf(" ");
        }
        for(int j = i; j > 0; j--){
            printf("%d ", i);
        }
        printf("\n");
    }
    for(int i = n-1; i > 0; i--){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}









// Name: Jivesh Manekar
// Roll no: SEA05
// Pyramid with asterisks

#include<stdio.h>
void main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        for(int j = n-1; j >= i; j--){
            printf(" ");
        }
        for(int j = i; j > 0; j--){
            printf("* ");
        }
        printf("\n");
    }
}







// Name: Jivesh Manekar
// Roll no: SEA05
// Pyramid using alphabets

#include<stdio.h>
void main(){
    int n = 4;
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = n-1; j > i; j--){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%c", ch+j);
        }
        for(int j = i; j > 0; j--){
            printf("%c", ch+j-1);
        }
        printf("\n");
    }
}
