#include "company.h"
#include "project.h"
#include "staff.h"
#include<iostream>
#include<fstream>
#include <string>
#include <list>

using namespace std;
namespace staffproject

{
	Company::Company()
	{

	}

	void Company::management()
	{
		int max_project_staff, project_ID;
		string project_name;
		int ID;
		string name;

		string response = "Y";
		while (response == "Y" || response == "y")
		{
			cout << "\n\t\t How many are in the staff for the project? ";
			cin >> max_project_staff;

			cout << "\n\t\t Enter Project ID: ";
			cin >> project_ID;

			cout << "\n\t\t Enter Project Name: ";
			cin >> project_name;

			Project Proj(max_project_staff, project_ID, project_name);
			projectlist.push_back(Proj);  

			ofstream outfile("Assignment6.txt");

			for (int i = 0; i < max_project_staff; i++)
			{
				cout << "\n\t\t Enter staff ID: ";
				cin >> ID;

				cout << "\n\t\t Enter staff name: ";
				cin >> name;

				Staff s(ID, name);
				staffList.push_back(s); 
				outfile << max_project_staff << " " << project_ID << " " << project_name << " " << ID << " " << name << endl;
			}

			cout << "Do you want to add another project or staff members?" << endl;
			cout << "Press 'Y' for yes or 'N' for no." << endl;
			cin >> response;

			system("CLS");
		}
	}
}