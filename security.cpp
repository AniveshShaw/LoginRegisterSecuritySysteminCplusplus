#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

int main();

void reg()
{

main();
}

void login()
{

main();
}

void forgot()
{

main();
}
int main()
{
  for(int i=0;i<106;i++)
  {
  cout << "*";
  }
cout << endl << endl;
cout << "_________**----------%%========~~[{(LOGIN REGISTER SECURITY SYSTEM)}]~~========%%----------**____________" << endl << endl << "1.Register:         Press 1 for Register" << endl << "2.Login:            Press 2 for Login" << endl << "3.Change Password:  Press 3 for change password" << endl << "4.Exit:             Press 4 for Exit" << endl;

int c;
cin >> c;

if(c==1)
{
  reg();
}
else if(c==2)
{
  login();
}
else if (c==3)
{
forgot();
}
else if(c==4)
{
 cout << "THANK YOU" << endl;
}
else
{
cout << "Please enter correct choice" << endl;
main();
}
return 0 ;
}