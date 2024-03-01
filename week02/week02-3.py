class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N = len(s)
        one = 0 # s裡面 有幾個1呢?
        for c in s: # 針對字串s的每個字母c
            if c=='1': one+=1 # 如果是'1'的話 one 就+1
        return '1'*(one-1) + '0'*(N-one) + '1'