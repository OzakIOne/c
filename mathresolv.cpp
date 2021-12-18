#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

void secondDegree() {
  double a, b, c, delta, x1, x2;
  cout << "Veuillez entrer les valeurs de a, b, c :\na : ";
  cin >> a;
  cout << "\nb : ";
  cin >> b;
  cout << "\nc : ";
  cin >> c;

  delta = pow(b, 2) - 4 * a * c;
  cout << "Delta vaut : " << delta << endl;

  if (delta > 0) {
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
    cout << "Les solutions sont :\n";
    cout << "x1 vaut : "
         << "-b - √(delta)"
         << " / "
         << "2*a"
         << " = " << x1 << endl;
    cout << "x2 vaut : "
         << "-b + √(delta)"
         << " / "
         << "2*a"
         << " = " << x2;
  }

  else if (delta = 0) {
    x1 = (-b / (2 * a));
    cout << "Il y a qu'une seule et unique solution x :\n";
    cout << "x vaut : " << -b << " / " << 2 * a << " = " << x1;
  }

  else {
    cout << "Delta est negatif il n'y a donc pas de solution dans R";
  }
}

void pythagore() {
  double a, b, c;
  cout << "Entrer la valeur du premier coter :\na : ";
  cin >> a;
  cout << "\nEntrer la valeur du deuxieme coter :\nb : ";
  cin >> b;
  cout << "\nEntrer la valeur de l'hypothénuse :\nc : ";
  cin >> c;

  if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
    cout << "Le triangle a:" << a << "  b:" << b << "  c:" << c
         << " est un triangle rectangle\n";
    cout << "a²+b²=c²";
  }

  else {
    cout << "Le triangle a = " << a << " b = " << b << " c = " << c
         << " n'est pas un triangle rectangle\n";
    cout << "a²+b²!=c²";
  }
}

void tableX() {
  unsigned int a = 0, n = 0, tmp = 0;
  cout << "Quel chiffre voulez vous avoir la table ?\n";
  cout << "a : ";
  cin >> a;
  cout << "Jusqu'a combien voulez vous le multiplier ?\n";
  cout << "n : ";
  cin >> n;

  for (unsigned int i = 1; i <= n; ++i) {
    tmp = a * i;
    cout << i << ": " << tmp << endl;
  }
}

main() {
  SetConsoleOutputCP(65001); // to print correctly √ in cmd
  unsigned int choice = 0;
  cout << "Que voulez vous executer comme résolveur ?" << endl
       << "1. Équation du second degrée" << endl
       << "2. Pythagore" << endl
       << "3. Table de multiplication" << endl;

  cin >> choice;
  switch (choice) {
  case 1:
    secondDegree();
    break;
  case 2:
    pythagore();
    break;
  case 3:
    tableX();
    break;
  default:
    cout << "Veuillez entrer un nombre correct\n";
  }
  return 0;
}
