/*
 * Scheduler.h
 *
 *  Created on: Aug 27, 2015
 *      Author: datacom
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_

#include <list>
#include <string>

using std::list;
using std::string;

namespace ex03 {

class Task_t {
public:
	Task_t(void (*)(int), string);
	~Task_t();

	void call_func(int);
private:
	void (*pFun_)(int);
	string string_;
};

class Scheduler {

public:
	Scheduler();
	virtual ~Scheduler();

	Scheduler(Task_t);

	void Schedule(Task_t &task);
	void Execute(void);

private:
	list<Task_t> scheduler_list_;
};

} /* namespace ex03 */

#endif /* SCHEDULER_H_ */
