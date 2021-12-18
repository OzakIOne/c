#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

vector<int> enter_value() {
  vector<int> array = {};
  int input;
  cout << "Entrez vos valeurs:\n";
  do {
    cin >> input;
    array.push_back(input);
  } while (input);
  array.pop_back();
  return array;
}

void ascending(vector<int> array) {
  sort(array.begin(), array.end());
  auto print = [](const int &n) { std::cout << " " << n; };
  for_each(array.begin(), array.end(), print);
}

void descending(vector<int> array) {
  sort(array.begin(), array.end(), greater<int>());
  auto print = [](const int &n) { std::cout << " " << n; };
  for_each(array.begin(), array.end(), print);
}

void median(vector<int> array) {
  auto print = [](const int &n) { std::cout << " " << n; };
  for_each(array.begin(), array.end(), print);
  nth_element(array.begin(), array.begin() + array.size() / 2, array.end());
  cout << "La mediane est : " << array[array.size() / 2] << '\n';
}

void moy(vector<int> array) {
  auto print = [](const int &n) { std::cout << " " << n; };
  for_each(array.begin(), array.end(), print);
  float somme = accumulate(array.begin(), array.end(), 0.0) / array.size();
  cout << "moyenne : " << somme;
}

void minmax(vector<int> array) {
  sort(array.begin(), array.end());
  cout << "min : " << array[0] << '\n';
  cout << "max : " << array[array.size() - 1] << '\n';
}

int main() {
  cout << "Veuillez choisir quel mode vous voulez\n";
  cout << "1.) Tri Croissant\n";
  cout << "2.) Tri Decroissant\n";
  cout << "3.) Mediane\n";
  cout << "4.) Moyenne\n";
  cout << "5.) Max / Min\n";

  unsigned int a = 0, j = 0;
  do {
    j++;
    if (j > 1) {
      cout << "Please select a valid number:\n";
    }
    cin >> a;
  } while (a == 0 || a > 5);

  vector<int> arr = enter_value();
  if (a == 1) {
    ascending(arr);
  } else if (a == 2) {
    descending(arr);
  } else if (a == 3) {
    median(arr);
  } else if (a == 4) {
    moy(arr);
  } else if (a == 5) {
    minmax(arr);
  }
  return 0;
}