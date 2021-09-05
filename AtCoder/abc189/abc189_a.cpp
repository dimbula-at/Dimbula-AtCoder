#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;cin>>s;
  if(s[0] == s[1] and s[1] == s[2]){
    cout<<"Won\n";
  }else{
    cout<<"Lost\n";
  }
}

