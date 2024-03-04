#include "student.h"
#include <cstring>

void student::setname(char s[20])
{
	strcpy_s(this->nume,s);
}
char* student::getname()
{
	return this->nume;
}

void student::math(float x)
{
	this->nm = x;
}
float student::getmath()
{
	return this->nm;
}

void student::eng(float x)
{
	this->ne = x;
}
float student::geteng()
{
	return this->ne;
}

void student::hist(float x)
{
	this->nh = x;
}
float student::gethist()
{
	return this->nh;
}

float student::media()
{
	return (this->nm + this->ne + this->nh) / 3; 
}

