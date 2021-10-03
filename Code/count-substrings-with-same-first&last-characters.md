| Name | GitHub | Problem | Description | Language |
| :-----: | :-----: | :-----: | :-----: | :-----: |
| Kartikeya Consul | https://github.com/Karssido | Count substrings with same first and last characters | If we carefully observe then we can realize that the answer just depends on frequencies of characters in the original string. For example in string abcab, frequency of ‘a’ is 2, and substrings contributing to answering are a, abca and a respectively, a total of 3, which is calculated by (frequency of ‘a’+1)C2. | Python |                    
                   


## Python 3 program to count substrings with same first and last characters
```python 
# Most efficient Python program to count all
# substrings with same first and last characters.

MAX_CHAR = 26; # assuming lower case only

def countSubstringWithEqualEnds(s):
	result = 0;
	n = len(s);

	# Calculating frequency of each character
	# in the string.
	count = [0]*MAX_CHAR;
	for i in range(n):
		count[ord(s[i])-ord('a')]+=1;

	# Computing result using counts
	for i in range(MAX_CHAR):
		result += (count[i]*(count[i]+1)/2);

	return result;

# Driver code
s = "abcab";
print(countSubstringWithEqualEnds(s));
```
### The above code has time complexity of O(n) and requires O(1) extra space.

