class Solution(object):
    def search(self, nums, target):
        #Binary search
        left = 0
        right = len(nums) - 1
        while left <= right:
            # (We use // for integer division so we don't get decimals)
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            elif target > nums[mid]:
                left = mid + 1
            else:
                right = mid - 1
        return -1