#include <stdio.h>
void myPrint(int a[10]){
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0}; ///10個數，9個間隔
    myPrint(a);

    for(int i=0;i<9;i++){ ///從左到右巡一遍，9個間隔
        if(a[i]>a[i+1]){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    myPrint(a);
}
