#include <iostream>
#include <string>
using namespace std;

int main(){

  char c1,c2,c3;
  cin >>c1>>c2>>c3;

  if (c1!=c2){
    cout << "Lost" << "\n";
  }else {

      if(c1!=c3){
        cout << "Lost" << "\n";
        }
      else{
        cout << "Won" << "\n";
      }

    }

  return 0;
}

