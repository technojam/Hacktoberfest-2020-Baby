"""
If strings length is less than 2, then we simply return the string. 
In case no palindrom was found we always can return the first symbol of the string. i is the first index and j is the second.
"""

class Solution:
    def longestPalindrome(self, s: str) -> str:
        length = len(s)-1
        if length < 1:
            return s
        index = [0, 1]
        for i in range(length):
            l = index[1]-index[0]+1
            for j in range(i+l, length+2):
                s1 = s[i:j]
                if s1 == s1[::-1] and j-i >= l:
                    index = [i, j]
        return s[index[0]:index[1]]
        
