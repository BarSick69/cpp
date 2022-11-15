// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
std::string to_camel_case(std::string text) {
  int length=text.length();
  int new_len=length;
  //go through the string
  for (int i=0;i<length-1;i++){
    //check for _ and -
    if((text[i]=='-'||text[i]=='_')){
      //check if the char after the symbol is a lowercase char
      if(int(text[i+1])<=122 && int(text[i+1])>=97){
        //change the symbol to uppercase char
        text[i]=char(int(text[i+1])-32);
        //move the text to the left
        for(int k=i+1;k<new_len+k-(k+1);k++){
            text[k]=text[k+1];
        }
        //remove the last char
        text.pop_back();
        //change the len of the string because you have removed a character
        new_len-=1;
      }
      //otherwise check if the char after the symbol is a uppercase char
       else if(int(text[i+1])<=90&&int(text[i+1])>=65){
        //Same process as from line 14-22
        text[i]=text[i+1];
        for(int k=i+1;k<new_len+k-(k+1);k++){
            text[k]=text[k+1];
        }
        text.pop_back();
        new_len-=1;
      }
    }
    }
  return text;
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    cout<<to_camel_case("A_Cat_Is-pippi");

    return 0;
}
