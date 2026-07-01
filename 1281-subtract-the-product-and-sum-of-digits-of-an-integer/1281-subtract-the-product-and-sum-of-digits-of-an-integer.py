class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        
        
        pro=1
        s=0
        i=1        
        while n>0:
            pro=pro*(n%10)
            s=s+(n%10)
            i=i+1
            n=int(n/10)
        return (pro-s)