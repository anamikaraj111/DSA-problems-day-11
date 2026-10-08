//first non-repeating character in a string
#include<iostream>
using namespace std;
char nonRep(string str){
    int n= str.length();
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<n;j++){
            if(i!=j && str[i]==str[j]){
                found = true;
                break;
            }
        }
        if(!found){
            return str[i];
        }
    }
    return '\0';
}
int main(){
    string str="racecar";
    cout<<nonRep(str)<<endl;
}