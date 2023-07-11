#include "Solution.h"

bool Solution::isConditionOK(std::vector<std::string> &strs) {
    bool isNull = false;
    bool isFirstLettersSame = true;


    for (int i = 0; i < strs.size(); i++) {
        if (strs.at(i) == "") {
            isNull = true;
            break;
        }
    }
    char lastFirstLetter = strs.at(0)[0];
    for (int i = 1; i < strs.size(); i++) {
        if (strs.at(i)[0] != lastFirstLetter) {
            isFirstLettersSame = false;
            break;
        }
    }
    if (isNull || !isFirstLettersSame) {
        return false;
    }
    return true;
}

int Solution::getShortestStringLength(std::vector<std::string> &strs) {
    int shortestStringLength = strs.at(0).size();
    for (int i = 0; i < strs.size(); i++) {
        if (strs.at(i).size() < shortestStringLength) {
            shortestStringLength = strs.at(i).size();
        }
    }
    return shortestStringLength;
}

std::string Solution::longestCommonPrefix(std::vector<std::string> &strs) {
    std::string prefix = "";
    int shortestStringLength = getShortestStringLength(strs);

    if (!isConditionOK(strs)) {
        return prefix;
    }
    for (int i = 0; i < shortestStringLength; i++) {
        prefix += strs.at(0)[i];
    }
    for (int i = 1; i < strs.size(); i++) {
        for (int j = 0; j < shortestStringLength; j++) {
            if (prefix[j] != strs.at(i)[j]) {
                prefix.erase(j);
                break;
            }
        }
    }
    return prefix;
}
