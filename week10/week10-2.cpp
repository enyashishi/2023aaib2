///a大的 b中的 c小的a%b
#include <stdio.h>
int gcd(int a, int b){
    if(a==0)return b;
    if(b==0)return a; ///有些人會省略這行
    return gcd(b,a%b); ///老二升級變老大,老三變老大
}
int main()
{
    printf("請輸入 a b 兩個數字: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("最大公因數是: %d\n",gcd(a,b));
}