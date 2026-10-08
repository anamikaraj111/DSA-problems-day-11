//check if one string is rotation of another
#include<iostream>
#include<algorithm>
using namespace std;
bool checkRotation(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2){
        return true;
    }
    return false;
    
}
int main(){
    string s1="anamika";
    string s2= "anakima";
    cout<<checkRotation(s1, s2)<<endl;
}