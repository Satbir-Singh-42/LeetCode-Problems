class Solution(object):
    def isPalindrome(self, x):
        if x < 0:
            return False
        if x==0:
            return True
        if x%10==0:
            return False

        oriX=x
        rev=0
        while x>0:
            last=x%10
            rev=rev*10+last
            x=x//10
        return rev==oriX