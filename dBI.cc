#include <iostream>
#include<list>
using namespace std;

//Static binding
/*float sumNumbers(float a, float b) {
	return a + b;
}
float sumNumbers(float a, float b, float c) {
	return a + b + c;
}*/

//Dynamic binding
class User {
public:
	virtual void getPermissions() {
		cout << "Users can see limited info" << endl;
	}
};
class Superuser:public User {
public:
	void getPermissions() {
		cout << "Superusers can see all the info" << endl;
	}
};

int main()
{
	User u;
	Superuser s;
	list<User*>users;
	users.push_back(&u);
	users.push_back(&s);

	for (User* usrPtr : users)
		usrPtr->getPermissions();

	cin.get();
}
