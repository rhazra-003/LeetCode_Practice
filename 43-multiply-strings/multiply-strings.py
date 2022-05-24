class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        n, m = len(num1), len(num2)
        if not n or not m:
            return "0"
        
        result = [0] * (n + m)
        
        for i in reversed(range(n)):
            for j in reversed(range(m)):
                current = int(result[i + j + 1]) + int(num1[i]) * int(num2[j])
                result[i + j + 1] = current % 10
                result[i + j] += current // 10
        
        for i, c in enumerate(result):
            if c != 0:
                return "".join(map(str, result[i:]))
        
        return "0"   
