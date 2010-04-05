def find_factors(n = 100):
	"""Produce a set of all the prime factors of a given integer"""
	return [i for i in xrange(1, n//2 + 1) if not n % i] + [n]

def count_factors(n = 100):
	"""Count the number of prime factors of a given integer"""
	return len(find_factors(n))

def find_triangle_number_with_divisors(target = 500):
	n = target
	last_factors = count_factors(n - 1)

	while 1:
		factors = count_factors(n)

		if factors * last_factors - max(factors, last_factors) >= target:
			print "Trying %d * %d / 2" % (n - 1, n)
			triangle_factors = count_factors(n * (n - 1) / 2)

			if triangle_factors <= target:
				print "only %d factors, continuing..." % triangle_factors
				n += 1
				continue

			#We know that all Triangle Numbers fit the equation n * (n - 1) / 2
			return n * (n - 1) / 2

		last_factors = factors
		n += 1

if __name__ == "__main__":
	target = 500
	print "The first triangle number with at least %d divisors is %d" % (target, find_triangle_number_with_divisors(target))
