#include<iostream>
#include<stdlib.h>
#include<sstream>
using namespace std;
class post{
	public:
	int id_no;
char sname[30];
char rname[30];
char faddress[50];
char raddress[50];
char sphone[10];
char rphone[10];
char doctype[10];
char ccharges[10];
int menu ();
int adminop ();
bool admin ();
int courier ();
bool userid ();
void star ();
int print ();
void data (int d);
int afunc (string m);
};
int
main ()
{
  post p;
  p.menu();
  return 0;
}

int post::menu()
{
  system ("CLS");
  string v1;
  star ();
  cout << "\n\t\t\tPAKISTAN POST\n";
  star ();
  cout << "\t1 admin\n\t2 user" << endl;
  cin >> v1;
  system ("CLS");
  if (v1 == "1")
    {

      if (admin ())
	{
	  system ("CLS");
	  adminop ();
	  system ("CLS");
	  menu ();
	}
      else
	{
	  cout << "Invalid\n";
	  menu ();
	  cin >> v1;
	}
    }
  else if (v1 == "2")
    {
      string lf;
      star ();
      cout << "1 Login\n2 forget password request\n";
      star ();
      cin >> lf;
      system ("CLS");
      if (lf == "1")
	{
	  if (userid ())
	    {
	      system ("CLS");
	      courier ();
	      system ("CLS");
	      menu ();
	      cout << "user slot";
	      //user slot
	    }
	  else
	    {
	      cout << "Invalid\n";
	      menu ();
	      cin >> v1;
	    }
	}
      else if (lf == "2")
	{
	  cout << "Enter Your id\n";

	  cout << "Enter Your Number\n";
	  
	  menu ();
	}
      else
	{
	  cout << "invalid" << endl;
	  menu ();
	}
    }
  else
    {
      cout << "invalid\n";
      menu ();
      cin >> v1;
    }
}

int post::courier ()
{
  star ();
  string c;
  cout << "\t\tCourier Type\n";
  cout << "1. Document type:\n";
  cout << "2. Weight contain material:\n";
  cout << "3. Money transaction:\n";
  cout << "4. Gift parcel:\n";
  cout << "5. Courier Detail:\n";
  cout << "6. log out:\n\n";
  cout << "Enter your parcel choice:\n";
  star ();
  cin >> c;
  system ("CLS");
  if (c == "1")
    {
      cout << "Your parcel is document type:" << endl;
      cout << "courier detail form :" << endl;
      cout << "courier id is :" << endl;
      cout << id_no << endl;
      cout << "sender name is :" << endl;
      cin >> sname;
      cout << "receivers name:" << endl;
      cin >> rname;
      cout << "Address from :" << endl;
      cin >> faddress;
      cout << "Address to :" << endl;
      cin >> raddress;
      cout << "senders number is :" << endl;
      cin >> sphone;
      cout << "receivers number is :" << endl;
      cin >> rphone;
      cout << "Document type :" << endl;
      cin >> doctype;
      cout << "courier charges :" << endl;
      cin >> ccharges;
      string r;
      cout << endl << "1 confirm ";
      cin >> r;
      system ("CLS");
      if (r == "1")
	{
	  cout << "courier detail form :" << endl;
	  cout << "courier id is :" << id_no << endl;
	  cout << "sender name is :" << sname << endl;
	  cout << "receivers name:" << rname << endl;
	  cout << "Address from :" << faddress << endl;
	  cout << "Address to :" << raddress << endl;
	  cout << "senders number is :" << sphone << endl;
	  cout << "receivers number is :" << rphone << endl;
	  cout << "Document type :" << doctype << endl;
	  cout << "courier charges :" << ccharges << endl;
	  print ();
	}
      else
	{
	  system ("CLS");
	  menu ();
	}

    }
  if (c == "2")
    {
      cout << "Your parcel is document type:" << endl;
      cout << "courier detail form :" << endl;
      cout << "courier id is :" << endl;
      cout << id_no << endl;
      cout << "sender name is :" << endl;
      cin >> sname;
      cout << "receivers name:" << endl;
      cin >> rname;
      cout << "Address from :" << endl;
      cin >> faddress;
      cout << "Address to :" << endl;
      cin >> raddress;
      cout << "senders number is :" << endl;
      cin >> sphone;
      cout << "receivers number is :" << endl;
      cin >> rphone;
      cout << "Document type :" << endl;
      cin >> doctype;
      cout << "courier charges :" << endl;
      cin >> ccharges;
      string r;
      cout << endl << "1 confirm ";
      cin >> r;
      system ("CLS");
      if (r == "1")
	{
	   cout << "courier detail form :" << endl;
	  cout << "courier id is :" << id_no << endl;
	  cout << "sender name is :" << sname << endl;
	  cout << "receivers name:" << rname << endl;
	  cout << "Address from :" << faddress << endl;
	  cout << "Address to :" << raddress << endl;
	  cout << "senders number is :" << sphone << endl;
	  cout << "receivers number is :" << rphone << endl;
	  cout << "Document type :" << doctype << endl;
	  cout << "courier charges :" << ccharges << endl;
	  print ();
	}
      else
	{
	  system ("CLS");
	  menu ();
	}

    }
  if (c == "3")
    {
      cout << "Your parcel is document type:" << endl;
      cout << "courier detail form :" << endl;
      cout << "courier id is :" << endl;
      cout << id_no << endl;
      cout << "sender name is :" << endl;
      cin >> sname;
      cout << "receivers name:" << endl;
      cin >> rname;
      cout << "Address from :" << endl;
      cin >> faddress;
      cout << "Address to :" << endl;
      cin >> raddress;
      cout << "senders number is :" << endl;
      cin >> sphone;
      cout << "receivers number is :" << endl;
      cin >> rphone;
      cout << "Document type :" << endl;
      cin >> doctype;
      cout << "courier charges :" << endl;
      cin >> ccharges;
      string r;
      cout << endl << "1 confirm ";
      cin >> r;
      system ("CLS");
      if (r == "1")
	{
	  cout << "courier detail form :" << endl;
	  cout << "courier id is :" << id_no << endl;
	  cout << "sender name is :" << sname << endl;
	  cout << "receivers name:" << rname << endl;
	  cout << "Address from :" << faddress << endl;
	  cout << "Address to :" << raddress << endl;
	  cout << "senders number is :" << sphone << endl;
	  cout << "receivers number is :" << rphone << endl;
	  cout << "Document type :" << doctype << endl;
	  cout << "courier charges :" << ccharges << endl;
	  print ();
	}
      else
	{
	  system ("CLS");
	  menu ();
	}

    }
  if (c == "4")
    {
      cout << "Your parcel is document type:" << endl;
      cout << "courier detail form :" << endl;
      cout << "courier id is :" << endl;
      cout << id_no << endl;
      cout << "sender name is :" << endl;
      cin >> sname;
      cout << "receivers name:" << endl;
      cin >> rname;
      cout << "Address from :" << endl;
      cin >> faddress;
      cout << "Address to :" << endl;
      cin >> raddress;
      cout << "senders number is :" << endl;
      cin >> sphone;
      cout << "receivers number is :" << endl;
      cin >> rphone;
      cout << "Document type :" << endl;
      cin >> doctype;
      cout << "courier charges :" << endl;
      cin >> ccharges;
      string r;
      cout << endl << "1 confirm ";
      cin >> r;
      system ("CLS");
      if (r == "1")
	{
	  cout << "courier detail form :" << endl;
	  cout << "courier id is :" << id_no << endl;
	  cout << "sender name is :" << sname << endl;
	  cout << "receivers name:" << rname << endl;
	  cout << "Address from :" << faddress << endl;
	  cout << "Address to :" << raddress << endl;
	  cout << "senders number is :" << sphone << endl;
	  cout << "receivers number is :" << rphone << endl;
	  cout << "Document type :" << doctype << endl;
	  cout << "courier charges :" << ccharges << endl;
	  print ();
	}
      else
	{
	  system ("CLS");
	  menu ();
	}

    }
  else if (c == "5")
    {
      int n;
      cout << "Enter coutrier id:  ";
      cin >> id_no;
      system ("CLS");
      courier ();
    }
  else if (c == "6")
    {
      cout << "successfully Log Out ";
      menu ();
    }
  else
    {
      system ("CLS");
      cout << "you entered wrong number:" << endl;
      courier ();
    }
}

void post::star()
{
  cout << "\n******************************************************\n";
}

bool post::admin()
{
  string admin, apas;
  star ();
  cout << "\t\tAdmin" << endl;
  star ();
  cout << "Enter user name:  ";
  cin >> admin;
  cout << "Enter Password:  ";
  cin >> apas;
  string admin1 = "usman";
  string apass = "1234";
  system ("CLS");
  if (admin == admin1 && apas == apass)
    {
      return true;
    }
  else
    return false;
}

int post::adminop ()
{

  system ("CLS");
  string k;
  star ();
  cout << "  Main  \n";
  star ();
  cout << " 1-profile \n";
  cout << " 2-employ id \n";
  cout << " 3-Courier details \n";
  cout << " 4-Log Out \n\n";
  cout << " Select your option \n\t";
  cin >> k;
  if (k == "1")
    {
      string j;
      cout << "Name : Usman Shabbir\n";
      cout << "Phone number : 030000000000\n";
      cout << "Email : xyz@gmail.com\n";
      cout << "Password : 1234\n";
      cout << "Enter 1 for back\n";
      cin >> j;
      system ("CLS");
      if (j == "1")
	{
	  adminop ();
	}
      else
	menu ();
    }
  else if (k == "2")
    {
      string q;
      star ();
      cout << " 1-create " << endl;
      cout << " 2-employ reqest " << endl;
      cout << " Enter keys accordingly to proceed further: ";
      cin >> q;
    }
  else if (k == "3")
    {
      int n;
      cout << "Enter coutrier id:  ";
      cin >> n;
      system ("CLS");
      adminop ();
    }
  else if (k == "4")
    {
      menu ();
    }
  else
    {
      cout << " The entered key is invalid ";
    }
}

bool post::userid()
{
  string em, p;
  star ();
  cout << "\t\tlogin\n";
  star ();
  cout << "Employee I'd: ";
  cin >> em;
  cout << "Password:";
  cin >> p;
  string employ = "umer";
  string ep = "999";
  system ("CLS");
//  if (em == employ1 && p == epas)
//    {
//      return true;
//    }
//  else if (em == employ && p == ep)
//    {
//      return true;
//    }
//  else
    return false;
}

int post::print ()
{
  string ch, cp, pf, am, pol, b, ct;
  star ();
  cout << "1 for New" << endl;
  star ();
  cin >> ch;
  system ("CLS");
  if (ch == "1")
    {
      courier ();
    }
  else
    {
      system ("CLS");
      courier ();
    }
}

void post::data (int d)
{
  cout << "courier detail form :" << endl;
	  cout << "courier id is :" << id_no << endl;
	  cout << "sender name is :" << sname << endl;
	  cout << "receivers name:" << rname << endl;
	  cout << "Address from :" << faddress << endl;
	  cout << "Address to :" << raddress << endl;
	  cout << "senders number is :" << sphone << endl;
	  cout << "receivers number is :" << rphone << endl;
	  cout << "Document type :" << doctype << endl;
	  cout << "courier charges :" << ccharges << endl;
}
int post::afunc (string m)
{
  if (m == "1")
    {
      cout << "create id";
      cout << "Enter user name:\t";
      cout << "Enter password:\t";
      adminop ();
    }
  else if (m == "2")
    {
      string w;
      cout << " Employ ID passwords: " << endl;
//      cout << b[1] << endl;
//      cout << b[2] << endl;
//      cout << b[3] << endl;
//      cout << b[4] << endl;
//      cout << b[5] << endl;
//      cout << b[6] << endl;
//      cout << b[7] << endl;
//      cout << b[8] << endl;
      cout << "enter any key for back";
      cin >> w;
      adminop ();
    }
}

