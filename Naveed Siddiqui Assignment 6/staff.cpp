#include "staff.h"
#include <string>
#include <iostream>

using namespace std;
namespace staffproject
{
	Staff::Staff()
	{
		this->ID = 0;
		this->fname = "";
	}

	Staff::Staff(int id, string fn)
	{
		this->ID = id;
		this->fname = fn;
	}
}