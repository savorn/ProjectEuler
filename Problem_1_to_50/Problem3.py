#!/usr/bin/env python3

# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

def primefactor(): 
	i = 2
	j = 600851475143
	while i < j:
		if j % i == 0:
			j = j / i
		i = i + 1
	print(j)

primefactor()
