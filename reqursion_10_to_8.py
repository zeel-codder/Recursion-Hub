def decimal_to_octal(number):
    if number < 0:
        return 'Must be a positive integer'
    elif number == 0:
        return ''
    else:
        return decimal_to_octal(number//8) + str(number%8)
def final_result(number):
    return decimal_to_octal(number) if decimal_to_octal(number)!='' else 0

given_number=int(input("Your number: "))
print("In Octal Number System: " + final_result(given_number))