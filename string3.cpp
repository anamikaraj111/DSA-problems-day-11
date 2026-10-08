// remove all occurences
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string removeOccurences(string str, string part)
{
    while (str.length() > 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}
int main()
{
    string str = "bacbsaab";
    string part = "ab";
    cout << removeOccurences(str, part) << endl;
}