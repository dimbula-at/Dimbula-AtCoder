#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;
int main() {

  int64_t a,b,c,d,upper,lower;
  cin>>a>>b>>c>>d;

  if(max(a,c) > min(b,d)){
    cout<<"No\n";
  }else{
    cout<<"Yes\n";
  }

}

