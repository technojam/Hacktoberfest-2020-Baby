def decimal_to_binary():
    #input number
    n=input("Enter a positive integer:")
    #check if input is an integer
    try:
        num=int(n)
        #convert to binary number
        print("Binary Equivalent of",num,"=",bin(num).replace("0b",""))
    #else invalid input i.e. input was not an integer
    except:
        print("Invalid input")
decimal_to_binary()
