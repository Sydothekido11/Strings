/*
 * StringsController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: snem8901
 */
#include <string>
#include "StringsController.h"
#include <iostream>
using namespace std;

string my_string;

StringsController::StringsController()
{
	meow = "I like cats.";
}

void StringsController::start()
{
	cout<< meow.size()<<endl;
	cout<< meow [1]<<endl;
	cout<< meow.at(2)<<endl;
	cout<< meow.empty()<<endl;
	cout<< meow.substr(0,11)<<endl;
	cout<< meow.substr(0)<<endl;
	cout<< meow.compare(meow)<<endl;
}

