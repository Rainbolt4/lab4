#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  
  cout << "  ..:: B E G I N   L A B   C O D E ::.." << endl;
  vector<short> lab_vector(0);
  
  cout << "test our new function that adds 10 random numbers to our vector" << endl;

  add_numbers(lab_vector);
  print(lab_vector);
  cout << "Testing the print even function: " << endl;
  print_even(lab_vector);
  
  cout << "Testing if the is_present function works, please enter a number to see if it is in the test vector" << endl;
  short test = -9999;
  cin >> test;
  if (is_present(lab_vector, test)) {
	  cout << test << " is in the test vector!" << endl;
  }
  else { cout << "Sorry " << test << " is not in the vector"; }

  cout << "testing if the sort fucntion works:" << endl;
  sort_vector(lab_vector);
  print(lab_vector);
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  system("pause");
  return 0;
}
