#include <chrono>
#include <iostream>
#include <thread>

int main() {
  using namespace std::chrono_literals;
  std::cout << "Try to see the difference !\n starting in 1 second";
  std::this_thread::sleep_for(1000ms);
  system("color A1");
  std::chrono::high_resolution_clock::now();
  std::this_thread::sleep_for(100ms);
  system("color C1");
  std::chrono::high_resolution_clock::now();
  std::this_thread::sleep_for(110ms);
  system("color 07");
}