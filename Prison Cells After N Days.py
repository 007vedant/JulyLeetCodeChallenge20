class Solution:
    def prisonAfterNDays(self, cells: List[int], N: int) -> List[int]:
        N=(N-1)%14+1
        for i in range(N):
            temp=[]
            temp.append(0)
            for j in range(1,7):
                if cells[j-1]==0 and cells[j+1]==0:
                    temp.append(1)
                elif cells[j-1]==1 and cells[j+1]==1:
                    temp.append(1)
                else:
                    temp.append(0)
            temp.append(0)
            cells=temp
            
        return cells


# repeatition  occurs after every 14 days.