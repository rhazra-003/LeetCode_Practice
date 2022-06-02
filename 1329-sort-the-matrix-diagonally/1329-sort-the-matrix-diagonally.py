class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        dict_ = defaultdict(list)
        m,n = len(mat),len(mat[0])
        
        for i,j in product(range(m), range(n)):
            dict_[i-j].append(mat[i][j])
                    
        for i in range(max(m,n)):
            dict_[i].sort()
            dict_[-i].sort()
                        
        for i,j in product(range(m), range(n)):
            mat[i][j] = dict_[i-j][min(i,j)]
            
        return mat