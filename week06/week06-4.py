class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        ans = 0
        tail = 0
        M = max(nums)
        MN = 0
        for head in range(len(nums)):
            if nums[head]==M:MN +=1
            while MN>=k:
                if nums[tail]==M: MN -=1
                tail +=1
            ans += tail
        return ans