#ifndef LONGEST_COMMON_PREFIX_SOLUTION_H
#define LONGEST_COMMON_PREFIX_SOLUTION_H

#include <iostream>
#include <vector>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string> &strs);

    int getShortestStringLength(std::vector<std::string> &strs);

    bool isConditionOK(std::vector<std::string> &strs);
};


#endif