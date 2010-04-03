def sum_of_squares(n = 10):
	sum = 0

	for value in xrange(1, n+1):
		sum += value**2
	
	return sum

def square_of_sums(n = 10):
	square = 0

	for value in xrange(1, n+1):
		square += value
	
	return square**2

def find_difference():
	print "The sum of squares is:", sum_of_squares(100)
	print "The square of sums is:", square_of_sums(100)
	print "The difference between the above is:", square_of_sums(100) - sum_of_squares(100)

if __name__ == '__main__':
	find_difference()
