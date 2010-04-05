def find_factors(n = 100):
	"""Produce a set of all the prime factors of a given integer"""
	return [i for i in xrange(1, n//2 + 1) if not n % i] + [n]

def count_factors(n = 100):
	"""Count the number of prime factors of a given integer"""
	return len(find_factors(n))

if __name__ == "__main__":
	target = 500
	print "The integer %d has %d prime factors" % (target, count_factors(target))
