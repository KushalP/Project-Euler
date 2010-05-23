from math import factorial

if __name__ == "__main__":
	side_length = 20
	print "%s paths when side length is %s." % (factorial(side_length * 2) / factorial(side_length)**2, side_length) 
