//
// Created by remay on 3/9/17.
//
#include "process.h"

using namespace std;

string Process::TypeArray[] = {"SYSTEM", "INTERACTIVE", "NORMAL", "BATCH"};

Process::Process(int pid, Type type) {
	this->pid = pid;
	this->type = type;
}

int Process::get_pid() {
	return pid;
}

Process::Type Process::get_type() {
	return type;
}

string Process::get_type_name(Type type) {
	return TypeArray[type];
}

void Process::pushThread(Thread *thread) {
	threads.push_back(thread);
}

const vector<Thread*>& Process::getThreads() {
	return threads;
}