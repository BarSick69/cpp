// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
string to_camel_case(string text) {
  int length=text.length();
  for (int i=0;i<length-1;i++){
    if((text[i]=='-'||text[i]=='_')){
      if(int(text[i+1])<=122 && int(text[i+1])>=97){
        text[i]=char(int(text[i+1])-32);
      }
    }
  }
  return text;
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    cout<<to_camel_case("a-a_s_sf_g_as-ag");

    return 0;
}
