class Solution:
	def subtractProductAndSum(self, n: int) -> int:
		product, total = 1 , 0
		for i in str(n):
			product *= int(i)
			total += int(i)

		return product-total