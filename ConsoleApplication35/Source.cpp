#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include"Aiko.h"
int h;
#define len 10
#define len1 10
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do
	{
		printf("Введите номер задания: ");
		scanf("%d", &h);
		switch (h)
		{
		case 1:
		{
			int mas[len], mas1[len1];
		 FillMass(mas, len);
			PrintMass(mas, len);
			SortMass(mas, len);
			PrintSortMass(mas, len);
			FillMass(mas1, len1);
			PrintMass(mas1, len1);
			SortMass(mas1, len1);
			PrintSortMass(mas1, len1);
			int *c =new int [len + len1];
			for (int i = 0; i<len; ++i)
			{
				c[i] = mas[i];
			}
		
			for (int i = len; i<len+len1; ++i)
			{
				c[i] = mas1[i - len];
			}
			printf("Сформируйте массив С[n+m], состаящий из элементов массивов А и В, упорядоченный по возростанию:\n");

			for (int i = 0; i<len+len1; ++i)
			{
				printf("%d\t", c[i]);
			}
			printf("\n");
		}
		break;
		case 2:
		{
			int a[len] = { 40,5,60,4,8,9,20,30,40,89 };
			int b[len1] = { 1,2,3,7,6,10,19,45,65,29};
		 MasSort(a,b,len,len1);

		}
		break;
		case 3:
		{
			int n;
			printf("Введите число:");
			scanf("%d", &n);
			ChetN(n);
		}
		break;
		case 4:
		{
			int n;
			printf("Введите число:");
			scanf("%d", &n);
			Prost(n);
		}
		break;

		default:
			break;
		}
	} while (h > 0);
}