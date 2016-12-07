#pragma once
#ifndef PROJECT_H
#define PROJECT_H

#include <iostream>
#include<string>

using namespace std;
namespace staffproject
{
	class Project
	{
	private:
		int max_staff_project;
		int project_ID;
		string project_name;

	public:
		Project();
		Project(int max_staff_per_project, int project_ID, string project_name);
	};
}

#endif