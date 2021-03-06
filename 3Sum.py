class Solution:
	def threeSum(self, nums):
		ans = []
		nums.sort()
		n = len(nums)
		for i in range(n-2):
			if nums[i] > 0:
				break
			if i > 0 and nums[i]==nums[i-1]:
				continue

			l, r = i+1, n-1
			while l<r:
				summ = nums[i]+nums[l]+nums[r]
				if summ < 0:
					l+=1
				elif summ >0:
					r-=1
				else:
					ans.append([nums[i], nums[l], nums[r]])
					while l<r and nums[l]==nums[l+1]:
						l+=1
					while(l<r and nums[r]==nums[r-1]):
						r-=1

					l+=1
					r-=1

		return ans