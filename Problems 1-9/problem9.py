def is_pythagorean_triplet(a = 3, b = 4, product = 12):
	return (a**2 + b**2 - (product - a - b)**2 == 0)

def find_pythagorean_triplet(n = 1000):
	for a in xrange(1, n):
		for b in xrange(1, n):
			if is_pythagorean_triplet(a, b, n):
				c = n - a - b
				return [a, b, c]

if __name__ == "__main__":
	triplet_product = 1000
	triplet_list = find_pythagorean_triplet(triplet_product)
	product = reduce(lambda y,x: x*y, triplet_list)
	print "The product of the Pythagorean triplet with sum %d is %d" % (triplet_product, product)
