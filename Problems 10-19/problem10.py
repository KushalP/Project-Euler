def sieve_of_eratosthenes(n = 10001):
	n = n + 1
	sieve = range(n)
	sieve[:2] = [0, 0]

	for i in xrange(2, int(n**0.5) + 1):
		if sieve[i]:
			for j in xrange(i**2, n, i):
				sieve[j] = 0

	#filter out the values that aren't set to zero
	return [p for p in sieve if p]

def sum_of_primes_below(n = 2000000):
	sum_of_primes = sum(sieve_of_eratosthenes(n))
	return sum_of_primes

if __name__ == "__main__":
	target = 2000000
	print "The sum of all primes less than %d is %d" % (target, sum_of_primes_below(target))
