class Solution:
    def isPalindrome(self, x: int) -> bool:
        t=x
        n=0
        i=0
        while (x>=1):
            n=n*10+x%10
            x=int(x/10)
            i+=1
        return n==t
            