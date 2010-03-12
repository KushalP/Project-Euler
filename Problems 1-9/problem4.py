def is_palindrome(n):
	if isinstance(n, str):
		# If we've been given a string, check if the reverse is the same
		return n == n[::-1]
	else:
		# We're going to convert our input to a string and reverse it
		return str(n) == str(n)[::-1]

if __name__ == '__main__':
	palindrome = "racecar"
	print "Answer: is %s a palindrome?" % str(palindrome), is_palindrome(palindrome)
