#include <iostream>
#include <string>
using namespace std;
bool is_isogram(std::string str) {
    for(int i=0;i<str.length();i++){
        if((int(str[i])<=90&&int(str[i])>=65)){
            str[i]=char(int(str[i])+32);
            
        }
       
    }
    cout<<str;
    
    char letters[str.length()];
    for(int i=0;i<str.length();i++){
        for(int l=0;l<str.length();l++){
            if(str[i]==letters[l]){
                return false;
            }
        }
        letters[i]=str[i];
    }
    return true;
  
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    cout<<is_isogram("alda");

    return 0;
}
