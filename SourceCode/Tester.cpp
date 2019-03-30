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
  // freopen("data1G.txt", "r", stdin);
  std::ifstream in("data1G.txt");
  ios::sync_with_stdio(false);cin.tie(0);cout<<fixed;
  cout.precision(7);
  ll linecountfile,cor=0;
  ld L,n,p,r;
  ld Lsr,nsr,psr,rsr;
  ll corL=0,corn=0,corp=0,corr=0;
  ld Eps=1e-5;
  in >> linecountfile;
  ll lines=linecountfile;
  REP(i,1,lines*4){
    int op=(i-1)%4;
    in >> L >> n >> p >> r;
    cout<< "\n--\\-----*****-----/--"<<" Test no: "<<i<<"\n"<<endl;
    if(op==0){
      cout << 1 << endl;
      cout << n <<" "<<p<<" "<<r<<" "<<endl;
      cin >> Lsr;
      // cout<<"Lsr: "<<Lsr<<endl;
      ld h=L-Lsr;
      cout<<"Your computation: "<<Lsr<<", errorrate: "<<h;
      if(h<Eps && -h<Eps){
        corL++;
        cout<<" PASSED "<<endl;
      }else{
        cout<<"--\n--!NOT ACCURATE!-!"<<endl;
        cout<<"Expected answer: "<< L <<endl;
      }
    }
    if(op==1){
      cout << 2 << endl;
      cout << L <<" "<<p<<" "<<r<<" "<<endl;
      cin >> nsr;
      ld h=n-nsr;
      cout<<"Your computation: "<<nsr<<", errorrate: "<<h;
      if(h<Eps && -h<Eps){
        corn++;
        cout<<" PASSED "<<endl;
      }else{
        cout<<"--\n--!NOT ACCURATE!-!"<<endl;
        cout<<"Expected answer: "<< n <<endl;
      }
    }
    if(op==2){
      cout << 3 << endl;
      cout << L <<" "<<n<<" "<<r<<" "<<endl;
      cin >> psr;
      ld h=p-psr;
      cout<<"Your computation: "<<psr<<", errorrate: "<<h;
      if(h<Eps && -h<Eps){
        corp++;
        cout<<" PASSED "<<endl;
      }else{
        cout<<"--\n--!NOT ACCURATE!-!"<<endl;
        cout<<"Expected answer: "<< p <<endl;
      }
    }
    if(op==3){
      cout << 4 << endl;
      cout << L <<" "<<n<<" "<<p<<" "<<endl;
      cin >> rsr;
      ld h=r-rsr;
      cout<<"Your computation: "<<rsr<<", errorrate: "<<h;
      if(h<Eps && -h<Eps){
        corr++;
        cout<<" PASSED "<<endl;
      }else{
        cout<<"--\n--!NOT ACCURATE!-!"<<endl;
        cout<<"Expected answer: "<< r <<endl;
      }
    }
  }
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;
  // cout<<"all tests are out of ?/"<<lines<<endl;
  cout<<"correct L:"<<corL<<"\t"<<" correct n:"<<corn<<"\t"<<" correct p:"<<corp<<"\t"<<" correct r:"<<corr<<endl;
  cout<<"total of "<<corL+corn+corp+corr<<"/"<<lines*4<<" correct computations"<<endl;


  return 0;
}
