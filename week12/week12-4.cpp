# include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ // Part 1
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){ // Part 2
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){ // Part 3
        for(int j=0;j<n;j++){
            c[i][j] = 0; // Part 4
            for(int k=0;k<n;k++){
                c[i][j] += a[i][k]*b[k][j];
            }
            printf("%3d ",c[i][j]);
        }
        printf("\n");
    }
}