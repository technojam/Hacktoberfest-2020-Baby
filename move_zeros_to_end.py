def moveZerosToEnd(arr):
  count = 0
  for i in range(len(arr)): #0 
    if arr[i] == 0:
      count += 1
    else:
      arr[i-count] = arr[i]
  
  for i in range(count):
    arr[len(arr) - i - 1] = 0
  
  return arr
  
arr = [1, 10, 0, 2, 8, 3, 0, 0, 6, 4, 0, 5, 7, 0]
print(moveZerosToEnd(arr))
