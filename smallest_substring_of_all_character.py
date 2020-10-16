''' 
Problem Statement:
Given an array of unique characters arr and a string str, Implement a function getShortestUniqueSubstring that finds the smallest substring of str containing all the characters in arr. Return "" (empty string) if such a substring doesn’t exist.

Come up with an asymptotically optimal solution and analyze the time and space complexities.
'''


def get_shortest_unique_substring(arr, string):
  l = len(arr)
  if l == 0:
    return ""
  if len(string) == 1:
    flag = 1
    for i in arr:
      if i not in string:
        flag = 0
    if flag:
      return string
  for i in range(l,len(string)+1):
    for j in range(len(string)-i+1):
      flag = 1
      #print(string[j:j+i])
      for k in arr:
        #print(k)
        if k not in string[j:j+i]:
          #print(k, flag)
          #print(flag, 'in if')
          flag = 0
      if flag:
        return string[j:j+i]
  return ''
# "xyzyzyzyx" 9 - 3
# O(n^2)
# O(N+M)

print(get_shortest_unique_substring(['x','y','z'], "xyyzyzyx"))
