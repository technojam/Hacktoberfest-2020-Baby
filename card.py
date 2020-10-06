def luhn(card_number):
    def digits_of(n):
        return [int(d) for d in str(n)]
    digits = digits_of(card_number)
    print(digits)
    odd_digits = digits[-1::-2]
    print(odd_digits)
    even_digits = digits[-2::-2]
    print(even_digits)
    checksum = 0
    checksum += sum(odd_digits)
    print(checksum)
    print("_________________________________________________________________________________")
    for d in even_digits:
        checksum += sum(digits_of(d*2))
    print(d)
    print("_________________________________________________________________________________")
    print(digits_of(d))
    print("_________________________________________________________________________________")
    print(digits_of(d * 2))
    print("_________________________________________________________________________________")
    print(sum(digits_of(d)))
    print("_________________________________________________________________________________")
    print(sum(digits_of(d*2)))
    print("_________________________________________________________________________________")
    print(checksum)
    print(checksum%10)
    return (checksum % 10)

#A little code to test it out on a number
if (luhn("8830723086640451")):
    print("INVALID")
else:
    print("VALID")
