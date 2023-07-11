class Solution():
    def longestCommonPrefix(self, strs):
        prefix = ""
        strCount = len(strs)

        if any(str == "" for str in strs) or strCount == 0 or all(str[0] != strs[0][0] for str in strs):
            return prefix

        shortestStr = min(strs, key=len)

        for i in range(0, len(shortestStr)):
            c = strs[0][i]
            if all(str[i] == c for str in strs):
                prefix += c
            else:
                break
        return prefix
