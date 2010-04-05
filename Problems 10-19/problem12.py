def find_factors(n = 100):
	return [i for i in xrange(1, n**0.5 + 1) if not n % i] + [n]

if __name__ == "__main__":
	for i in xrange(1, 50):
		print "The number of factors for %d is:" % (i), find_factors(i)
