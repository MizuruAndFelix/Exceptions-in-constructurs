#pragma once
#include <stdexcept>
#include "Figure.h"


class Exception : public std::domain_error
{
public:
	using std::domain_error::domain_error;
	Exception(const char* msg) : std::domain_error(msg) {};
};