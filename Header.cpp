#include"Header.h"
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<cstdlib>
using namespace std;

// Extra Functions
void staffMenu()
{
	int c;
	cout << "Staff Menu" << endl;
	cout << "====================" << endl;
	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		User u;
		u.Register();
		break;
	}
	case 2:
	{
		User u;
		u.Login();
		break;
	}
	case 3:
	{
		exit(0);
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void StaffMenu2()
{
	int c;
	cout<< "Staff Menu" << endl;
	cout << "====================" << endl;
	cout << "1. View Menu" << endl;
	cout << "2. Process Order" << endl;
	cout << "3. Add Menu Item" << endl;
	cout << "4. Remove Menu Item" << endl;
	cout << "5. Check Reservation" << endl;
	cout << "6. Add Item To Order" << endl;
	cout << "7. Remove Item From Order" << endl;
	cout << "8. Calculate Total Bill" << endl;
	cout << "9. Confirm Order" << endl;
	cout << "10. Cancel Order" << endl;
	cout << "11. Logout" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		CafeStaff cs;
		cs.ViewMenu();
		break;
	}
	case 2:
	{
		CafeStaff cs;
		cs.ProcessOrder();
		break;
	}
	case 3:
	{
		CafeStaff cs;
		cs.AddMenuItem();
		break;
	}
	case 4:
	{
		CafeStaff cs;
		cs.RemoveMenuItem();
		break;
	}
	case 5:
	{
		CafeStaff cs;
		cs.CheckReservations();
		break;
	}
	case 6:
	{
		Order o;
		o.AddItem();
	}
	case 7:
	{
		Order o;
		o.RemoveItem();
	}
	case 8:
	{
		Order o;
		o.CalculateTotal();
	}
	case 9:
	{
		Order o;
		o.ConfirmOrder();
	}
	case 10:
	{
		Order o;
		o.CancelOrder();
	}
	case 11:
	{
		CafeStaff cs;
		cs.Logout();
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void studentMenu()
{
	int c;
	cout << "Student Menu" << endl;
	cout << "====================" << endl;
	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		User u;
		u.Register();
		break;
	}
	case 2:
	{
		User u;
		u.Login();
		break;
	}
	case 3:
	{
		exit(0);
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void adminMenu()
{
	int c;
	cout << "Administrator Menu" << endl;
	cout << "====================" << endl;
	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		User u;
		u.Register();
		break;
	}
	case 2:
	{
		User u;
		u.Login();
		break;
	}
	case 3:
	{
		exit(0);
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void AdminMenu2()
{
	int c;
	cout << "Admin Menu" << endl;
	cout << "====================" << endl;
	cout << "1. View Customer Menu" << endl;
	cout << "2. Add Item" << endl;
	cout << "3. Remove Item" << endl;
	cout << "4. Manage Inventory" << endl;
	cout << "5. Manage Discount-Promotion" << endl;
	cout << "6. View Order Hstory" << endl;
	cout << "7. Add Notification" << endl;
	cout << "8. Remove Notification" << endl;
	cout << "9. Rate Item" << endl;
	cout << "10. Display from file" << endl;
	cout << "11. View Users from file" << endl;
	cout << "12. View Menu Items from file" << endl;
	cout << "13. View Orders from file" << endl;
	cout << "14. View Ratings from file" << endl;
	cout << "15. View Payments from file" << endl;
	cout << "16. Calculate Monthly Earnings" << endl;
	cout << "17. Logout" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		Administrator a;
		a.ViewMenu();
		break;
	}
	case 2:
	{
		Administrator a;
		a.AddMenuItem();
		break;
	}
	case 3:
	{
		Administrator a;
		a.RemoveMenuItem();
		break;
	}
	case 4:
	{
		Administrator a;
		a.ManageInventory();
		break;
	}
	case 5:
	{
		Administrator a;
		a.ManageDiscountPromotion();
		break;
	}
	case 6:
	{
		Administrator a;
		a.ViewOrderHistory();
		break;
	}
	case 7:
	{
		Administrator a;
		a.AddNotification();
		break;
	}
	case 8:
	{
		Administrator a;
		a.RemoveNotification();
		break;
	}
	case 9:
	{
		Administrator a;
		a.RateMenuItem();
		break;
	}
	case 10:
	{
		Administrator a;
		a.DisplayFromFile();
		break;
	}
	case 11:
	{
		Administrator a;
		a.ViewUsersFromFile();
		break;
	}
	case 12:
	{
		Administrator a;
		a.ViewMenuItemsFromFile();
		break;
	}
	case 13:
	{
		Administrator a;
		a.ViewOrdersFromFile();
		break;
	}
	case 14:
	{
		Administrator a;
		a.ViewRatingsFromFile();
		break;
	}
	case 15:
	{
		Administrator a;
		a.ViewPaymentsFromFile();
		break;
	}
	case 16:
	{
		Administrator a;
		a.CalculateMonthlyEarnings();
		break;
	}
	case 17:
	{
		Administrator a;
		a.Logout();
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		AdminMenu2();
		break;
	}
	}

}
void facultyMenu()
{
	int c;
	cout << "Faculty Menu" << endl;
	cout << "====================" << endl;
	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		User u;
		u.Register();
		break;
	}
	case 2:
	{
		User u;
		u.Login();
		break;
	}
	case 3:
	{
		exit(0);
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void nonFacultyMenu()
{
	int c;
	cout << "Non-Faculty Menu" << endl;
	cout << "====================" << endl;
	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "3. Exit" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		User u;
		u.Register();
		break;
	}
	case 2:
	{
		User u;
		u.Login();
		break;
	}
	case 3:
	{
		exit(0);
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void CafeMenuStudent()
{
	ifstream file("StudentMenuItems.txt");

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void CafeMenuFaculty()
{
	ifstream file("StudentMenuItems.txt");
	ifstream file1("FacultyMenuItems.txt");
	ifstream file2("NonFacultyMenuItems.txt");

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}

	if (file1.is_open())
	{
		while (getline(file1, line))
		{
			cout << line << endl;
		}
		file1.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}

	if (file2.is_open())
	{
		while (getline(file2, line))
		{
			cout << line << endl;
		}
		file2.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void CafeMenuNonFaculty()
{
	ifstream file("NonFacultyMenuItems.txt");

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}


// User Class

// Constructors
User::User()
{
	UserID = 0;
	UserName = "";
	Password = "";
	UserType = "";
}
User::User(int UserID, string UserName, string Password, string UserType)
{
	this->UserID = UserID;
	this->UserName = UserName;
	this->Password = Password;
	this->UserType = UserType;
}
// Destructor
User::~User()
{
}

// Setters and Getters
void User::SetUserID(const int& ID)
{
	UserID = ID;
}
void User::SetUserName(const string& Name)
{
	UserName = Name;
}
void User::SetPassword(const string& Pass)
{
	Password = Pass;
}
void User::SetUserType(const string& Type)
{
	UserType = Type;
}

int User::GetUserID() const
{
	return UserID;
}
string User::GetUserName() const
{
	return UserName;
}
string User::GetPassword() const
{
	return Password;
}
string User::GetUserType() const
{
	return UserType;
}

// Helper Function for validating the password.
bool User::validatePassword(string p)
{
	int digitcount = 0;
	int Uppercount = 0;
	int lowercount = 0;

	if (p.length() < 7) 
	{
		cout << "Your Password is shorter than seven characters. Kindly Recheck." << endl;
		return false;  
	}

	for (int x = 0; x < p.length(); x++) 
	{
		if (isdigit(p[x])) 
		{
			digitcount++;
		}
	}

	for (int x = 0; x < p.length(); x++)
	{
		if (isupper(p[x]))
		{
			Uppercount++;
		}
	}

	for (int x = 0; x < p.length(); x++)
	{
		if (islower(p[x]))
		{
			lowercount++;
		}
	}

	if (digitcount > 0 && Uppercount > 0 && lowercount > 0)
	{
		cout << "Password verified" << endl;
		return true;
	}
	else
	{
		cout << "Password does not meet the criteria." << endl;
		return false;
	}
}
bool User::VerifyCredentials(int id, string name, string pass, string type)
{
	ifstream file("Users.txt");
	bool found = false;
	if (file.is_open())
	{
		while (file >> UserID >> name >> Password)
		{
			if (id == UserID && pass == Password)
			{
				found = true;
			}
		}
		file.close();
		return true;
	}
	else
	{
		cout << "Unable to open file" << endl;
		return false;
	}
}

// Member Functions
void User::Register()
{
	cout << "Enter User ID: " << endl;
	cin >> UserID;
	cout << "Enter User Name: " << endl;
	cin >> UserName;
	cout << "Enter Password: " << endl;
	cout << "Password must contain atleast 7 characters, 1 uppercase letter, 1 lowercase letter and 1 digit." << endl;
	cin >> Password;
	cout << "Enter User Type: " << endl;
	cin >> UserType;

	SetUserID(UserID);
	SetUserName(UserName);
	SetPassword(Password);
	SetUserType(UserType);

	if (validatePassword(Password))
	{
		FileManager f;
		f.SaveUserToFile(UserID, UserName, Password, UserType);
		
		if (UserType == "Student" || UserType == "student")
		{
			cout << "Student Registered Successfully" << endl;
			cout << "Login to continue" << endl;
			cout << endl;
			Student s;
			s.Login();
		}
		else if (UserType == "Non-Faculty" || UserType == "non-faculty")
		{
			cout << "Non-Faculty Registered Successfully" << endl;
			cout << "Login to continue" << endl;
			cout << endl;
			NonFaculty nf;
			nf.Login();
		}
		else if(UserType == "Faculty" || UserType == "faculty")
		{
			cout << "Faculty Registered Successfully" << endl;
			cout << "Login to continue" << endl;
			cout << endl;
			Faculty f;
			f.Login();
		}
		else if(UserType == "Administrator" || UserType == "administrator")
		{
			cout << "Administrator Registered Successfully" << endl;
			cout << "Login to continue" << endl;
			cout << endl;
			Administrator a;
			a.Login();
		}
		else if (UserType == "Staff" || UserType == "staff")
		{
			cout << "Staff Registered Successfully" << endl;
			cout << "Login to continue" << endl;
			cout << endl;
			CafeStaff s;
			s.Login();
		}
		else
		{
			cout << "Invalid User Type" << endl;
			Register();
		}
	}
}
void User::Login()
{
	int enteredid;
	string enteredpass, name, type;
	int c;

	cout << "Enter User ID: " << endl;
	cin >> enteredid;
	cout << "Enter Password: " << endl;
	cin >> enteredpass;

	cout << "Enter your User Type: " << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "4. Administrator" << endl;
	cout << "5. Staff" << endl;
	cout << "Enter your choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		type = "student";
		break;
	}
	case 2:
	{
		type = "faculty";
		break;
	}
	case 3:
	{
		type = "non-faculty";
		break;
	}
	case 4:
	{
		type = "administrator";
		break;
	}
	case 5:
	{
		type = "staff";
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}

	if (VerifyCredentials(enteredid, name, enteredpass, type))
	{
		cout << "Login Successful" << endl;
		if (type == "student")
		{
			Student s;
			s.ViewMenu();
		}
		else if (type == "faculty")
		{
			Faculty f;
			f.ViewMenu();
		}
		else if (type == "administrator")
		{
			AdminMenu2();
		}
		else if (type == "staff")
		{
			StaffMenu2();
		}
		else if (type == "non-faculty")
		{
			NonFaculty nf;
			nf.ViewMenu();
		}
		else
		{
			cout << "Invalid User Type" << endl;
			Login();
		}
	}
	else
	{
		cout << "Login Failed" << endl;
	}
}


// MenuItem Class

// Constructors
MenuItem::MenuItem()
{
	ItemID = 0;
	ItemName = "";
	ItemDescription = "";
	Price = 0;
	QuantityInStock = 0;
}
MenuItem::MenuItem(int ItemID, string ItemName, string ItemDescription, double Price, int QuantityInStock)
{
	this->ItemID = ItemID;
	this->ItemName = ItemName;
	this->ItemDescription = ItemDescription;
	this->Price = Price;
	this->QuantityInStock = QuantityInStock;
}
// Destructor
MenuItem::~MenuItem()
{
}

// Setters and Getters
void MenuItem::SetItemID(int ItemID)
{
	this->ItemID = ItemID;
}
void MenuItem::SetItemName(string ItemName)
{
	this->ItemName = ItemName;
}
void MenuItem::SetItemDescription(string ItemDescription)
{
	this->ItemDescription = ItemDescription;
}
void MenuItem::SetPrice(double Price)
{
	this->Price = Price;
}
void MenuItem::SetQuantityInStock(int QuantityInStock)
{
	this->QuantityInStock = QuantityInStock;
}

int MenuItem::GetItemID()
{
	return ItemID;
}
string MenuItem::GetItemName()
{
	return ItemName;
}
string MenuItem::GetItemDescription()
{
	return ItemDescription;
}
double MenuItem::GetPrice()
{
	return Price;
}
int MenuItem::GetQuantityInStock()
{
	return QuantityInStock;
}

// Member Functions
void MenuItem::AddMenuItem()
{
	int choice;
	cout << "Enter the Type of customer for which you want to add the menu item: " << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "4. Back" << endl;
	cout << "Enter your choice: " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		cout << "Enter Item ID: " << endl;
		cin >> ItemID;
		cout << "Enter Item Name: " << endl;
		cout << "Please Dont Use Spaces" << endl;
		cin >> ItemName;
		cout << "Enter Item Description: " << endl;
		cout << "Please Dont Use Spaces" << endl;
		cin >> ItemDescription;
		cout << "Enter Price: " << endl;
		cin >> Price;
		cout << "Enter Quantity In Stock: " << endl;
		cin >> QuantityInStock;

		string filename = "StudentMenuItems.txt";

		FileManager f;
		f.SaveMenuItemToFile(ItemID, ItemName, ItemDescription, Price, QuantityInStock, filename);		// SaveMenuItemToFile function is called from FileManager class

		cout << "Item Added Successfully" << endl;
		cout << "Saved to file" << endl;
		AdminMenu2();		// Calling AdminMenu2 function
	}
	case 2:
	{
		cout << "Enter Item ID: " << endl;
		cin >> ItemID;
		cout << "Enter Item Name: " << endl;
		cout << "Please Dont Use Spaces" << endl;
		cin >> ItemName;
		cout << "Enter Item Description: " << endl;
		cout << "Please Dont Use Spaces" << endl;
		cin >> ItemDescription;
		cout << "Enter Price: " << endl;
		cin >> Price;
		cout << "Enter Quantity In Stock: " << endl;
		cin >> QuantityInStock;

		string filename = "FacultyMenuItems.txt";

		FileManager f;
		f.SaveMenuItemToFile(ItemID, ItemName, ItemDescription, Price, QuantityInStock, filename);		// SaveMenuItemToFile function is called from FileManager class

		cout << "Item Added Successfully" << endl;
		cout << "Saved to file" << endl;
		AdminMenu2();		// Calling AdminMenu2 function
	}
	case 3:
	{
		cout << "Enter Item ID: " << endl;
		cin >> ItemID;
		cout << "Enter Item Name: " << endl;
		cout << "Please Dont Use Spaces" << endl;
		cin >> ItemName;
		cout << "Enter Item Description: " << endl;
		cout << "Please Dont Use Spaces" << endl;
		cin >> ItemDescription;
		cout << "Enter Price: " << endl;
		cin >> Price;
		cout << "Enter Quantity In Stock: " << endl;
		cin >> QuantityInStock;

		string filename = "NonFacultyMenuItems.txt";

		FileManager f;
		f.SaveMenuItemToFile(ItemID, ItemName, ItemDescription, Price, QuantityInStock, filename);		// SaveMenuItemToFile function is called from FileManager class

		cout << "Item Added Successfully" << endl;
		cout << "Saved to file" << endl;
		AdminMenu2();		// Calling AdminMenu2 function
	}
	case 4:
	{
		AdminMenu2();		// Calling AdminMenu2 function
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
	
}
void MenuItem::UpdateStock()
{
	int choice;
	cout << "Enter the Type of customer for which you want to update the menu item: " << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		int ID;
		cout << "Enter Item ID: " << endl;
		cin >> ID;

		ifstream file("StudentMenuItems.txt");
		ofstream f("Temp.txt", ios::app);

		bool found = false;
		string l;

		if (file.is_open())
		{
			while (!file.eof())
			{
				getline(file, l);
				if (l == to_string(ID))
				{
					found = true;
					cout << "Enter New Quantity: " << endl;
					cin >> QuantityInStock;
					f << QuantityInStock << endl;
				}
				else
				{
					f << l << endl;
				}
			}
			file.close();
			f.close();
			remove("MenuItems.txt");		// Removing the file
			rename("Temp.txt", "StudentMenuItems.txt");		// Renaming the file
			cout << "Stock Updated Successfully" << endl;
		}
		else
		{
			remove("Temp.txt");
			cout << "Unable to open file" << endl;
		}
	}
	case 2:
	{
		int ID;
		cout << "Enter Item ID: " << endl;
		cin >> ID;

		ifstream file("FacultyMenuItems.txt");
		ofstream f("Temp.txt", ios::app);

		bool found = false;
		string l;

		if (file.is_open())
		{
			while (!file.eof())
			{
				getline(file, l);
				if (l == to_string(ID))
				{
					found = true;
					cout << "Enter New Quantity: " << endl;
					cin >> QuantityInStock;
					f << QuantityInStock << endl;
				}
				else
				{
					f << l << endl;
				}
			}
			file.close();
			f.close();
			remove("FacultyMenuItems.txt");		// Removing the file
			rename("Temp.txt", "FacultyMenuItems.txt");		// Renaming the file
			cout << "Stock Updated Successfully" << endl;
		}
		else
		{
			remove("Temp.txt");
			cout << "Unable to open file" << endl;
		}
	}
	case 3:
	{
		int ID;
		cout << "Enter Item ID: " << endl;
		cin >> ID;

		ifstream file("NonFacultyMenuItems.txt");
		ofstream f("Temp.txt", ios::app);

		bool found = false;
		string l;

		if (file.is_open())
		{
			while (!file.eof())
			{
				getline(file, l);
				if (l == to_string(ID))
				{
					found = true;
					cout << "Enter New Quantity: " << endl;
					cin >> QuantityInStock;
					f << QuantityInStock << endl;
				}
				else
				{
					f << l << endl;
				}
			}
			file.close();
			f.close();
			remove("NonFacultyMenuItems.txt");		// Removing the file
			rename("Temp.txt", "NonFacultyMenuItems.txt");		// Renaming the file
			cout << "Stock Updated Successfully" << endl;
		}
		else
		{
			remove("Temp.txt");
			cout << "Unable to open file" << endl;
		}
	}

	}
}


// CafeStaff Class

void CafeStaff::ViewMenu()
{
	int choice;
	cout << "Enter the menu that you want to view: " << endl;
	cout << "1. Student Menu" << endl;
	cout << "2. Faculty Menu" << endl;
	cout << "3. Non-Faculty Menu" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		ifstream file("StudentMenuItems.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();	// Calling StaffMenu2 function
		break;
	}
	case 2:
	{
		ifstream file("FacultyMenuItems.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();		// Calling StaffMenu2 function
		break;
	}

	case 3:
	{
		ifstream file("NonFacultyMenuItems.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();		// Calling StaffMenu2 function
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		StaffMenu2();		// Calling StaffMenu2 function
		break;
	}
	}
}
void CafeStaff::ProcessOrder()
{
	int c;
	cout << "Which order do you want to process?" << endl;
	cout << "1. Student Order" << endl;
	cout << "2. Faculty Order" << endl;
	cout << "3. Non-Faculty Order" << endl;
	cout << "Enter your choice: ";
	cin >> c;

	switch (c)
	{
	case 1:
	{
		int id;
		cout << "Enter the Order ID to process for Students: " << endl;
		cin >> id;

		string filename = "StudentOrders.txt";

		ifstream file(filename);
		ofstream tempfile("Temp.txt");

		if (!file || !tempfile)
		{
			cout << "Error opening files!" << endl;
			return;
		}

		string l;
		bool processed = false;

		while (getline(file, l))
		{
			stringstream ss(l);
			int orderid;
			ss >> orderid;

			if (id != orderid)
			{
				tempfile << l << endl;
			}
			else
			{
				processed = true;
			}
		}
		file.close();
		tempfile.close();

		if (processed)
		{
			remove(filename.c_str());		// Removing the file
			rename("Temp.txt", filename.c_str());		// Renaming the file
			cout << "Order Processed Successfully for Students" << endl;
		}
		else
		{
			remove("Temp.txt");
			cout << "Order Not Found" << endl;
		}
		StaffMenu2();		// Calling StaffMenu2 function
		break;
	}

	case 2:
	{
		int id;
		cout << "Enter the Order ID to process for Faculty: " << endl;
		cin >> id;

		string filename = "FacultyOrders.txt";

		ifstream file(filename);
		ofstream tempfile("Temp.txt");

		if (!file || !tempfile)
		{
			cout << "Error opening files!" << endl;
			return;
		}

		string l;
		bool processed = false;

		while (getline(file, l))
		{
			stringstream ss(l);
			int orderid;
			ss >> orderid;

			if (id != orderid)
			{
				tempfile << l << endl;
			}
			else
			{
				processed = true;
			}
		}
		file.close();
		tempfile.close();

		if (processed)
		{
			remove(filename.c_str());
			rename("Temp.txt", filename.c_str());
			cout << "Order Processed Successfully for Faculty" << endl;
		}
		else
		{
			remove("Temp.txt");
			cout << "Order Not Found" << endl;
		}
		StaffMenu2();
		break;
	}
	case 3:
	{
		int id;
		cout << "Enter the Order ID to process for Non-Faculty: " << endl;
		cin >> id;

		string filename = "NonFacultyOrders.txt";

		ifstream file(filename);
		ofstream tempfile("Temp.txt");

		if (!file || !tempfile)
		{
			cout << "Error opening files!" << endl;
			return;
		}

		string l;
		bool processed = false;

		while (getline(file, l))
		{
			stringstream ss(l);
			int orderid;
			ss >> orderid;

			if (id != orderid)
			{
				tempfile << l << endl;
			}
			else
			{
				processed = true;
			}
		}
		file.close();
		tempfile.close();

		if (processed)
		{
			remove(filename.c_str());
			rename("Temp.txt", filename.c_str());
			cout << "Order Processed Successfully for Non-Faculty" << endl;
		}
		else
		{
			remove("Temp.txt");
			cout << "Order Not Found" << endl;
		}
		StaffMenu2();
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		StaffMenu2();
		break;
	}
	}
}
void CafeStaff::AddMenuItem()
{
	MenuItem m;
	m.AddMenuItem();		// Calling AddMenuItem function from MenuItem class
}
void CafeStaff::RemoveMenuItem()
{
	int choice;
	cout << "Enter the Type of customer for which you want to remove the menu item: " << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		int id;
		cout << "Enter the Item ID to remove for Students: " << endl;
		cin >> id;

		string filename = "StudentMenuItems.txt";

		FileManager f;
		f.RemoveMenuItemFromFile(filename, id);		// RemoveMenuItemFromFile function is called from FileManager class

		cout << "Item Removed Successfully for Students" << endl;
		break;
	}
	case 2:
	{
		int id;
		cout << "Enter the Item ID to remove for Faculty: " << endl;
		cin >> id;

		string filename = "FacultyMenuItems.txt";

		FileManager f;
		f.RemoveMenuItemFromFile(filename, id);		// RemoveMenuItemFromFile function is called from FileManager class

		cout << "Item Removed Successfully for Faculty" << endl;
		break;
	}
	case 3:
	{
		int id;
		cout << "Enter the Item ID to remove for Non-Faculty: " << endl;
		cin >> id;

		string filename = "NonFacultyMenuItems.txt";

		FileManager f;
		f.RemoveMenuItemFromFile(filename, id);		// RemoveMenuItemFromFile function is called from FileManager class

		cout << "Item Removed Successfully for Non-Faculty" << endl;
		break;
	}
	default:
		cout << "Invalid choice" << endl;
	}
}
void CafeStaff::CheckReservations()
{
	ifstream file("TableReservation.txt");

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void CafeStaff::Logout()
{
	int c;
	cout << "Are you sure you want to logout?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		exit(0);		// Exiting the program
		break;
	}
	case 2:
	{
		StaffMenu2();		// Calling StaffMenu2 function
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}


// Student Class
void Student::ViewMenu()
{
	int c;
	cout << "Student Menu" << endl;
	cout << "====================" << endl;
	cout << "1. View Menu" << endl;
	cout << "2. Place Order" << endl;
	cout << "3. View Order History" << endl;
	cout << "4. Reserve Table" << endl;
	cout << "5. Logout" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		CafeMenuStudent();		// Calling CafeMenuStudent function
		ViewMenu();		// Calling ViewMenu function
		break;
	}
	case 2:
	{
		PlaceOrder();		// Calling PlaceOrder function
		ViewMenu();		// Calling ViewMenu function
		break;
	}
	case 3:
	{
		ViewOrderHistory();		// Calling ViewOrderHistory function
		ViewMenu();		// Calling ViewMenu function
		break;
	}
	case 4:
	{
		ReserveTable();		// Calling ReserveTable function
		ViewMenu();		// Calling ViewMenu function
		break;
	}
	case 5:
	{
		Logout();			// Calling Logout function
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void Student::PlaceOrder()
{
	int ItemId[10];
	int n;
	cout << "Enter how many items you want to order (max order = 10): " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter Item ID: " << endl;
		cin >> ItemId[i];
	}

	int price[10];
	int quantity[10];
	int total = 0;

	// checking prices from file

	ifstream file("StudentMenuItems.txt");

	if (file.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				int id, itemprice, itemQuantity;

				ss >> id >> itemprice >> itemQuantity;

				if (id == ItemId[i])
				{
					price[i] = itemprice;
					quantity[i] = itemQuantity;
					break;
				}
			}
		}
		file.close();
	}

	else
	{
		cout << "Unable to open file" << endl;
	}

	string filename = "StudentOrders.txt";
	
	FileManager f;
	f.SaveOrderToFile(filename,ItemId, price, quantity, total, n);		// SaveOrderToFile function is called from FileManager class

	cout << "Order Placed Successfully and details are saved to file." << endl;
	ViewMenu();
}
void Student::ViewOrderHistory()
{
	cout << "Your Order History: " << endl;
	ifstream file("StudentOrders.txt");

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
	ViewMenu();		// Calling ViewMenu function
}
void Student::ReserveTable()
{
	bool reserved = false;
	int tableNo;
	cout << "Enter Table Number to reserve (10 Total Tables): " << endl;
	cin >> tableNo;

	string name;
	cout << "Enter Your Name: " << endl;
	cin >> name;

	ofstream file("TableReservation.txt", ios::app);

	if (file.is_open())
	{
		file << "Table No. " << tableNo << " Reserved for: " << name << endl;
		file << endl;
		file << tableNo << endl;
		file << endl;
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
	ViewMenu();		// Calling ViewMenu function
}
void Student::Logout()
{
	int c;
	cout << "Are you sure you want to logout?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		exit(0);		// Exiting the program
		break;
	}
	case 2:
	{
		ViewMenu();			// Calling ViewMenu function
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}

// Faculty Class

void Faculty::ViewMenu()
{
	int c;
	cout << "Faculty Menu" << endl;
	cout << "====================" << endl;
	cout << "1. View Menu" << endl;
	cout << "2. Place Order" << endl;
	cout << "3. View Order History" << endl;
	cout << "4. Reserve Table" << endl;
	cout << "5. Logout" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		CafeMenuFaculty();		// Calling CafeMenuFaculty function
		break;
	}
	case 2:
	{
		PlaceOrder();		// Calling PlaceOrder function
		break;
	}
	case 3:
	{
		ViewOrderHistory();		// Calling ViewOrderHistory function
		break;
	}
	case 4:
	{
		ReserveTable();		//	Calling ReserveTable function
		break;
	}
	case 5:
	{
		Logout();		// Calling Logout function
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void Faculty::PlaceOrder()
{
	int ItemId[10];
	int n;
	cout << "Enter how many items you want to order (max order = 10): " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter Item ID: " << endl;
		cin >> ItemId[i];
	}

	int price[10];
	int quantity[10];
	int total = 0;

	// checking prices from file

	ifstream file("FacultyMenuItems.txt");

	if (file.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			string line;
			while (getline(cin, line))
			{
				stringstream ss(line);
				int id, itemprice, itemQuantity;

				ss >> id >> itemprice >> itemQuantity;

				if (id == ItemId[i])
				{
					price[i] = itemprice;
					quantity[i] = itemQuantity;
					break;
				}
			}
		}
		file.close();
	}

	else
	{
		cout << "Unable to open file" << endl;
	}

	string filename = "FacultyOrders.txt";

	FileManager f;
	f.SaveOrderToFile(filename, ItemId, price, quantity, total, n); 	// SaveOrderToFile function is called from FileManager class	

	cout << "Order Placed Successfully and details are saved to file." << endl;
}
void Faculty::ViewOrderHistory()
{
	cout << "Your Order History: " << endl;
	ifstream file("FacultyOrders.txt");		// checking order history from file

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void Faculty::ReserveTable()
{
	bool reserved = false;
	int tableNo;
	cout << "Enter Table Number to reserve (10 Total Tables): " << endl;
	cin >> tableNo;

	string name;
	cout << "Enter Your Name: " << endl;
	cin >> name;

	// saving reservation to file

	ofstream file("TableReservation.txt", ios::app);

	if (file.is_open())
	{
		file << "Table No. " << tableNo << " Reserved for: " << name << endl;
		file << endl;
		file << tableNo << endl;
		file << endl;
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void Faculty::Logout()
{
	int c;
	cout << "Are you sure you want to logout?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		exit(0);		// Exiting the program
		break;
	}
	case 2:
	{
		ViewMenu();		// Calling ViewMenu function
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}

//NonFaculty Class

void NonFaculty::ViewMenu()
{
	int c;
	cout << "Non-Faculty Menu" << endl;
	cout << "====================" << endl;
	cout << "1. View Menu" << endl;
	cout << "2. Place Order" << endl;
	cout << "3. View Order History" << endl;
	cout << "4. Reserve Table" << endl;
	cout << "5. Logout" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		CafeMenuNonFaculty();		// Calling CafeMenuNonFaculty function	
		break;
	}
	case 2:
	{
		PlaceOrder();		// Calling PlaceOrder function
		break;
	}
	case 3:
	{
		ViewOrderHistory();		// Calling ViewOrderHistory function
		break;
	}
	case 4:
	{
		ReserveTable();		// Calling ReserveTable function
		break;
	}
	case 5:
	{
		Logout();		// Calling Logout function
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}
void NonFaculty::PlaceOrder()
{
	int ItemId[10];
	int n;
	cout << "Enter how many items you want to order (max order = 10): " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter Item ID: " << endl;
		cin >> ItemId[i];
	}

	int price[10];
	int quantity[10];
	int total = 0;

	// checking prices from file

	ifstream file("NonFacultyMenuItems.txt");

	if (file.is_open())
	{
		for (int i = 0; i < n; i++)
		{
			string line;
			while (getline(cin, line))
			{
				stringstream ss(line);
				int id, itemprice, itemQuantity;

				ss >> id >> itemprice >> itemQuantity;

				if (id == ItemId[i])
				{
					price[i] = itemprice;
					quantity[i] = itemQuantity;
					break;
				}
			}
		}
		file.close();
	}

	else
	{
		cout << "Unable to open file" << endl;
	}

	string filename = "NonFacultyOrders.txt";

	FileManager f;
	f.SaveOrderToFile(filename, ItemId, price, quantity, total, n);		// SaveOrderToFile function is called from FileManager class

	cout << "Order Placed Successfully and details are saved to file." << endl;
}
void NonFaculty::ViewOrderHistory()
{
	// checking order history from file

	cout << "Your Order History: " << endl;
	ifstream file("NonFacultyOrders.txt");

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void NonFaculty::ReserveTable()
{

	bool reserved = false;
	int tableNo;
	cout << "Enter Table Number to reserve (10 Total Tables): " << endl;
	cin >> tableNo;

	string name;
	cout << "Enter Your Name: " << endl;
	cin >> name;

	// saving reservation to file

	ofstream file("TableReservation.txt", ios::app);

	if (file.is_open())
	{
		file << "Table No. " << tableNo << " Reserved for: " << name << endl;
		file << endl;
		file << tableNo << endl;
		file << endl;
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void NonFaculty::Logout()
{
	int c;
	cout << "Are you sure you want to logout?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		exit(0);		// Exiting the program
		break;
	}
	case 2:
	{
		ViewMenu();		// Calling ViewMenu function	
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		break;
	}
	}
}


// File Manager Class

// Constructor
FileManager::FileManager()
{
	FileName = "";
	user = new User();
	Menu = new MenuItem();
	order = new Order();
	rating = new Rating();
	payment = new Payment();
}
FileManager::FileManager(string f)
{
	FileName = f;
	user = new User();
	Menu = new MenuItem();
	order = new Order();
	rating = new Rating();
	payment = new Payment();
}

// Destructor
FileManager::~FileManager()
{
	delete user;
	delete Menu;
	delete order;
	delete rating;
	delete payment;
}

// Member Functions
void FileManager::SaveUserToFile(int id, string username, string pass, string type)		// SaveUserToFile function
{
	ofstream file("Users.txt", ios::app);

	if (file.is_open())
	{
		file << "Users Information: " << endl;
		file << endl;
		file << "User ID: " << id << endl;
		file << "User Name: " << username << endl;
		file << "Password: " << pass << endl;
		file << "User Type: " << type << endl;
		file << endl;
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void FileManager::SaveMenuItemToFile(int ItemID, string ItemName, string ItemDescription, int Price, int QuantityInStock, string filename)		// SaveMenuItemToFile function
{
	ofstream file(filename, ios::app);

	if (file.is_open())
	{
		file << endl;
		file << "Menu Items Information: " << endl;
		file << endl;
		file << "ItemID:\t" << ItemID << endl;
		file << "Item Name:\t" << ItemName << endl;
		file << "Item Description:\t" << ItemDescription << endl;
		file << "Price:\t" << Price << endl;
		file << "Quantity In Stock:\t" << QuantityInStock << endl;
		file << endl;
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
void FileManager::SaveOrderToFile(string filename, int id[], int price[], int quantity[], int total, int n)		// SaveOrderToFile function
{
	ofstream file(filename, ios::app);

	if (file.is_open())
	{
		file << "Order Information: " << endl;
		file << endl;

		for (int i = 0; i < n; i++)
		{
			file << "Item ID:\t" << id[i] << endl;
			file << "Item Price:\t" << price[i] << endl;
			file << "Item Quantity:\t" << quantity[i] << endl;
			file << "Total:\t" << price[i] * quantity[i] << endl;

			total += price[i] * quantity[i];
		}
		file << "Total Bill:\t" << total << endl;
		file << endl;
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}	   
void FileManager::SaveRatingToFile(int id, int score, string comment, string filename)		// SaveRatingToFile function
{
	ofstream file(filename, ios::app);

	if (file.is_open())
	{
		file << "Rating Information: " << endl;
		file << endl;
		file << "User ID: " << id << endl;
		file << "Score: " << score << endl;
		file << "Comment: " << comment << endl;
		file << endl;
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}

}
void FileManager::RemoveMenuItemFromFile(string filename, int Id)		// RemoveMenuItemFromFile function
{
	ifstream f(filename);
	ofstream tempfile("Temp.txt");

	if (!f || !tempfile)
	{
		cout << "Error opening files!" << endl;
		return;
	}

	string l;
	bool removed = false;

	while (getline(f, l))
	{
		stringstream ss(l);
		int id;
		ss >> id;

		if (Id != id)
		{
			tempfile << l << endl;
		}
		else
		{
			removed = true;
		}
	}
	f.close();
	tempfile.close();

	if (removed)
	{
		remove(filename.c_str());
		rename("Temp.txt", filename.c_str());
		cout << "Item Removed Successfully" << endl;
	}
	else
	{
		remove("Temp.txt");
		cout << "Item Not Found" << endl;
	}
}
void FileManager::Display(string filename)		// Display function
{
	ifstream file(filename);

	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}


// Helper Functions for Administrator Class 

void ViewInventory()		// shows available items in the inventory for student, faculty and non faculty
{
	cout << "Inventory for all types of menus: " << endl;
	ifstream file("StudentMenuItems.txt");
	ifstream file1("FacultyMenuItems.txt");
	ifstream file2("NonFacultyMenuItems.txt");

	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}

	if (file1.is_open())
	{
		string line;
		while (getline(file1, line))
		{
			cout << line << endl;
		}
		file1.close();
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}

	if (file2.is_open())
	{
		string line;
		while (getline(file2, line))
		{
			cout << line << endl;
		}
		file2.close();
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}

	AdminMenu2();
}
void AddDiscountPromotion()		// adds discount/promotion on items for student, faculty and non faculty
{
	int choice;
	cout << "For which type of customer do you want to add discount/promotion?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		ifstream file("StudentMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to add discount/promotion: " << endl;
			cin >> Id;

			string line;
			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					int discount;
					cout << "Enter the discount: " << endl;
					cin >> discount;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(discount));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		break;
	}

	case 2:
	{
		ifstream file("FacultyMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to add discount/promotion: " << endl;
			cin >> Id;

			string line;
			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					int discount;
					cout << "Enter the discount: " << endl;
					cin >> discount;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(discount));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		break;
	}

	case 3:
	{
		ifstream file("NonFacultyMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to add discount/promotion: " << endl;
			cin >> Id;

			string line;
			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					int discount;
					cout << "Enter the discount: " << endl;
					cin >> discount;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(discount));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		break;
	}
	}
	AdminMenu2();

}   
void RemoveDiscountPromotion()		// removes discount/promotion on items for student, faculty and non faculty
{
	cout << "For which type of customer do you want to remove discount/promotion?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: ";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		ifstream file("StudentMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to remove discount/promotion: " << endl;
			cin >> Id;

			string line;

			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(0));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();

			ofstream file("StudentMenuItems.txt", ios::app);

			if (file.is_open())
			{
				file << line << endl;
				file.close();

				cout << "Discount / Promotion removed successfully!" << endl;
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		break;

	}

	case 2:
	{
		ifstream file("FacultyMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to remove discount/promotion: " << endl;
			cin >> Id;

			string line;

			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(0));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();

			ofstream file("FacultyMenuItems.txt", ios::app);

			if (file.is_open())
			{
				file << line << endl;
				file.close();

				cout << "Discount / Promotion removed successfully!" << endl;
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		break;
	}

	case 3:
	{
		ifstream file("NonFacultyMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to remove discount/promotion: " << endl;
			cin >> Id;

			string line;

			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(0));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();

			ofstream file("NonFacultyMenuItems.txt", ios::app);

			if (file.is_open())
			{
				file << line << endl;
				file.close();

				cout << "Discount / Promotion removed successfully!" << endl;
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		break;
	}

	default:
	{
		cout << "Invalid choice!" << endl;
		break;
	}
	}

	AdminMenu2();
}
void UpdateDiscountPromotion()		// updates discount/promotion on items for student, faculty and non faculty
{
	cout << "For which type of customer do you want to update discount/promotion?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: ";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		ifstream file("StudentMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to update discount/promotion: " << endl;
			cin >> Id;

			string line;

			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					int discount;
					cout << "Enter the new discount: " << endl;
					cin >> discount;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(discount));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();

			ofstream file("StudentMenuItems.txt", ios::app);

			if (file.is_open())
			{
				file << line << endl;
				file.close();

				cout << "Discount / Promotion updated successfully!" << endl;
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
	}

	case 2:
	{
		ifstream file("FacultyMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to update discount/promotion: " << endl;
			cin >> Id;

			string line;

			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					int discount;
					cout << "Enter the new discount: " << endl;
					cin >> discount;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(discount));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();

			ofstream file("FacultyMenuItems.txt", ios::app);

			if (file.is_open())
			{
				file << line << endl;
				file.close();

				cout << "Discount / Promotion updated successfully!" << endl;
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
	}

	case 3:
	{
		ifstream file("NonFacultyMenuItems.txt", ios::app);

		if (file.is_open())
		{
			int Id;
			cout << "Enter the Id of the Item on which you want to update discount/promotion: " << endl;
			cin >> Id;

			string line;

			while (getline(cin, line))
			{
				if (line.find(to_string(Id)) != string::npos)
				{
					cout << "Item found!" << endl;
					cout << line << endl;

					int discount;
					cout << "Enter the new discount: " << endl;
					cin >> discount;

					line.replace(line.find(to_string(Id)), to_string(Id).length(), to_string(discount));
					break;
				}
				else
				{
					cout << "Item not found!" << endl;
				}
			}
			file.close();

			ofstream file("NonFacultyMenuItems.txt", ios::app);

			if (file.is_open())
			{
				file << line << endl;
				file.close();

				cout << "Discount / Promotion updated successfully!" << endl;
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
	}

	default:
	{
		cout << "Invalid choice!" << endl;
		break;
	}
	}

	AdminMenu2();
}

// Administrator Class

void Administrator::ViewMenu()		// View menu for every customer
{
	int c;
	cout << "For Which customers you want to view the menu?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "4. Back" << endl;
	cout << "Enter your choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		ifstream file("StudentMenuItems.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		AdminMenu2();
		break;
	}
	case 2:
	{
		ifstream file("FacultyMenuItems.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		AdminMenu2();
		break;
	}
	case 3:
	{
		ifstream file("NonFacultyMenuItems.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		AdminMenu2();
		break;
	}
	case 4:
	{
		AdminMenu2();
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		AdminMenu2();
		break;
	}
	}
}
void Administrator::AddMenuItem()		// adds menu item for student, faculty and non faculty
{
	MenuItem m;
	m.AddMenuItem();
}
void Administrator::RemoveMenuItem()		// removes menu item for student, faculty and non faculty
{
	int choice;
	cout << "Enter the Type of customer for which you want to remove the menu item: " << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		int id;
		cout << "Enter the Item ID to remove for Students: " << endl;
		cin >> id;

		string filename = "StudentMenuItems.txt";

		FileManager f;
		f.RemoveMenuItemFromFile(filename, id);

		cout << "Item Removed Successfully for Students" << endl;
		AdminMenu2();
		break;
	}
	case 2:
	{
		int id;
		cout << "Enter the Item ID to remove for Faculty: " << endl;
		cin >> id;

		string filename = "FacultyMenuItems.txt";

		FileManager f;
		f.RemoveMenuItemFromFile(filename, id);

		cout << "Item Removed Successfully for Faculty" << endl;
		AdminMenu2();
		break;
	}
	case 3:
	{
		int id;
		cout << "Enter the Item ID to remove for Non-Faculty: " << endl;
		cin >> id;

		string filename = "NonFacultyMenuItems.txt";

		FileManager f;
		f.RemoveMenuItemFromFile(filename, id);

		cout << "Item Removed Successfully for Non-Faculty" << endl;
		AdminMenu2();
		break;
	}
	default:
	{
		cout << "Invalid choice" << endl;
		AdminMenu2();
		break;
	}
	}
}
void Administrator::ManageInventory()		// manages inventory for student, faculty and non faculty
{
	cout << "Manage Inventory" << endl;
	cout << "1. Add Item" << endl;
	cout << "2. Remove Item" << endl;
	cout << "3. Update Item" << endl;
	cout << "4. View Inventory" << endl;
	cout << "5. Back" << endl;
	cout << "Enter your choice: ";
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		AddMenuItem();
		AdminMenu2();
		break;
	}
	case 2:
	{
		RemoveMenuItem();
		break;
	}
	case 3:
	{
		MenuItem m;
		m.UpdateStock();
		AdminMenu2();
		break;
	}
	case 4:
	{
		ViewInventory();
		break;
	}
	case 5:
	{
		AdminMenu2();
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		AdminMenu2();
		break;
	}
	}
}
void Administrator::ManageDiscountPromotion()		// manages discount/promotion for student, faculty and non faculty
{
	cout << "Manage Discount/Promotion" << endl;
	cout << "1. Add Discount/Promotion" << endl;
	cout << "2. Remove Discount/Promotion" << endl;
	cout << "3. Update Discount/Promotion" << endl;
	cout << "4. Back" << endl;
	cout << "Enter your choice: " << endl;
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		AddDiscountPromotion();
		break;
	}
	case 2:
	{
		RemoveDiscountPromotion();
		break;
	}
	case 3:
	{
		UpdateDiscountPromotion();
		break;
	}
	case 4:
	{
		AdminMenu2();
		break;
	}

	default:
	{
		cout << "Invalid choice!" << endl;
		break;
	}
	}
}
void Administrator::ViewOrderHistory()		// views order history for student, faculty and non faculty
{
	cout << "For which type of customer do you want to view order history?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: ";
	int c;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		ifstream file("StudentOrders.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		AdminMenu2();
		break;
	}

	case 2:
	{
		ifstream file("FacultyOrders.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		AdminMenu2();
		break;
	}

	case 3:
	{
		ifstream file("NonFacultyOrders.txt");

		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{
				cout << line << endl;
			}
			file.close();
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		AdminMenu2();
		break;
	}

	default:
	{
		cout << "Invalid choice!" << endl;
		break;
	}
	}
	AdminMenu2();
}
void Administrator::AddNotification()			// adds notification for student, faculty and non faculty
{
	string n;
	cout << "Enter the notification: " << endl;
	cout << "Use underscore instead of space" << endl;
	cin >> n;

	ofstream file("Notifications.txt", ios::app);

	if (file.is_open())
	{
		file << n << endl;
		file.close();

		cout << "Notification added successfully! Notification saved to the file: " << endl;
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}
	AdminMenu2();
}
void Administrator::RemoveNotification()		// removes notification for student, faculty and non faculty
{
	ifstream file("Notifications.txt");

	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}

		file.close();
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}

	cout << "Enter the notification that you want to remove: " << endl;
	string n;
	cin >> n;

	ofstream tempFile("TempNotifications.txt");

	if (file.is_open() && tempFile.is_open())
	{
		string line;
		while (getline(file, line))
		{
			if (line.find(n) != string::npos)
			{
				cout << "Notification found!" << endl;
				cout << line << endl;
			}
			else
			{
				tempFile << line << endl;
			}
		}
		file.close();
		tempFile.close();

		remove("Notifications.txt");
		rename("TempNotifications.txt", "Notifications.txt");

		cout << "Notification removed successfully!" << endl;
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}
	AdminMenu2();
}
void Administrator::RateMenuItem()		// rates menu item for student, faculty and non faculty
{
	Rating r;
	r.Rate();
}
void Administrator::DisplayFromFile()		// displays data from file for student, faculty and non faculty	
{
	int choice;
	cout << "Enter what you want to display from file" << endl;
	cout << "1. Users" << endl;
	cout << "2. Menu Items" << endl;
	cout << "3. Orders" << endl;
	cout << "4. Notifications" << endl;
	cout << "5. Ratings" << endl;
	cout << "6. Payments" << endl;
	cout << "7. Back" << endl;
	cout << "Enter your choice: " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
		FileManager f;
		f.Display("Users.txt");
		AdminMenu2();
		break;
	}
	case 2:
	{
		int c;
		cout << "For which type of customer you want to display menu items?" << endl;
		cout << "1. Student" << endl;
		cout << "2. Faculty" << endl;
		cout << "3. Non-Faculty" << endl;
		cout << "Enter your choice: " << endl;
		cin >> c;

		switch (c)
		{
		case 1:
		{
			FileManager f;
			f.Display("StudentMenuItems.txt");
			AdminMenu2();
			break;
		}
		case 2:
		{
			FileManager f;
			f.Display("FacultyMenuItems.txt");
			AdminMenu2();
			break;
		}
		case 3:
		{
			FileManager f;
			f.Display("NonFacultyMenuItems.txt");
			AdminMenu2();
			break;
		}
		default:
		{
			cout << "Invalid choice!" << endl;
			AdminMenu2();
			break;
		}
		}
		break;
	
	}
	case 3:
	{
		int c;
		cout << "For which type of customer you want to display orders?" << endl;
		cout << "1. Student" << endl;
		cout << "2. Faculty" << endl;
		cout << "3. Non-Faculty" << endl;
		cout << "Enter your choice: " << endl;
		cin >> c;

		switch (c)
		{
		case 1:
		{
			FileManager f;
			f.Display("StudentOrders.txt");
			AdminMenu2();
			break;
		}
		case 2:
		{
			FileManager f;
			f.Display("FacultyOrders.txt");
			AdminMenu2();
			break;
		}
		case 3:
		{
			FileManager f;
			f.Display("NonFacultyOrders.txt");
			AdminMenu2();
			break;
		}
		default:
		{
			cout << "Invalid choice!" << endl;
			AdminMenu2();
			break;
		}
		}
		break;
	}
	case 4:
	{
		FileManager f;
		f.Display("Notifications.txt");
		AdminMenu2();
		break;
	}
	case 5:
	{
		FileManager f;
		f.Display("StudentRatings.txt");
		f.Display("FacultyRatings.txt");
		f.Display("NonFacultyRatings.txt");
		AdminMenu2();
		break;
	}
	case 6:
	{
		FileManager f;
		f.Display("StudentPayments.txt");
		f.Display("FacultyPayments.txt");
		f.Display("NonFacultyPayments.txt");
		AdminMenu2();
		break;
	}
	case 7:
	{
		AdminMenu2();
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		AdminMenu2();
		break;
	}
	}

}
void Administrator::ViewUsersFromFile()		// views users from file for student, faculty and non faculty
{
	FileManager f;
	f.Display("Users.txt");
	AdminMenu2();
}
void Administrator::ViewMenuItemsFromFile()		// views menu items from file for student, faculty and non faculty	
{
	int c;
	cout << "For which type of customer you want to display menu items?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		FileManager f;
		f.Display("StudentMenuItems.txt");
		AdminMenu2();
		break;
	}
	case 2:
	{
		FileManager f;
		f.Display("FacultyMenuItems.txt");
		AdminMenu2();
		break;
	}
	case 3:
	{
		FileManager f;
		f.Display("NonFacultyMenuItems.txt");
		AdminMenu2();
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		AdminMenu2();
		break;
	}
	}

}
void Administrator::ViewOrdersFromFile()		// views orders from file for student, faculty and non faculty
{
	int c;
	cout << "For which type of customer you want to display orders?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		FileManager f;
		f.Display("StudentOrders.txt");
		AdminMenu2();
		break;
	}
	case 2:
	{
		FileManager f;
		f.Display("FacultyOrders.txt");
		AdminMenu2();
		break;
	}
	case 3:
	{
		FileManager f;
		f.Display("NonFacultyOrders.txt");
		AdminMenu2();
		break;
	}
	default:
	{
		cout << "Invalid choice!" << endl;
		AdminMenu2();
		break;
	}
	}
}
void Administrator::ViewRatingsFromFile()		// views ratings from file for student, faculty and non faculty
{
	FileManager f;
	f.Display("StudentRatings.txt");
	f.Display("FacultyRatings.txt");
	f.Display("NonFacultyRatings.txt");
	AdminMenu2();
}
void Administrator::ViewPaymentsFromFile()		// views payments from file for student, faculty and non faculty
{
	FileManager f;
	f.Display("StudentPayments.txt");
	f.Display("FacultyPayments.txt");
	f.Display("NonFacultyPayments.txt");
	AdminMenu2();
}
void Administrator::CalculateMonthlyEarnings()		// calculates monthly earnings for student, faculty and non faculty
{
	double monthlyearnings = 0;
	ifstream file("StudentPayments.txt");

	if (file.is_open())
	{
		double total = 0;
		string line;
		while (getline(file, line))
		{
			stringstream ss(line);
			string word;
			int count = 0;
			while (ss >> word)
			{
				if (count == 2)
				{
					total += stod(word);
				}
				count++;
			}
		}
		file.close();

		cout << "Total earnings from Student: " << total << endl;
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}

	ifstream file1("FacultyPayments.txt");

	if (file1.is_open())
	{
		double total = 0;
		string line;
		while (getline(file1, line))
		{
			stringstream ss(line);
			string word;
			int count = 0;
			while (ss >> word)
			{
				if (count == 2)
				{
					total += stod(word);
				}
				count++;
			}
		}
		file1.close();

		cout << "Total earnings from Faculty: " << total << endl;
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}

	ifstream file2("NonFacultyPayments.txt");

	if (file2.is_open())
	{
		double total = 0;
		string line;
		while (getline(file2, line))
		{
			stringstream ss(line);
			string word;
			int count = 0;
			while (ss >> word)
			{
				if (count == 2)
				{
					total += stod(word);
				}
				count++;
			}
		}
		file2.close();

		cout << "Total earnings from Non-Faculty: " << total << endl;
	}
	else
	{
		cout << "Unable to open file!" << endl;
	}
	AdminMenu2();
}
void Administrator::Logout()		// logs out administrator
{
	cout << "You have been logged out successfully!" << endl;
	exit(0);
}


// Helper Functions for Order Class

void Order::AddItemsToOrder(const string& filename, int ItemLimit)	
{
	ifstream file(filename);

	if (file.is_open())
	{
		int count = 0;
		string line;
		while (getline(file, line))
		{
			count++;
		}
		file.close();

		if (count < ItemLimit)
		{
			ofstream f(filename, ios::app);

			if (f.is_open())
			{
				string name;
				double price;

				cout << "Enter the name of the item: " << endl;
				cin >> name;

				cout << "Enter the price of the item: " << endl;
				cin >> price;

				f << name << " " << price << endl;

				cout << "Item added successfully!" << endl;
				f.close();
				StaffMenu2();
			}
			else
			{
				cout << "Unable to open file!" << endl;
				StaffMenu2();
			}
		}
		else
		{
			cout << "You have reached the limit of items that you can add to the order!" << endl;
			StaffMenu2();
		}
	}
	else
	{
		cout << "Unable to open file!" << endl;
		StaffMenu2();
	}
}
void Order::RemoveItemsFromOrder(const string& filename)
{
	ifstream file(filename);

	if (file.is_open())
	{
		int count = 0;
		string line;
		string items[10];

		while (getline(file, line) && count < 10)
		{
			items[count++] = line;
		}
		file.close();

		if (count > 0)
		{
			cout << "Items in the order: " << endl;
			for (int i = 0; i < count; i++)
			{
				cout << i + 1 << ". " << items[i] << endl;
			}

			int choice;
			cout << "Enter the number of the item you want to remove: " << endl;
			cin >> choice;

			if (choice >= 1 && choice <= count)
			{
				for (int i = choice - 1; i < count - 1; i++)
				{
					items[i] = items[i + 1];
				}
				count--;

				ofstream f(filename);

				for (int i = 0; i < count; i++)
				{
					f << items[i] << endl;
				}
				f.close();

				cout << "Item removed successfully!" << endl;
				StaffMenu2();
			}
			else
			{
				cout << "Invalid choice!" << endl;
			}
		}
		else
		{
			cout << "No items in the order!" << endl;
			StaffMenu2();
		}
	}
	else
	{
		cout << "Unable to open file!" << endl;
		StaffMenu2();
	}

}

// Order Class

// Constructors and Destructors
Order::Order()
{
	OrderID = 0;
	CustomerID = 0;
	ItemsOrdered[10] = { 0 };
	TotalPrice = 0;
	OrderStatus = "";
}
Order::Order(int id, int cid, int items[], int total, string status)
{
	OrderID = id;
	CustomerID = cid;
	for (int i = 0; i < 10; i++)
	{
		ItemsOrdered[i] = items[i];
	}
	TotalPrice = total;
	OrderStatus = status;
}
Order::~Order()
{
}

// Setters and Getters
void Order::SetOrderID(int id)
{
	OrderID = id;
}
void Order::SetCustomerID(int id)
{
	CustomerID = id;
}
void Order::SetItemsOrdered(int items[10])
{
	for (int i = 0; i < 10; i++)
	{
		ItemsOrdered[i] = items[i];
	}
}
void Order::SetTotalPrice(double total)
{
	TotalPrice = total;
}
void Order::SetOrderStatus(string status)
{
	OrderStatus = status;
}

int Order::GetOrderID()
{
	return OrderID;
}
int Order::GetCustomerID()
{
	return CustomerID;
}
int* Order::GetItemsOrdered()
{
	return ItemsOrdered;
}
double Order::GetTotalPrice()
{
	return TotalPrice;
}
string Order::GetOrderStatus()
{
	return OrderStatus;
}

// Member Functions
void Order::AddItem()		// adds item for student, faculty and non faculty
{
	int c;
	cout << "In Which Order Do you want to add Item?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		AddItemsToOrder("StudentOrders.txt", 10);
		break;
	}
	case 2:
	{
		AddItemsToOrder("FacultyOrders.txt", 10);
		break;
	}
	case 3:
	{
		AddItemsToOrder("NonFacultyOrders.txt", 10);
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		StaffMenu2();
		break;
	}
	}
}
void Order::RemoveItem()		// removes item for student, faculty and non faculty
{
	int c;
	cout << "In Which Order Do you want to remove Item?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		RemoveItemsFromOrder("StudentOrders.txt");
		break;
	}
	case 2:
	{
		RemoveItemsFromOrder("FacultyOrders.txt");
		break;
	}
	case 3:
	{
		RemoveItemsFromOrder("NonFacultyOrders.txt");
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		StaffMenu2();
		break;
	}
	}

}
void Order::CalculateTotal()		// calculates total for student, faculty and non faculty	
{
	int c;
	cout << "In Which Order Do you want to Calculate Total?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		ifstream file("StudentOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();
		break;
	}
	case 2:
	{
		ifstream file("FacultyOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();
		break;
	}
	case 3:
	{
		ifstream file("NonFacultyOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		StaffMenu2();
		break;
	}
	}
}
void Order::ConfirmOrder()		// confirms order for student, faculty and non faculty
{
	int c;
	cout << "Which Order Do you want to Confirm?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		ifstream file("StudentOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}

		cout << "Do you want to confirm the order?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			ofstream file("StudentOrders.txt");

			if (file.is_open())
			{
				file << "Order Confirmed!" << endl;
				file.close();

				cout << "Order confirmed successfully!" << endl;
				SetOrderStatus("Confirmed");
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
			break;
		}
		case 2:
		{
			break;
		}
		default:
		{
			cout << "Invalid choice!" << endl;
			break;
		}
		}
		StaffMenu2();
		break;
	}
	case 2:
	{
		ifstream file("FacultyOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}

		cout << "Do you want to confirm the order?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			ofstream file("FacultyOrders.txt");

			if (file.is_open())
			{
				file << "Order Confirmed!" << endl;
				file.close();

				cout << "Order confirmed successfully!" << endl;
				SetOrderStatus("Confirmed");
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
			break;
		}
		case 2:
		{
			break;
		}
		default:
		{
			cout << "Invalid choice!" << endl;
			break;
		}
		}
		StaffMenu2();
		break;
	}

	case 3:
	{
		ifstream file("NonFacultyOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}

		cout << "Do you want to confirm the order?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			ofstream file("NonFacultyOrders.txt");

			if (file.is_open())
			{
				file << "Order Confirmed!" << endl;
				file.close();

				cout << "Order confirmed successfully!" << endl;
				SetOrderStatus("Confirmed");
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
			break;
		}
		case 2:
		{
			break;
		}
		default:
		{
			cout << "Invalid choice!" << endl;
			break;
		}
		}
		StaffMenu2();
		break;
	}
	}
}
void Order::CancelOrder()		// cancels order for student, faculty and non faculty
{
	int c;
	cout << "Which Order Do you want to Cancel?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		ofstream file("StudentOrders.txt");

		if (file.is_open())
		{
			file << "Order Cancelled!" << endl;
			file.close();

			cout << "Order cancelled successfully!" << endl;
			SetOrderStatus("Cancelled");
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();
		break;
	}
	case 2:
	{
		ofstream file("FacultyOrders.txt");

		if (file.is_open())
		{
			file << "Order Cancelled!" << endl;
			file.close();

			cout << "Order cancelled successfully!" << endl;
			SetOrderStatus("Cancelled");
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();
		break;
	}
	case 3:
	{
		ofstream file("NonFacultyOrders.txt");

		if (file.is_open())
		{
			file << "Order Cancelled!" << endl;
			file.close();

			cout << "Order cancelled successfully!" << endl;
			SetOrderStatus("Cancelled");
		}
		else
		{
			cout << "Unable to open file!" << endl;
		}
		StaffMenu2();
		break;
	}
	default:
	{
		cout << "Invalid Choice" << endl;
		StaffMenu2();
		break;
	}
	}
}

// Rate Class

// Constructors and Destructors
Rating::Rating()
{
	RatingID = 0;
	MenuItemID = 0;
	CustomerID = 0;
	Score = 0;
	Comment = "";
}
Rating::Rating(int id, int mid, int cid, int score, string comment)
{
	RatingID = id;
	MenuItemID = mid;
	CustomerID = cid;
	Score = score;
	Comment = comment;
}
Rating::~Rating()
{
}

// Setters and Getters
void Rating::SetRatingID(int id)
{
	RatingID = id;
}
void Rating::SetMenuItemID(int id)
{
	MenuItemID = id;
}
void Rating::SetCustomerID(int id)
{
	CustomerID = id;
}
void Rating::SetScore(int score)
{
	Score = score;
}
void Rating::SetComment(string comment)
{
	Comment = comment;
}

int Rating::GetRatingID()
{
	return RatingID;
}
int Rating::GetMenuItemID()
{
	return MenuItemID;
}
int Rating::GetCustomerID()
{
	return CustomerID;
}
int Rating::GetScore()
{
	return Score;
}
string Rating::GetComment()
{
	return Comment;
}

// Member Functions
void Rating::Rate()
{
	int c;
	cout << "Enter from which menu do you want to rate the item" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter your choice: ";
	cin >> c;

	switch (c)
	{
	case 1:
	{
		CafeMenuStudent();
		cout << "Enter the ID of the item you want to rate: " << endl;
		int id;
		cin >> id;

		cout << "Enter the score: " << endl;
		int score;
		cin >> score;

		cout << "Enter the comment: " << endl;
		string comment;
		cin >> comment;

		FileManager f;
		f.SaveRatingToFile(id, score, comment, "StudentRatings.txt");
	}
	case 2:
	{
		CafeMenuFaculty();
		cout << "Enter the ID of the item you want to rate: " << endl;
		int id;
		cin >> id;

		cout << "Enter the score: " << endl;
		int score;
		cin >> score;

		cout << "Enter the comment: " << endl;
		string comment;
		cin >> comment;

		FileManager f;
		f.SaveRatingToFile(id, score, comment, "FacultyRatings.txt");

	}
	case 3:
	{
		CafeMenuNonFaculty();
		cout << "Enter the ID of the item you want to rate: " << endl;
		int id;
		cin >> id;

		cout << "Enter the score: " << endl;
		int score;
		cin >> score;

		cout << "Enter the comment: " << endl;
		string comment;
		cin >> comment;

		FileManager f;
		f.SaveRatingToFile(id, score, comment, "NonFacultyRatings.txt");
	}
	default:
	{
		cout << "Invalid choice!" << endl;

		break;
	}
	}
}

// Payment Class

// Constructors and Destructors
Payment::Payment()
{
	PaymentID = 0;
	OrderID = 0;
	Amount = 0;
	PaymentStatus = "";
}
Payment::Payment(int id, int oid, double amount, string status)
{
	PaymentID = id;
	OrderID = oid;
	Amount = amount;
	PaymentStatus = status;
}
Payment::~Payment()
{
}

// Setters and Getters
void Payment::SetPaymentID(int id)
{
	PaymentID = id;
}
void Payment::SetOrderID(int id)
{
	OrderID = id;
}
void Payment::SetAmount(double amount)
{
	Amount = amount;
}
void Payment::SetPaymentStatus(string status)
{
	PaymentStatus = status;
}

int Payment::GetPaymentID()
{
	return PaymentID;
}
int Payment::GetOrderID()
{
	return OrderID;
}
double Payment::GetAmount()
{
	return Amount;
}
string Payment::GetPaymentStatus()
{
	return PaymentStatus;
}

// Member Functions
void Payment::ProcessPayment()
{
	int c;
	cout << "Which Order Do you want to Process Payment?" << endl;
	cout << "1. Student" << endl;
	cout << "2. Faculty" << endl;
	cout << "3. Non-Faculty" << endl;
	cout << "Enter Your Choice: " << endl;
	cin >> c;

	switch (c)
	{
	case 1:
	{
		ifstream file("StudentOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
			StaffMenu2();
		}

		cout << "Do you want to process the payment?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			ofstream file("StudentPayments.txt", ios::app);

			if (file.is_open())
			{
				file << "Payment Processed!" << endl;
				file.close();

				cout << "Payment processed successfully!" << endl;
				SetPaymentStatus("Processed");
			}
			else
			{
				cout << "Unable to open file!" << endl;
			}
			break;
		}
		case 2:
		{
			break;
		}
		default:
		{
			cout << "Invalid choice!" << endl;
			break;
		}
		}
		StaffMenu2();
		break;
	}
	case 2:
	{
		ifstream file("FacultyOrders.txt");

		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file" << endl;
			StaffMenu2();
		}

		cout << "Do you want to process the payment?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			ofstream file("FacultyPayments.txt", ios::app);
			
			if (file.is_open())
			{
				file << "Payment Processed!" << endl;
				file.close();

				cout << "Payment processed successfully!" << endl;
				SetPaymentStatus("Processed");
			}
			else
			{
				cout << "Unable to open file!" << endl;
				StaffMenu2();
			}
			break;
		}
		case 2:
		{
			StaffMenu2();
			break;
		}
		}
	}
	case 3:
	{
		ifstream file("NonFacultyOrders.txt");
		
		if (file.is_open())
		{
			int total = 0;
			string line;
			while (getline(file, line))
			{
				stringstream ss(line);
				string name;
				double price;

				ss >> name >> price;

				total += price;
			}
			file.close();

			cout << "Total: " << total << endl;
		}
		else
		{
			cout << "Unable to open file!" << endl;
			StaffMenu2();
		}

		cout << "Do you want to process the payment?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cout << "Enter your choice: " << endl;
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			ofstream file("NonFacultyPayments.txt", ios::app);

			if (file.is_open())
			{
				file << "Payment Processed!" << endl;
				file.close();

				cout << "Payment processed successfully!" << endl;
				SetPaymentStatus("Processed");
			}
			else
			{
				cout << "Unable to open file!" << endl;
				StaffMenu2();
			}
			break;
		}
		case 2:
		{
			break;
		}
		default:
		{
			cout << "Invalid choice!" << endl;
			StaffMenu2();
			break;
		}
		}
		StaffMenu2();
		break;
	}

	}
}