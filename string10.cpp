//finding length of string without using .length and .size
#include<iostream>
using namespace std;
int findLength(string str){
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    string str= "anamika raj";
    cout<<findLength(str)<<endl;
}