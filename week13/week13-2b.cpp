# include <string.h>
# include <stdio.h>
int main()
{
    char line[20]; ///長一點比較保險
    scanf("%s", line);
    int N = strlen(line); ///知道字串的長度
    int bad = 0; ///一開始沒有壞掉
    for(int i=0; i<N; i++){ ///逐字母檢查
        if(line[i] != line[N-1-i]) bad=1;
    }
    if(bad==1)printf("NO\n");
    else printf("YES\n");
}