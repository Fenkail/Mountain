#include <iostream>
#include <string>
#include <vector>
#include "helper.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> word1{"hello", "world", "welcome", "cpp"};
    PRINT(word1);

    word1.erase(word1.end() - 1);
    PRINT(word1);

    word1.push_back("c++");
    PRINT(word1);

    word1.insert(word1.begin(), "~~");
    PRINT(word1);

    vector <string> word4(3,"xxx");
    PRINT(word4);

    word4.swap(word1);
    PRINT(word1);
    PRINT(word4);


}