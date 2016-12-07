#pragma once
#ifndef COMPANY_H
#define COMPANY_H

#include "project.h"
#include "staff.h"
#include <iostream>
#include <list>

using namespace std;
namespace staffproject
{
	class Company
	{
	private:
		string Project_name;
		list<Staff> staffList; //used instead of stafflist::vector<Staff>
		list<Project> projectlist; //used instead of projectlist<Project>

	public:
		Company();
		void management();
	};
}

#endif 