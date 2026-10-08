//convert string into uppercase/lowercase

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str = "Hello world";

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Uppercase: " << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "Lowercase: " << str << endl;

    return 0;
}