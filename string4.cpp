//reverse words in a string
#include<iostream>
#include<algorithm>
using namespace std;
string reverseWord(string str){
    int n= str.length();
    string ans=" ";
    reverse( str.begin(), str.end());
    for(int i=0;i<n;i++){
        string word=" ";
        while(i<n && str[i] != ' '){
            word= word+ str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length() >0 ){
            ans= ans + " " + word;
        }
    }
    return ans;

}
int main(){
    string str="priya verma";
    cout<<reverseWord(str)<<endl;
}