def count_letters_in_words(upper_bound = 1000):
	"""How many letters would be needed to write all the \
		numbers in words from 1 to upper_bound?"""
	digits = {
		1: 3,
		2: 3,
		3: 5,
		4: 4,
		5: 4,
		6: 3,
		7: 5,
		8: 5,
		9: 4,
		0: 0
	}

	unique_numbers = {
		10: 3,
		11: 6,
		12: 6,
		13: 8,
		15: 7,
		18: 8,
		1000: 11
	}
	
	tens_modifiers = {
		10: 4,
		20: 6,
		30: 6,
		40: 5,
		50: 5,
		60: 5,
		70: 7,
		80: 6,
		90: 6,
		0: 0
	}

if __name__ == "__main__":
	print "No method yet"
