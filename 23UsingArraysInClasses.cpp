// Using Arrays in Classes
// Author: REET

#include <iostream>
using namespace std;

class Shop
{
	int itemId[100];
	int itemPrice[100];
	int counter;

public:
	void initCounter(void) { counter = 0; };
	void setPrice(void);
	void displayPrice(void);
};

void Shop::setPrice(void)
{
	cout << "Enter Id of your item No. " << counter + 1 << ": ";
	cin >> itemId[counter];
	cout << "Enter Price of your item: ";
	cin >> itemPrice[counter];
	counter++;
};

void Shop ::displayPrice(void)
{
	for (int i = 0; i < counter; i++)
	{
		cout << "ItemID: " << itemId[i] << " Price: " << itemPrice[i] << endl;
	}
};

int main()
{
	Shop ration;
	ration.initCounter();
	int i;
	while (i < 4)
	{
		ration.setPrice();
		i++;
	}
	ration.displayPrice();
	return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter Id of your item No. 1: 1001
Enter Price of your item: 76 
Enter Id of your item No. 2: 1002
Enter Price of your item: 76 
Enter Id of your item No. 3: 1003
Enter Price of your item: 87
Enter Id of your item No. 4: ^C
megha@megha-HP-Pavilion-Notebook:~/Desktop/C++Programs$ cd "/home/megha/Desktop/C++Programs/" && g++ 23UsingArraysInClasses.cpp -o 23UsingArraysInClasses && "/home/megha/Desktop/C++Programs/"23UsingArraysInClasses
Enter Id of your item No. 1: 1001
Enter Price of your item: 76 
Enter Id of your item No. 2: 1002
Enter Price of your item: 69
Enter Id of your item No. 3: 1003
Enter Price of your item: 46
Enter Id of your item No. 4: 1004
Enter Price of your item: 83
ItemID: 1001 Price: 76
ItemID: 1002 Price: 69
ItemID: 1003 Price: 46
ItemID: 1004 Price: 83
*/