def fib(limit = 4000000):
	a, b, s = 1, 0, 0
	while s < limit:
		a, b = a+b, a
		if a % 2 == 0:
			s += a
	
	print s