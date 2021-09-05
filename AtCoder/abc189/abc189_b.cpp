#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,x;cin>>n>>x;

  int al=0;
  for(int i=0;i<n;i++){
    int v,p;cin>>v>>p;
    al += v*p;
 
    if(x < double(al)/100.0){
      cout<<i+1<<"\n";
      return 0;
    }
  }
  
  cout<<"-1\n";
}
