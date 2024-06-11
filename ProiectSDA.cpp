// ProiectSDA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Retea.h"
#include "Test.h"
using namespace std;
int main()
{	
	Tests tests;
	Retea* retea_ = Retea::GetInstance();
	tests.allTests();
	retea_->menu();
}