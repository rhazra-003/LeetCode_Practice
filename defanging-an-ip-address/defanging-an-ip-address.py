class Solution:
    def defangIPaddr(self, address: str) -> str:
        answerString = ""
        for c in address:
            if c == ".":
                answerString += "[.]"
            else:
                answerString += c
        
        return answerString 