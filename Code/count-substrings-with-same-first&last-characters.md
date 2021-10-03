| Name | GitHub | Problem | Language |
| -----| ----- | ----- | ----- |
| Kartikeya Consul | https://github.com/Karssido | Recursive solution to count substrings with same first and last characters | Python |                    
                   


# Python 3 program to count substrings with same first and last characters
def countSubstr(s):
	if len(s) == 0:
		return 0
	charMap, numSubstr = countSubstrHelper(s, 0, len(s)-1)
	return numSubstr

def countSubstrHelper(string, start, end):
	if start >= end: # our base case for the recursion. When we have one character
		return {string[start]: 1}, 1
	mid = (start + end)//2
	mapLeft, numSubstrLeft = countSubstrHelper(
		string, start, mid) # solve the left half
	mapRight, numSubstrRight = countSubstrHelper(
		string, mid+1, end) # solve the right half
	# add number of substrings from left and right
	numSubstrSelf = numSubstrLeft + numSubstrRight

	# multiply the characters from left set with matching characters from right set
	# then add to total number of substrings
	for char in mapLeft:
		if char in mapRight:
			numSubstrSelf += mapLeft[char] * mapRight[char]

	# Add all the key,value pairs from right map to left map
	for char in mapRight:
		if char in mapLeft:
			mapLeft[char] += mapRight[char]
		else:
			mapLeft[char] = mapRight[char]
	# Return the map of character and the sum of substring from left, right and self
	return mapLeft, numSubstrSelf


print(countSubstr("abcab"))

