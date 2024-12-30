#include <stdio.h>
int maxdivide(int a, int b){
    int max;
    for (int i=0; i<a+b;i++){
        if (a%i==0 && b%i==0){
            max = i;
        }
    }
    return max;
}
int main(){
    int a, b;
    printf("Mời bạn nhập 2 số nguyên: ");
    scanf("%d %d", &a, &b);
    printf("Ước chung lớn nhất của %d và %d là: %d", a, b, maxdivide(a,b));
    return 0;

}