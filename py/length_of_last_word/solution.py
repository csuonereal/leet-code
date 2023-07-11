class Solution:
    def lengthOfLastWord(self, s):
        lastStringLength = 0
        s = s.strip()  # removing spaces from the beginning and end of the string
        s = s.split(" ")  # splitting the string into a list of words
        lastStringLength = len(s[-1])  # getting the last word from the list
        return lastStringLength
