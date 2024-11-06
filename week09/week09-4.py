class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        c = [0,0]
        for i in bills:
            if i==5:
                c[0]+=1
            if i==10:
                c[1]+=1
                c[0]-=1
            if i==20:
                if c[1]>=1:
                    c[1]-=1
                    c[0]-=1
                else:
                    c[0] -=3
            if c[0]<0 or c[1]<0:
                return False
        return True