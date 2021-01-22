#pragma once


class Basket
{
	// Public methods
	public:
		Basket();

	// Public member variables
	public:
		int m_nBananas;
		int m_nApples;
		int m_nGrapes;
};

class Store
{
	public:
		Store(Basket*);
		void PrintShoppingList();

	// Public member variables
	public:
		int total;
		Basket m_pBasket;
};