// Lab 5 — Tyler Quintana
// CIS 5 Week 05 · Eligibility check

#include <iostream>

int main() {
  int age = 0;
  double gpa = 0.0;

  std::cout << "Age? ";
  std::cin >> age;
  std::cout << "GPA? ";
  std::cin >> gpa;

  bool adult = age >= 17;
  // changed age because this scholarship is for high school seniors, so 17 is the minimum age to apply 
  bool honors = gpa >= 3.75;
  // changed gpa because this scholarship is for students with a high GPA

  if (adult && honors)
  {
  std::cout << "You are eligible for the scholarship! \n";
  }

  else if (adult || honors)
  {
  std::cout << "You only meet one of the requirements. \n";
  }
  
  else
  {
  std::cout << "You do not meet the requirements. \n";
  }

  return 0;
}
