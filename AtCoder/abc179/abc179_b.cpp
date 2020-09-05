#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {

  int n;
  cin>>n;

  vector<pair<int,int>> d(n);

  for(int i=0;i<n;i++)
    cin>>d[i].first>>d[i].second;


  int cnt=0;
  for(int i=0;i<d.size();i++){
    if(d[i].first == d[i].second)
      cnt+=1;
    else
      cnt=0;
    if(3 <= cnt){
      cout<<"Yes\n";
      return 0;
    }
  }
  cout<<"No\n";

  return 0;
}

