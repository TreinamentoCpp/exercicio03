/*
 * Scheduler.cpp
 *
 *  Created on: Aug 27, 2015
 *      Author: datacom
 */

#include "Scheduler.h"
#include <iostream>

namespace ex03 {

Task_t::Task_t(void (*pFun)(int), string str) :
		pFun_(pFun), string_(str) {

}

Task_t::~Task_t() {

}

void Task_t::call_func(int i) {
	std::cout << "Calling " << this->string_ << "..." << std::endl;
	this->pFun_(i);
}


Scheduler::Scheduler() {
	// TODO Auto-generated constructor stub

}

Scheduler::~Scheduler() {
	// TODO Auto-generated destructor stub
}

Scheduler::Scheduler(Task_t t) {
	this->Schedule(t);
}

void Scheduler::Schedule(Task_t &task) {
	this->scheduler_list_.push_back(task);
}

void Scheduler::Execute()
{
	for (Task_t &t : this->scheduler_list_) {
		t.call_func(1);
	}
}

} /* namespace ex03 */
