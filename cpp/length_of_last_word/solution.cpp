#include "solution.h"

std::string solution::removeAllFrontBlank(std::string s) {

    while (!s.empty() && s[0] == ' ') {
        s.erase(s.begin());
    }
    return s;
}

std::string solution::removeAllBackBlank(std::string s) {
    /*
     begin(): This method returns an iterator pointing to the first character in the string
     end(): This method returns an iterator pointing one past the end of the string, not the last character in the string. This is known as a "past-the-end" iterator. It does not point to any character, hence you can't use it to access or modify a character.
    */
    while (!s.empty() && s[s.length() - 1] == ' ') {
        s.pop_back();
    }
    return s;
}

int solution::lengthOfLastWord(std::string s) {
    if (s == "") {
        return 0;
    }
    std::string newS = removeAllFrontBlank(s);
    newS = removeAllBackBlank(newS);

    std::vector<std::string> words;
    std::string word = "";
    for (int i = 0; i < newS.length(); i++) {
        if (newS[i] != ' ') {
            word += newS[i];
        } else if (!word.empty()) {
            words.push_back(word);
            word = "";
        }
    }
    //"fly me   to   the moon" moondan sonra boşluk yok o yüzden manuel olarak son kelimeyi ekliyoruz
    if (!word.empty()) {
        words.push_back(word);
    }
    if (words.empty()) {
        return 0;
    }
    return words.at(words.size() - 1).length();
}