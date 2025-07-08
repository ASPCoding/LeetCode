class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        solution = list()
        for num in range(len(nums)):
            for num2 in range(len(nums)):
                if num == num2:
                    pass
                elif nums[num] + nums[num2] == target:
                    solution.append(num)
                    solution.append(num2)
                    return solution