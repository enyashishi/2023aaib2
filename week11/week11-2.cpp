# include <stdio.h>
int main()
{
    int BOUND = 20000, ans = 0;
    int table[20000] = {}; ///給初始，都補0
    for(int i=2; i<BOUND; i++){
        if(table[i]==0){ ///還留著，沒有被殺掉
            ans ++;
            for(int k=i*i; k<BOUND; k+=i){
                table[k] = -1; ///殺死它的兄弟
            }
        }
    }
    printf("質數有: %d 個\n", ans);
}