# Python3 code to demonstrate working of  
# Swap Binary substring 
# Using translate() 
  
# initializing string 
test_str = "geeksforgeeks"
  
# printing original string 
print("The original string is : " + test_str) 
  
# Swap Binary substring 
# Using translate() 
temp = str.maketrans("geek", "abcd") 
test_str = test_str.translate(temp) 
  
# printing result  
print("The string after swap : " + str(test_str))  
