#include <iostream>
#include<limits>
using namespace std;

int main() {

  int64_t a,b,c,d;
  cin >> a>>b>>c>>d;

  if(b<c or d<a){
    cout << "No" << "\n";
  } else if(b>=c or d>=a){
    cout << "Yes" << "\n";
  }
  cerr<<INT_MAX<<"\n";
  cerr<<INT64_MAX<<"\n";
  return 0;
}

