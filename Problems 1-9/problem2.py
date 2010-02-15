def fib(limit = 4000000):
	"""Returns the cumulative sum of all the even Fibonacci numbers up to a given limit"""
	a, b, s = 1, 0, 0
	while s < limit:
		a, b = a+b, a
		if a % 2 == 0:
			s += a
	
	return s