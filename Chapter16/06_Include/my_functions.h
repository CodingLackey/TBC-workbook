//#pragma once

#ifndef __MY_FUNCTIONS__
#define __MY_FUNCTIONS__

extern int status;

static int si = 0;
extern int add(int a, int b);

static int multiply(int a, int b)
{
	return a * b;
}

inline int subtract(int a, int b)
{
	return a - b;
}

void print_status();
void print_address();

#endif