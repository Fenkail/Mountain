#include <iostream>

using std::cout;
using std::endl;

int i = 1;

int main()
{
char s[] = {'H', 'e', 'l', 'l', 'o'};
auto i = 0;
for(char c : s) {
  i++;
}
cout << i;
}