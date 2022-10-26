def mathematical_dependence(n):
    if n < 1:
        return 'Imposible to calculate value, given number must be a positive integer'
    elif n == 1:
        return 1/(1+(1/2))
    else: 
        return 1/(n+mathematical_dependence(n-1))

given_number=int(input("Your number: "))
print("Given mathematical dependence : ", end="")
print(mathematical_dependence(given_number))