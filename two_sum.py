"""
Given an array of integers and a target value.
Find two elements from array that sum to the target value.
If more than two solutions exist, then return any one of them.
If no solution exits return -1.
"""

def find_elements(arr, target):
    """
    This program solves the problem in O(n).
    We will use set(hash) here.

    Input: array of integers
            target
    Output: first_element second_element

    Example:
    Input0: [5, 2, 7, 6, 3, 13]
            11
    Output0: [5, 6]

    Input1: [5, 2, 7, 6, 3, 13]
            30
    Output1: [-1]
    """
  
    set_num = set()
    
    for a in arr:
      b = target - a
      
      if b in set_num:
        return [b, a]
      else:
        set_num.add(a)
    return [-1]
    
arr = [5, 2, 7, 6, 3, 13]
target = 11
print(find_elements(arr, target))
  
