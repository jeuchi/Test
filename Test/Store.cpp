#include <stdio.h>
#include "Store.h"


Basket::Basket() 
{
	m_nBananas = 0;
	m_nApples = 0;
	m_nGrapes = 0;
}

Store::Store(Basket* pBasket)
{
	if (!pBasket)
	{
		printf("No pointer given\n");
		return;
	}
	m_pBasket = *pBasket;
	total = 0;
}

void Store::PrintShoppingList()
{
	printf("Bananas: %d\nApples: %d\nGrapes: %d\n", m_pBasket.m_nBananas, m_pBasket.m_nApples, m_pBasket.m_nGrapes);
}

