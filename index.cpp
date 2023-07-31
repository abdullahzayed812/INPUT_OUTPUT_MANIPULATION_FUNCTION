#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {

/* ========================== Reading manipulation ========================== */

  setw(number) to make output stream with fixed width
  cout << setw(3) << 7 << "\n";
  cout << setw(3) << 27 << "\n";
  cout << setw(3) << 127 << "\n";

  double a = 2;
  double b = 2.5;
  double c = 3.22234242898;

  setprecision(number) to make output stream with fixed size of precision number
  cout << fixed << setprecision(3) << a << endl;
  cout << fixed << setprecision(3) << b << endl;
  cout << fixed << setprecision(3) << c << endl;

  setiosflags(ios:: flag)
  flags => right || left || scientific

  cout << "|" << setw(20) << 142.1 << "|\n";
  cout << "|" << setw(20) << setiosflags(ios::left) << 142.1 << "|\n";
  cout << "|" << setw(20) << setiosflags(ios::right) << 142.1 << "|\n";
  cout << "|" << setw(20) << setiosflags(ios::scientific) <<123.3 << "|\n";

  showbase with (hex, dec, oct, uppercase) convert output stream with base determined
  cout << "this number will be in octal base " << showbase << oct << 10;
  cout << "this number will be in hex base " << showbase << hex << 10;
  cout << "this number will be in hex base uppercase " << showbase << uppercase << hex << 10;

  cout << showbase << dec;

  boolalpha => convert bool type in true || false as string
  bool status = true;

  cout << boolalpha << status;

  flush => force output
  cout << "some stuff" << flush;

  string firstName, lastName;
  string line1, line2;

  cin >> firstName >> lastName;
  cout << "Entered name " << firstName << " " << lastName << "\n";


/* ========================== getline(cin, separator) ========================== */


  getline(cin, line1);

  getline(cin, line1);

  cout << line1 << "\n";

  cout << "Enter bar separated data : E.g. ahmed|aly|2000\n\n";


/* ========================== getline with separator ========================== */


  string firstName, lastName;
  double salary;

  getline(cin, firstName, '|');
  getline(cin, lastName, '|');
  cin >> salary;

  cout << firstName << "\n";
  cout << lastName << "\n";
  // cout << salary << "\n";

 /* ========================== Reading by istringstream ========================== */

  string data = "10 abdullah 7000.39";

  int number;
  string name;
  double salary;

  istringstream iss(data);

  iss >> number >> name >> salary;

    cout << number << "\n";
    cout << name << "\n";
    cout << salary <<"\n";


 /* ========================== Input validation by fail(), clear(), ignore() ========================== */


  cout << "Enter two numbers" << "\n";

  int num1, num2;
  cin >> num1 >> num2;

  if (cin.fail()) {
    cout << "Invalid inputs, you have one more trial\n";
    cin.clear();
    cin.ignore(10000, '\n');

    cin >> num1 >> num2;
    if (cin.fail()) {
      cout << "Wrong answer \n";
    } else {
      cout << "You entered valid number " << num1 << " " << num2;
    }
  } else {
      cout << "You entered valid number " << num1 << " " << num2;
  }

/* ========================== Input validation by istringstream ========================== */

  cout << "Enter two numbers \n";

  string line;
  getline(cin, line);

  istringstream iss(line);

  int num;

  iss >> num;

  if (iss.fail()) {
    cout << "Invalid inputs\n";
  } else {
    cout << "Valid inputs";
  }

/* ========================== peek(), to lookup at input ========================== */

  cout << "Enter your nationality number\n";

  string line;
  getline(cin, line);

  istringstream iss(line);

  char ch = iss.peek();

  if (!isdigit(ch)) {
    cout << "It was a string\n";
  } else {
    cout << "It was a number";
  }

  return 0;
}