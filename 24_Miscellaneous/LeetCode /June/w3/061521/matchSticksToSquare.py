## treat the matchsticks as an array. Can we split the array into 4 equal halves?

## Every matchsticks can belog to either of the 4 sides. We don't know which one. May be try out all options

## For every matchstick, we have to try out each of the 4 options i.e. which side it can belong to. We can make use of recursion for this.

## We don't really need to keep track of which matchsticks belong to a particular side during recursion. We just need to keep track of the length of each of the 4 sides.

## When all matchsticks have been used we simply need to see the length of all 4 sides. If they're equal, we have a square on our hands!
class Solution:
	def makesquare(self, matchsticks: List[int]) -> bool:
		N = len(matchsticks)
		per = sum(matchsticks)
		if per % 4 != 0:
			return False

		else:
			side = per//4

		matchsticks.sort(reverse=True)
		def func(a, b, c, d, k):
			if k ==  N:
				if a == b == c == d:
					return True
				return False
			m = matchsticks[k]

			if a + m <= side and func(a+m, b, c, d, k+1):
				return True

			if b + m <= side and func(a, b+m, c, d, k+1):
				return True

			if c + m <= side and func(a, b, c+m, d, k+1):
				return True

			if d + m <= side and func(a, b, c, d+m, k+1):
				return True

		return func(0,0,0,0,0)

