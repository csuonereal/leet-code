#include <iostream>
#include "solution.h"

int main() {
    solution *s = new solution();

    std::cout << s->lengthOfLastWord("   fly me   to   the moon  ") << std::endl;
}
