def prime_factors(n = 600851475143):
	"""Finds all of the prime factors of a given number"""
	base = 2
	while base < n:
		if n % base == 0:
			return [base] + prime_factors(n / base)
		base += 1
	return [n]
	

if __name__ == '__main__':
	print "Answer: ", max(prime_factors(600851475143))