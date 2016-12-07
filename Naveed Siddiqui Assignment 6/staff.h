#pragma once
#ifndef STAFF_H
#define STAFF_H

#include<iostream>
#include<string> 

using namespace std;
namespace staffproject  
{
	class Staff
	{
	private:
		string fname;
		int ID;

	public:
		Staff();
		Staff(int ID, string fname);
	};
}
#endif
