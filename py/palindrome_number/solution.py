class Solution:
    def isPalindrome(self, x):
        x = str(x)
        if x[0] != x[-1]:
            return False

        if len(x) < 2:
            return True

        for i in range(len(x) // 2):
            if x[i] != x[-i - 1]:
                return False
        return True


