def natural_fizzbuzz(limit = 1000):
	"""Adds together all of the values divisible by 3 or 5 up to a given limit"""
	s = 0
	for i in range(1, limit):
		if i % 3 == 0 or i % 5 == 0:
			s += i
	return s

if __name__ == "__main__":
	print "Answer: ", natural_fizzbuzz(1000)