#include<bits/stdc++.h>


using namespace std;


int main(){
  //These Two lines are for competitive programming standards
  //they make the code more efficient
  ios::sync_with_stdio(0);
  cin.tie(0);
  //declare variables a , b ,x
  int a,b;
  string x;
  //read input through cin stream
  cin >> a >> b >> x;
  //\n works faster than endl because it doesnt need to flush the buffer
  //output the values of a , b , x
  cout << a << b << x << "\n";
  //This type of input out works if there is a space between the values

  //Output Works as follows
  //declare variables 
  int c = 123, d = 456;
  string name = "Timmy Turner";
  //output the values of c , d , name
  cout << c << " " << d << " " << name << "\n";

  //Sometimes you need to read a whole line of text with newline characters
  //string Line;
  //getLine function takes the whole line as input
  //getline(cin,Line);
  //cout << "The line is: " << Line << "\n";
  
  //Alternatively you can use the C syntax scanf() printf()
  int e,f;
  scanf("%d %d",&e,&f);
  printf("%d %d",e,f);

  //if the input size is unnknown use the following loop
  // while (cin >> x){
    //code
  //}

  // file handling can be done with the following
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  //After this, the program reads the input from the file ”input.txt” and writes the
  //output to the file ”output.txt”.
  return 0;
}