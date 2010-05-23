import datetime

# We need a gobal list
t_set = {}

def sequence(x = 1):
	"""Generate a list of values as part of our nth term \
		sequence, parsing in our value of X to find `
		the highest set of numbers produced."""
	# Generate a list of our values, for even/odd of N
	run = lambda n: 3*n + 1 if n & 0x01 else n/2

	# Only need numbers less than a million for this problem
	while x < 1000000:
		c, a = 0, x

		# We know that the last number in this process is
		# usually 1
		while a != 1:
			if a in t_set:
				c += t_set[a]
				break;

			c, a = c + 1, run(a)

		# We don't need to force this everytime, yield is
		# a better use of our resources
		yield (c, x)

		t_set[x], x = c, x + 1

if __name__ == "__main__":
	start_time = datetime.datetime.now()

	print "Answer:", max(sequence(), key = lambda a: a[0])

	end_time = datetime.datetime.now()

	print "Time:", str(end_time - start_time)
