# include <stdio.h>
int main()
{
    int a[10][10]; // Part 1
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n"); //Part 2
    for(int j=0;j<n;j++){ //Part 3
        for(int i=m-1;i>=0;i--){ //Part 3
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }        
}