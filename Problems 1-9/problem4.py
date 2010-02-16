def is_palindrome(n):
	if isinstance(n, str):
		#If we've been given a string, check if the reverse is the same
		return str(n) == str(n)[::-1]

if __name__ == '__main__':
	palindrome = "racecar"
	print "Answer: is %s a palindrome?" % palindrome, is_palindrome(palindrome)