#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define REP(i,a,b) for (int i = a; i <= b; i++)

double calc(double L,double n,double p,double r){
  double E=1+r;
  double val=-p*(pow(E,n)-1)/r;
  val+=pow(E,n)*L;
  return val;
}
int main(){
  freopen("output.txt", "r", stdin);
  freopen("data1G.txt", "w", stdout);
  ios::sync_with_stdio(false);cin.tie(0);cout<<fixed;
  cout.precision(7);
  double L,n,p,r,waste,h;
  std::vector<vector<ld> > accv;
  std::vector<ld> tmp(4);
  ll pa=0,na=0;
  REP(i,1,2000){
    // cout <<"hey"<<endl;
    cin >> L >> n >> p >> r >> waste;
    h=calc(L,n,p,r);
    // cout << h <<"  is exp, original:  "<<waste<<" ";
    if(abs(h)<1e-1){
      // cout<<"PASSED";
      tmp[0]=L;
      tmp[1]=n;
      tmp[2]=p;
      tmp[3]=r;
      accv.push_back(tmp);
      pa++;
    }else{
      // cout<<"NOT ACCURATE";
      na++;
    }
    // cout<<endl;
  }

cout<<accv.size()<<endl;
for(auto k:accv){
  for(auto j:k){
    cout<<j<<" ";
  }
  cout<<endl;
}

  return 0;
}
