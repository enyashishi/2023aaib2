# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int space=n-i;
        int k=1;
        while(k<=n){
            if(k<=space)printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}