#include <stdio.h>
int a[100][100];
int arr(int r, int c){
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf ("Phần tử a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void matrix(int r, int c, int a[100][100]){
    for (int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r, c;
    printf("Mời bạn nhập số hàng: ");
    scanf("%d", &r);
    printf("Mời bạn nhập số cột: ");
    scanf("%d", &c);
    arr(r,c);
    matrix(r,c,a);
    return 0;
}
