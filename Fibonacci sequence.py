#Python program to display the Fibonacci sequence up to nth term
term = int(input("Till how many terms??"))

#first two terms
n1=0
n2=1
count=0

#checking if number of term given is valid
if term <= 0:
   print("Please enter a positive integer")
elif term == 1:
   print("Fibonacci sequence upto",term,":")
   print(n1)
else:
   print("Fibonacci sequence is:")
   while count < term:
       print(n1)
       nth = n1 + n2
       
       #values updation
       n1 = n2
       n2 = nth
       count += 1
   
