// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

std::string to_camel_case(std::string text) {
  int length=text.length();
  int new_len=length;
  char temp=' ';
  for (int i=0;i<length-1;i++){
    if((text[i]=='-'||text[i]=='_')){
      if(int(text[i+1])<=122 && int(text[i+1])>=97){
        text[i]=char(int(text[i+1])-32);
        cout<<text<<endl;
        for(int k=i+1;k<new_len+k-(k+1);k++){
            text[k]=text[k+1];
        }
        text.pop_back();
        cout<<"Text dupa for:"<<text<<endl;
        
        new_len-=1;
      }
       else if(int(text[i+1])<=90&&int(text[i+1])>=65){
        cout<<"HI";
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
