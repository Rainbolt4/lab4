/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: dominic rainbolt
 * Date: 10/8/2018
 * Lab 4 assignment
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <stdlib.h>  // for use of generating a random number
#include <algorithm> // for sorting the vector in ascending order
using std::cout;
using std::endl;
using std::vector;
using std::cin;
using std::sort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">" << endl;
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers
// this is a function to add 10 random numbers into the vector that is given as an argument
void add_numbers(vector<short>&data) {
	short random = 0; 
	for (int i = 0; i < 10; i++) {
		random = rand() % 50 + 1; //place a random int from 1 to 50 into random
		data.push_back(random); // add the new random number to the end of the vector
	}
}


// TODO: implement print_even
//This is a function to print out all of the even elements of the given vector. 
void print_even(const vector<short>&data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(1);
		for (ulong i = 3; i<data.size(); i = i + 2) {
			cout << ", " << data.at(i);
		}
		cout << ">" << endl;
	}
}

// TODO: implement is_present
// this is a function to determine if a value is in a given vector
bool is_present(const vector<short> &data, short value) {
	std::vector<short>::const_iterator iter = data.begin();

	bool found = false;
	while (iter != data.end() && (!found)) {
		if (*iter == value) { found = true; }
		iter++;
	}

	return found;
} 

// TODO: implement std::sort function
// this is a function to sort from smallest to largest values
void sort_vector(vector<short> &data) {
	
	sort(data.begin(), data.end());
}
