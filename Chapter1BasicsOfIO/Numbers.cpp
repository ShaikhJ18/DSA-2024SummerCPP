#include<bits/stdc++.h>
#define M_PI 3.14159265358979323846
//you can also define macros for common functions
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
//shorten code using typedefs
typedef long long ll;
//typedefs can be used for any data type
typedef vector<int> vi;
typedef pair<int,int> pi;



int main(){
  //most commong numbers are int 32 bit numbers
  int a = 4;
  //is you need larger numbers use 64 bit numbers long long
  long long b = 12321312312LL;
  //We denote by x mod m the remainder when x is divided by m. For   example,
  //17 mod 5 = 2, because 17 = 3·5+2.
  int x = 17 % 5;
  cout << x;
  //floating point numbers are the 64bit double and 80bit long double
  //to get specific decimal points in this case 9 use the following
  printf("The value of pi is %.9f\n",M_PI);

  //shoretening code using typedefs
  ll num1 = 123213213213;
  ll num2 = 2123123123123;
  cout << num1*num2;
  

  

  return 0;
}