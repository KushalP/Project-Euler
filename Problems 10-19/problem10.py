from problem7 import sieve_of_eratosthenes

def sum_of_primes_below(n = 2000000):
	sum_of_primes = sum(sieve_of_eratosthenes(n))
	return sum_of_primes

if __name__ == "__main__":
	target = 2000000
	print "The sum of all primes less than %d is %d" % (target, sum_of_primes_below(target))
