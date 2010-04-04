def is_pythagorean_triplet(a = 3, b = 4, product = 12):
	return (a**2 + b**2 - (product - a - b)**2 == 0)

def find_pythagorean_triplet_product(n = 1000):
	return is_pythagorean_triplet()

if __name__ == "__main__":
	print find_pythagorean_triplet_product()
