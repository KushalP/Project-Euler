def natural_fizzbuzz(limit = 1000):
	s = 0
	
	for i in range(1, limit):
		if i % 3 == 0 or i % 5 == 0:
			s += i
	
	print s