//valid anagrams
#include<iostream>
#include<algorithm>
using namespace std;
bool isAnagrams(string str1, string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if(str1==str2){
        return true;
    }
    return false;
}
int main(){
    string str1="khushi";
    string str2= "ikhush";
    cout<<isAnagrams(str1, str2)<<endl;
}