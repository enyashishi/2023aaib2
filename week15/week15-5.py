class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        ans = 0
        N = len(s)
        j = 0
        for i in range(N): # 頭是i
            # print(s[i],t[i])
            maxCost -= abs(ord(s[i]) - ord(t[i])) # 毛毛蟲的頭i 吃葉子
            while maxCost < 0: # 預算不夠 變負數
                maxCost += abs(ord(s[j]) - ord(t[j])) # 尾巴j 大便出來
                j += 1 # 尾巴 往右縮
            ans = max(ans,i-j+1) # 頭i - 尾j 就是毛毛蟲的長度
        return ans