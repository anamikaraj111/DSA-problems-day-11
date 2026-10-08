//reverse a string
#include<iostream>
using namespace std;
string reverse(string str){
    int s=0;
    int e= str.length()-1;
    while(s<e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}

int main(){
    string str="anamika";
    cout<<reverse(str)<<endl;
}