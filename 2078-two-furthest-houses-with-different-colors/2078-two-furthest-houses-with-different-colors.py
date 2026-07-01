class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        max_diff=[]
        for i in range(len(colors)):
            for j in range(i, len(colors)):
                if colors[i]!=colors[j]:
                    max_diff.append(j-i)
        
        return max(max_diff)
