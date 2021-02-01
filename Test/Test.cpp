// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Store.h"

int main()
{
	Basket pBasket;
	pBasket.m_nApples = 1; //FINAL KEEP

	Basket pBasket2;
	pBasket2.m_nGrapes = 2;

	Store Safeway(&pBasket);
	Store Walmart(&pBasket2);

	Safeway.PrintShoppingList();
	Walmart.PrintShoppingList();
}
