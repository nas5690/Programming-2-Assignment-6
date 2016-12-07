#include "project.h"
#include <string>
#include <iostream>

using namespace std;
namespace staffproject

{
	Project::Project()
	{
		this->max_staff_project = 0;
		this->project_ID = 0;
		this->project_name = "";
	}

	Project::Project(int mx_st, int pr_id, string Pr_na)
	{
		this->max_staff_project = mx_st;
		this->project_ID = pr_id;
		this->project_name = Pr_na;
	}
}