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

def find_nth_prime(n = 10001):
	upper_limit = n + 1
	primes = []

	while len(primes) < n:
		primes = sieve_of_eratosthenes(upper_limit)
		upper_limit *= 2
	
	return primes[n-1]


if __name__ == "__main__":
	print "The 10001st prime number is:", find_nth_prime()
