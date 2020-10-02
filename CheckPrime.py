num=int(input("Enter a number: "))
if (num>1):
    for i in range(2,num):
        if (num%i==0):
            print(num,"is not a prime number")
            break
        else:
            if (i==num-1):
                print(num,"is a prime number")
else:
     print(num,"is not a prime number")
