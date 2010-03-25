def greatest_common_divisor(x, y):
	"""Return the greatest common divisor using Euclid's algorithm"""
	while y:
		x, y = y, x % y
	return x

def least_common_multiple(x, y):
	"""Return the least common multiple of a given pair"""
	return x * y / greatest_common_divisor(x, y)
