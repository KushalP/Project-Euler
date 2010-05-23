def factorial(n):
	product = 1

	for i in xrange(1, n + 1):
		product *= i
	
	return product

if __name__ == "__main__":
	side_length = 20
	print "%s paths when side length is %s." % (factorial(side_length * 2) / factorial(side_length)**2, side_length) 
