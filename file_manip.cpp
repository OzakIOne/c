#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

void closeit() {
  ofstream myFlux("test.txt");
  myFlux.close();
}

void openit() {
  ofstream myFlux("test.txt");
  myFlux.open("test.txt");
}

void addline() {
  ofstream myFlux("test.txt");

  string useradding;
  cin >> useradding;

  myFlux << useradding << endl;
}

void readit() {
  ifstream myFlux("test.txt");

  if (myFlux) {
    string line;

    while (getline(myFlux, line)) {
      cout << line << endl;
    }
  }

  else {
    cout << "eror 404 not found :(" << endl;
  }
}

void filesize() {
  ifstream myFlux("test.txt");
  myFlux.seekg(0, ios::end);
  unsigned int size = 0;
  size = myFlux.tellg();
  cout << "Taille du fichier : " << size << " octets" << endl;
}

int main(int argc, char const *argv[]) {
  readit();
  filesize();
  addline();
  readit();
  filesize();
  return 0;
}