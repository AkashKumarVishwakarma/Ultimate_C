#include <stdio.h>

int sum(int,int);

int main() {
    int a=6, b=10;
    int ans = sum(a,b);
    printf("sum of a & b is %d\n",ans);

    int a1 = 23, b1 = 44;
    int ans1 = sum(a1,b1);
    printf("sum of a1 & b1 is %d\n",ans1);


    // sum(12,23);
    
    return 0;
}
int sum(int x, int y){
    // printf("The sum is %d\n",x+y);
    return x+y;

}