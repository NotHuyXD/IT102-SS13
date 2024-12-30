#include <stdio.h>
#include <math.h>
void choice1(int r, int c, int a[r][c]){
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("Phần tử a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void choice2(int r, int c, int a[r][c]){
    for (int i=0; i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
}
void choice3(int r, int c, int a[r][c]){
    for (int i=0; i<r;i++){
        for (int j=0;j<c;j++){
            if ((j==0 && (i==0||i==r-1)) || (j==c-1 && (i==0||i==r-1))){
                printf("%d  ", a[i][j]);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

}
void choice4(int r, int c, int a[r][c]){
    for (int i=0; i<r;i++){
        for (int j=0;j<c;j++){
            if (i==0 || i==r-1 || j==0 || j==c-1){
                printf("%d  ", a[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

}
void choice5(int r, int c, int a[r][c]){
    for (int i=0; i<r;i++){
        for (int j=0;j<c;j++){
            if (i==j || i+j==r-1){
                printf("%d  ", a[i][j]);
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

}
void choice6(int r, int c, int a[r][c]){
    for (int i=0; i<r;i++){
        for (int j=0;j<c;j++){
            int check=1;
            if (a[i][j]<2){
                check=0;
            }
            for (int i=2;i<=sqrt(a[i][j]);i++){
                if (a[i][j]%i==0){
                    check=0;
                }
            }
            if (check==1){
                printf("%d  ", a[i][j]);
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }

}
int main(){
    int r, c, choice;
    printf("Mời bạn nhập số hàng: ");
    scanf("%d", &r);
    printf("Mời bạn nhập số cột: ");
    scanf("%d", &c);
    int a[r][c];
    do {
    printf("==========MENU==========\n");
    printf("1.Nhập giá trị các phần tử của mảng\n");
    printf("2.In giá trị các phần tử của mảng ra theo ma trận\n");
    printf("3.In ra các phần tử ở góc theo ma trận\n");
    printf("4.In ra các phần tử nằm trên đường biên theo ma trận\n");
    printf("5.In ra các phần tử nằm trên đường chéo chính và đường chéo phụ theo ma trận\n");
    printf("6.In ra các phần tử là số nguyên tố theo ma trận\n");
    printf("7.Thoát\n");
    printf("Lựa chọn của bạn: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            choice1(r,c,a);
            break;
        case 2:
            choice2(r,c,a);
            break;
        case 3:
            choice3(r,c,a);
            break;
        case 4:
            choice4(r,c,a);
            break;
        case 5:
            choice5(r,c,a);
            break;
        case 6:
            choice6(r,c,a);
            break;
        case 7:
            break;
        default:
            printf("Lựa chọn không hợp lệ\n");
            break;
    }
 } while (choice!=7);
    return 0;
}