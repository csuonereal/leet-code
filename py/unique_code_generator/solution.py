import random
import string

BANNED_WORDS = ["..."]


def loadCodesFromFile(filename):
    with open(filename, 'r') as file:
        return set(line.strip() for line in file)


def generateUniqueCode(existingCodes, bannedWords, length=6):
    symbols = string.ascii_uppercase + string.digits

    while True:
        code = ''.join(random.choice(symbols) for _ in range(length))

        if code not in existingCodes and not any(bannedWord in code for bannedWord in bannedWords):
            return code


def generateNewCodes(*args):
    global BANNED_WORDS
    existingCodes = set()
    for file in args:
        existingCodes.update(loadCodesFromFile(file))
    with open('20million.txt', 'w') as file:
        for _ in range(20_000_000):
            newCode = generateUniqueCode(existingCodes, BANNED_WORDS)
            existingCodes.add(newCode)
            file.write(newCode + '\n')


def compareCodes(*args):
    existingCodes = set()
    totalCodes = 0

    for file, count in args:
        existingCodes.update(loadCodesFromFile(file))
        totalCodes += count

    return len(existingCodes) == totalCodes


def divideCodes():
    with open('20million.txt', 'r') as source, \
            open('6million_1.txt', 'w') as dest1, \
            open('6million_2.txt', 'w') as dest2, \
            open('8million.txt', 'w') as dest3:

        for i, line in enumerate(source):
            if i < 6_000_000:
                dest1.write(line)
            elif i < 12_000_000:
                dest2.write(line)
            else:
                dest3.write(line)

