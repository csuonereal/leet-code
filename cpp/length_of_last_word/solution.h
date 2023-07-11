#ifndef LENGTH_OF_LAST_WORD_SOLUTION_H
#define LENGTH_OF_LAST_WORD_SOLUTION_H

#include <iostream>

class solution {
public:
    int lengthOfLastWord(std::string s);

private:
    std::string removeAllFrontBlank(std::string s);

    std::string removeAllBackBlank(std::string s);
};


#endif //LENGTH_OF_LAST_WORD_SOLUTION_H
