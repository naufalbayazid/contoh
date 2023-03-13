#include <iostream>
using namespace std;

int main ()
{//begin
//numeric bill
int bill;
//character status
string status;
//display "masukkan bilangan = "
cout << "masukkan bilangan = ";
cin >> bill;
if (bill == 0)
//status = "0"
status = "noll";
//else if (bill % 2 == 0)
else if (bill % 2 == 0)
//status = "genap"
status = "genap";
//else
else
//status = "ganjil"
status = "ganjil" ;
//display "bilangan = " + status
cout << "bilangan =" <<status;

}//end