#include <iostream>
#include <iomanip>
using namespace std;
int main (void)
{
  setlocale (LC_ALL,"portuguese_Brazil.1252");
  float a,b,r;
  int opcao;

  cout << setprecision(2) << fixed << right;
  cout << "entre um valor para <A>:";
  cin >> a;
  cin.ignore (80,'\n');

  cout << "entre um valor para <B>:";
  cin >> b;
  cin.ignore (80,'\n');

  cout << "\n";
  cout << "[1]-adição " << endl;
  cout << "[2]-subtração" << endl;
  cout << "[3]- multiplicação" << endl;
  cout << "[4]- divisão " << endl;
  cout << "\n";

  cout << "escolha uma opção:";
  cin >> opcao;
  cin.ignore(80,'\n');

  if (opcao == 1)
    r= a + b;
  if (opcao == 2)
    r = a-b;
  if (opcao == 3)
    r =  a *b;
  if (opcao == 4)
   if (b==0)
   r=0;
   else
    r = a/b;
  cout << "\nResultado e igual a:" << setw(5);
  cout << r << endl;

  return 0;
}
