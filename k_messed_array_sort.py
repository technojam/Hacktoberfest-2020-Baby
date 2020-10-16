'''
Given an array of integers arr where each element is at most k places away from its sorted position, code an efficient function sortKMessedArray that sorts arr. For instance, for an input array of size 10 and k = 2, an element belonging to index 6 in the sorted array will be located at either index 4, 5, 6, 7 or 8 in the input array.

Analyze the time and space complexities of your solution.
'''

def sort_k_messed_array(arr, k):
  
  for i in range(1,len(arr)):
    #print(arr, "inside main")
    if arr[i] < arr[i-1]:
      arr = checkPlace(arr, i, k)

  return arr

def checkPlace(arr, index, k):
  #print(index)
  temp1 = index - k
  if temp1 < 0:
    temp1 = 0
  
  for j in range(temp1, index+1):
      if arr[index] < arr[j]:
        temp = arr[index]
        arr[j+1:index+1] = arr[j:index]
        arr[j] = temp
        return arr
    
  
print(sort_k_messed_array([6,1,4,11,2,0,3,7,10,5,8,9], 6))
