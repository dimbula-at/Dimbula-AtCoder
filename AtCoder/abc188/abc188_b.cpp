#include<iostream>
#include <vector>
#include<cmath>
using namespace std;

int main(){
  double n;
  cin>>n;

  vector<int> a(n);
  vector<int> b(n);
  double ans =0;



  for(int i=0;i<n;++i){
    cin>>a[i];
  }
  for(int i=0;i<n;++i){
    cin>>b[i];
  }

  for(int i=0;i<n;++i){
    ans += a[i]*b[i];
  }

  if(ans==0){
    cout<<"Yes"<<"\n";
  } else{
    cout<<"No"<<"\n";
  }


  return 0;
}

