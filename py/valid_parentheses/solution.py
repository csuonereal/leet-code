class Solution:
    def isValid(self, s):
        dict = {'(': ')', '[': ']', '{': '}'}
        stack = []
        if s[0] in dict.values():
            return False
        for paranthese in s:
            if paranthese in dict.keys():
                stack.append(paranthese)
            elif paranthese in dict.values():
                if len(stack) == 0:
                    return False
                if dict[stack.pop()] != paranthese:
                    return False
        return stack == []  # stack boş olmalı
