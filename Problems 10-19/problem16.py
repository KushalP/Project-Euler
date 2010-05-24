def sum_digits(n = 1000):
	"""Sum all of the digits the number 2**n"""
	return sum([int(i) for i in str(2**n)])

if __name__ == "__main__":
	print "Answer: ", sum_digits()
