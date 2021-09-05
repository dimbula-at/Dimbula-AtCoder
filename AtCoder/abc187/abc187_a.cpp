#include<iostream>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;

  if(a/100+a%100/10+a%10 > b/100+b%100/10+b%10){
    cout << a/100+a%100/10+a%10 << "\n";
  }else{
    cout << b/100+(b%100)/10+b%10 << "\n";
  }

  return 0;
}
