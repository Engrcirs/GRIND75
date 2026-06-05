class Solution(object):
    def twoSum(self, nums, target):
        # Create an empty dictionary to act as our hash map {number: index}
        num_map = {}

        # enumerate() is a Python function that automatically tracks the index (i)
        # and the actual number (num) as we loop through the list
        for i, num in enumerate(nums):
            complement = target - num

            # The 'in' keyword instantly checks if the complement exists as a key in the dictionary
            if complement in num_map:
                # If found, return a list with the saved index and the current index
                return [num_map[complement], i]

            # If not found, add the current number and its index to the dictionary
            num_map[num] = i

        return []