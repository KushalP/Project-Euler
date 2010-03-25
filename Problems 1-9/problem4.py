def is_palindrome(n):
	if isinstance(n, str):
		# If we've been given a string, check if the reverse is the same
		return (n == n[::-1])
	else:
		# We're going to convert our input to a string and reverse it
		return (str(n) == str(n)[::-1])

def find_largest_prime_number(upper_limit = 1000):
	"""Find the largest palindrome made from the product of two 3-digit numbers"""
	max_palindrome = 0

	for x in xrange(0, upper_limit):
		for y in xrange(0, upper_limit):
			if (x * y) > max_palindrome and is_palindrome(x * y):
				max_palindrome = x * y
	
	print "The largest palindrome product of numbers under %d is %d\n", (upper_limit, max_palindrome)
	
	return max_palindrome

if __name__ == '__main__':
	find_largest_prime_number()
