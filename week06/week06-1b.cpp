#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<10;i++){ ///左手i
        for(int j=1;j<=n;j++){ ///右手j
            printf("*"); ///全部印星星
        }
        printf("i;%d\n",i); ///第i樓
    }
}