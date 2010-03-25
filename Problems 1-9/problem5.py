def greatest_common_divisor(x, y):
	"""Return the greatest common divisor using Euclid's algorithm"""
	while y:
		x, y = y, x % y
	return x

def least_common_multiple(x, y):
	"""Return the least common multiple of a given pair"""
	return x * y / greatest_common_divisor(x, y)

def smallest_evenly_divisible(upper_limit = 20):
	"""What is the smallest number that is evenly divisble by all of the numbers from 1 to 20?"""
	result = 1

	for i in range(2, upper_limit + 1):
		result = least_common_multiple(result, i)
	
	print "The smallest number evenly divisible by all numbers from 1 to %d is %d\n" %\
		(upper_limit, result)

	return result

if __name__ == '__main__':
        smallest_evenly_divisible()
