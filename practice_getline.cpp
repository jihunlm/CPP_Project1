#include <string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define NAME_LIMIT 50
#define WORD_LIMIT 100

int main() {
	char name[NAME_LIMIT], occupation[WORD_LIMIT];

	cout << "Type in yoru name";
	std::getline(name, NAME_LIMIT);
	cout << "Type in your occupation";
	std::getline(occupation, WORD_LIMIT);

	cout << "The information you typed in is :\n";
	cout << name << "\n";
	cout << occupation << "\n";
}
