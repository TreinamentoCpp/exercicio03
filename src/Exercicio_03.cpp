//============================================================================
// Name        : Exercicio_03.cpp
// Author      : João Codagnoni
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Scheduler.h"
#include <iostream>

using namespace std;
using ex03::Task_t;
using ex03::Scheduler;
using namespace ex03;

void f1(int a)
{
	std::cout << "f1" << std::endl;
}

void f2(int a)
{
	std::cout << "f2" << std::endl;
}

void f3(int a)
{
	std::cout << "f3" << std::endl;
}

void f4(int a)
{
	std::cout << "f4" << std::endl;
}

int main() {
	Task_t t1 {&f1, "f1"};
	Task_t t2 {&f2, "f2"};
	Task_t t3 {&f3, "f3"};
	Task_t t4 {&f4, "f4"};

	Scheduler s;

	s.Schedule(t1);
	s.Schedule(t4);
	s.Schedule(t2);
	s.Schedule(t3);

	s.Execute();

	return 0;
}
