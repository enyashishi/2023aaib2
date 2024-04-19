# include <stdio.h>
int myFuncA()
{
    int x =200;
    printf("myFuncA裡的x是:%d\n",x);
}
int main()
{
    int x =100;
    printf("main裡的x是:%d\n",x);
    myFuncA();
    printf("main裡的x是:%d\n",x);
}