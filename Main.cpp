#include<iostream>
#include"Header.h"
#include<string>
using namespace std;

int main()
{
	int choice;

	cout << "=================================" << endl;
	cout << "Welcome To Cafe Management System" << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << "Choose Between The Following: " << endl;
	cout << "Login As: " << endl;
	cout << "1. Admin" << endl;
	cout << "2. Staff" << endl;
	cout << "3. Customer" << endl;
	cout << "4. Exit" << endl;
	cout << endl;
	cout << "Enter Your Choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		adminMenu();		// Admin Menu
		break;
	}
	case 2:
	{
		staffMenu();		// Staff Menu
		break;
	}
	case 3:
	{
		int choice;
		cout << "Customer Login" << endl;
		cout << "====================" << endl;
		cout << "1. Faculty" << endl;
		cout << "2. Student" << endl;
		cout << "3. Non-Faculty" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter Your Choice: " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			facultyMenu();		// Faculty Menu
			break;
		}
		case 2:
		{
			studentMenu();		// Student Menu
			break;
		}
		case 3:
		{
			nonFacultyMenu();	// Non-Faculty Menu
			break;
		}
		case 4:
		{
			exit(0);		// Exit
			break;
		}
		}
	}
	case 4:
	{
		exit(0);		// Exit
		break;
	}
	}
}