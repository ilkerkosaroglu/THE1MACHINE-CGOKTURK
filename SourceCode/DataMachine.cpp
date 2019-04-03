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
  // freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false);cin.tie(0);cout<<fixed;
  cout.precision(15);
  srand (time(NULL));
  // ll n=random.randint(1,5);
  ll n,count=0,cor=0;
  double L,p,r,E;
  double Eps=1e-5;
  // cout << n << endl;
  std::vector<vector<double> > Lw;
  std::vector<vector<double> > Lc;
  std::vector<double> tmp(5);
  L=10000.0;
  while(L<100001){
    n=rand() % 50 + 1;
    while(n<421){
      for(int k=1;k<51;k++){
        int chance=rand()%10;
        if(chance<9)continue;
        r=(double)k/1200;
        // cout << r << endl;
        // cout << k << endl;
        count+=1;
        E=1+r;
        // cout << E << endl;
        // cout << power(E,n) << endl;
        p = r*(pow(E,n)*L)/(pow(E,n)-1);
        // ll coef=10000000000000;
        // L=round(L*coef)/coef;
        // p=round(p*coef)/coef;
        // r=round(r*coef)/coef;
        ll h=calc(L,n,p,r);
        if(h<Eps && -h<Eps){
          cor++;
          tmp[0]=L;
          tmp[1]=n;
          tmp[2]=p;
          tmp[3]=r;
          tmp[4]=h;
          Lc.push_back(tmp);
        }else{
          tmp[0]=L;
          tmp[1]=n;
          tmp[2]=p;
          tmp[3]=r;
          tmp[4]=h;
          Lw.push_back(tmp);
        }
      }
      n+=rand()%7 + 1;
    }
    L+=3810.18*(rand()%3+1);
    if(rand()%10<3){
      L=(double)floor(L);
    }else{
      L=(double)round(L*1024)/1024;
    }
  }
  for(auto k:Lc){
      for(auto i:k){
        cout <<i<<" ";
      }
      cout << endl;
  }
  REP(i,1,10){
    cout <<"-------------"<<endl;
  }
  for(auto k:Lw){
    for(auto i:k){
      cout <<i<<" ";
    }
    cout << endl;
  }
  cout << count <<" tests done\n"<<cor<<" correct"<<endl;
  cout << 97631.71875 <<" "<<419<<" "<<2359.53979<<" "<<0.02416<<" ans: "<<calc(97631.71875,419,2359.53979,0.02416)<<endl;
  cout << "97631.7197265625 419.0000000000 3335.7529929638 0.0341666667  "<<calc(97631.7197265625,419.0000000000,3335.7529929638,0.0341666667)<<endl;
  cout << "97631.7197265625 419.0000000000 3335.75299296383 0.03416666667  "<<calc(97631.7197265625,419.0000000000,3335.75299296383,0.03416666667)<<endl;

  return 0;
}
