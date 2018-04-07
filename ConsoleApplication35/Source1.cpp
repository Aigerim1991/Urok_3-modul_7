#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include"Aiko.h"
int i, j,k;
void FillMass(int *mas, int len)
{
	for ( i = 0; i < len; i++)
	{
		mas[i] = 1 + rand() % 20;
	}
}

void PrintMass(int *mas, int len)
{
printf("До сортировки:\n ");	
for ( i = 0; i < len; i++)
	{
		printf("%d\t", mas[i]);
	}
printf("\n");
}
void SortMass(int *mas, int len)
{
	int temp = 0;
	for ( i = 0; i < len; i++)
	{
		for ( j = len-1; j >0; j--)
		{
			if (mas[j-1]>mas[j])
			{
				temp = mas[j - 1];
				mas[j - 1] = mas[j];
				mas[j] = temp;
				}
		}
	}

}
void PrintSortMass(int *mas, int len)
{
	printf("После сортировки:\n ");
	for (i = 0; i < len; i++)
	{
		printf("%d\t", mas[i]);
	}
	printf("\n");
}
void MasSort(int *a, int *b, int len, int len1)
{
	
int *c = new int[len + len1];
		for (int i = 0; i < len; ++i)
		{
			c[i] = a[i];
		}
		for (int i = len; i < len + len1; ++i)
		{
			c[i] = b[i - len];
		}
		printf("Необходимо создать третий массив в котором нужно собрать элементы массива А, которые не включаются в В :\n");

		for (int i = 0; i < len + len1; ++i)
		{
			printf("%d\t", c[i]);
		}
		printf("\n");


}
bool ChetN(int n)
{	
		if (n % 2 == 0)
			printf("Число четное-%d\n", n);
		else false;
		return n % 1;
}
bool Prost(int n)
{

	for (int i = 1; i <= 10; i++)
	{
		if (n % i == 0)
			printf("Число простое-%d", n);
		else
			return false;
	}
		

	return n > 1;
}
