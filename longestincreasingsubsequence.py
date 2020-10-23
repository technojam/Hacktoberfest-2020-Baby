class Solution(object):
	def lengthOfLIS(self, nums):
		if len(nums)==0:
			return 0

		dp =[1 for _ in range(len(nums))]

		for i in range(len(nums)-1,-1,-1):
			x = nums[i]
			maxi = 0
			for j in range(i+1,len(nums)):
				y = nums[j]
				if y>x:
					maxi = max(maxi,dp[j])
			dp[i]+= maxi

		return max(dp)
