//remove spaces from string
#include<iostream>
#include<string>
using namespace std;

string removeSpaces(string str){
    string result = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] != ' '){
            result = result + str[i];
        }
    }
    return result;
}

int main(){
    string str = "anamika raj";
    cout << removeSpaces(str) << endl;
    return 0;
}