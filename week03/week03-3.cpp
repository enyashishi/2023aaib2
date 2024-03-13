#include <stdio.h>
int main()
{
    int a=5;
    while(a>0){
        printf("a是%d\n",a);
        a-=1;
    }
    for(int b=5; b>0; b-=1){
        printf("b是%d\n",b);
    }
    for(int i=0; i<5; i+=1){
            printf("i是%d\n",i);
    }
}