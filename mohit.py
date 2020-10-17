# Python3 program to 
# find remainder when 
# all array elements 
# are multiplied. 
  
# Find remainder of arr[0] * arr[1] 
# * .. * arr[n-1] 
def findremainder(arr, lens, n): 
    mul = 1
  
    # find the individual 
    # remainder and  
    # multiple with mul. 
    for i in range(lens):  
        mul = (mul * (arr[i] % n)) % n 
      
    return mul % n 
  
# Driven code 
arr = [ 100, 10, 5, 25, 35, 14 ] 
lens = len(arr) 
n = 11
  
# print the remainder 
# of after multiple 
# all the numbers 
print( findremainder(arr, lens, n)) 
  
# This code is contributed by "rishabh_jain". 
