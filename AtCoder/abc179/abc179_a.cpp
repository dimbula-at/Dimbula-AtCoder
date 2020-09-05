#include <iostream>
using namespace std;

int main() {

  string s;
  cin >> s;

  if(s[s.size()-1]  == 's'){
  // 条件分岐　どう設定したらいいものか…
    std::cout << s << "es" << "\n";
   }else{
      std::cout << s << "s" << "\n";
  }

  return 0;
}
