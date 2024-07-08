#pragma once
#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
void adminMenu();
void staffMenu();
void studentMenu();
void facultyMenu();
void nonFacultyMenu();
void StaffMenu2();
void CafeMenuStudent();
void CafeMenuFaculty();
void CafeMenuNonFaculty();

// Classes 

class User
{
protected:
	int UserID;
	string UserName, Password, UserType;

public:
	User();
	User(int UserID, string UserName, string Password, string UserType);
	~User();

	void SetUserID(const int& UserID);
	void SetUserName(const string& UserName);
	void SetPassword(const string& Password);
	void SetUserType(const string& UserType);

	int GetUserID() const;
	string GetUserName() const;
	string GetPassword() const;
	string GetUserType() const;

	// Helper Function (Extra)
	bool validatePassword(string p);
	bool VerifyCredentials(int id, string name, string pass, string type);

	void Register();
	void Login();
};

class Order
{
protected:
	int OrderID;
	int CustomerID;
	int ItemsOrdered[10];
	double TotalPrice;
	string OrderStatus;

public:
	Order();
	Order(int id, int cid, int items[], int total, string status);
	~Order();

	void SetOrderID(int OrderID);
	void SetCustomerID(int CustomerID);
	void SetItemsOrdered(int items[10]);
	void SetTotalPrice(double TotalPrice);
	void SetOrderStatus(string OrderStatus);

	int GetOrderID();
	int GetCustomerID();
	int* GetItemsOrdered();
	double GetTotalPrice();
	string GetOrderStatus();

	void AddItem();
	void RemoveItem();
	void CalculateTotal();
	void ConfirmOrder();
	void CancelOrder();

	void AddItemsToOrder(const string& filename, int ItemLimit);
	void RemoveItemsFromOrder(const string& filename);
};

class Rating
{
protected:
	int RatingID;
	int MenuItemID;
	int CustomerID;
	int Score;
	string Comment;

public:

	Rating();
	Rating(int RatingID, int MenuItemID, int CustomerID, int Score, string Comment);
	~Rating();

	void SetRatingID(int RatingID);
	void SetMenuItemID(int MenuItemID);
	void SetCustomerID(int CustomerID);
	void SetScore(int Score);
	void SetComment(string Comment);

	int GetRatingID();
	int GetMenuItemID();
	int GetCustomerID();
	int GetScore();
	string GetComment();

	void Rate();
};

class Payment
{
protected:
	int PaymentID;
	int OrderID;
	double Amount;
	string PaymentStatus;

public:
	Payment();
	Payment(int PaymentID, int OrderID, double Amount, string Status);
	~Payment();

	void SetPaymentID(int PaymentID);
	void SetOrderID(int OrderID);
	void SetAmount(double Amount);
	void SetPaymentStatus(string Status);

	int GetPaymentID();
	int GetOrderID();
	double GetAmount();
	string GetPaymentStatus();

	void ProcessPayment();
};


class Administrator : public User
{
public:
	void ViewMenu();
	void AddMenuItem();
	void RemoveMenuItem();
	void ManageInventory();
	void ManageDiscountPromotion();
	void ViewOrderHistory();
	void AddNotification();
	void RemoveNotification();
	void RateMenuItem();
	void DisplayFromFile();
	void ViewUsersFromFile();
	void ViewMenuItemsFromFile();
	void ViewOrdersFromFile();
	void ViewRatingsFromFile();
	void ViewPaymentsFromFile();
	void CalculateMonthlyEarnings();
	void Logout();
};

class MenuItem
{
protected:
	int ItemID;
	string ItemName;
	string ItemDescription;
	double Price;
	int QuantityInStock;

public:
	MenuItem();
	MenuItem(int ItemID, string ItemName, string ItemDescription, double Price, int QuantityInStock);
	~MenuItem();

	void SetItemID(int ItemID);
	void SetItemName(string ItemName);
	void SetItemDescription(string ItemDescription);
	void SetPrice(double Price);
	void SetQuantityInStock(int QuantityInStock);

	int GetItemID();
	string GetItemName();
	string GetItemDescription();
	double GetPrice();
	int GetQuantityInStock();

	void AddMenuItem();
	void UpdateStock();

};

class Customer : public User, public MenuItem
{
public:
	virtual void ViewMenu() = 0;
	virtual void PlaceOrder() = 0;
	virtual void ViewOrderHistory() = 0;
	virtual void ReserveTable() = 0;
	virtual void Logout() = 0;
};

class Student : public Customer
{
public:
	void ViewMenu();
	void PlaceOrder();
	void ViewOrderHistory();
	void ReserveTable();
	void Logout();
};

class Faculty : public Customer
{
public:
	void ViewMenu();
	void PlaceOrder();
	void ViewOrderHistory();
	void ReserveTable();
	void Logout();
};

class NonFaculty : public Customer
{
public:
	void ViewMenu();
	void PlaceOrder();
	void ViewOrderHistory();
	void ReserveTable();
	void Logout();
};

class CafeStaff : public User
{
public:
	void ViewMenu();
	void ProcessOrder();
	void AddMenuItem();
	void RemoveMenuItem();
	void CheckReservations();
	void Logout();
};


class FileManager
{
protected:
	string FileName;
	User* user;
	MenuItem* Menu;
	Order* order;
	Rating* rating;
	Payment* payment;

public:
	FileManager();
	FileManager(string f);
	~FileManager();
	
	void SaveUserToFile(int id, string name, string pass, string type);
	void SaveMenuItemToFile(int ItemID, string ItemName, string ItemDescription, int Price, int QuantityInStock, string filename);
	void SaveOrderToFile(string filename, int id[], int price[],int quantity[], int total, int n);
	void SaveRatingToFile(int id, int score, string comment, string filename);
	void SavePaymentToFile();

	void RemoveMenuItemFromFile(string filename, int Id);
	void Display(string filename);

};
