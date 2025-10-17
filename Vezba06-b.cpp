// Vezba06-b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <stdio.h>
// funkcija za prikaz niza
void prikaziNiz(int niz[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", niz[i]);
	printf("\n");
}
int main()
{
	int a[10] = { 0,1,2,3,4}, n=5, i, k;
	prikaziNiz(a, n);
	// brisanje elementa sa indeksom k
	k = 1;
	for (i = k + 1; i < n; i++)
		a[i - 1] = a[i];
	n--;
	prikaziNiz(a, n);
	// dodavanje elementa na indeks k
	int br = 3;
	k = 1;
	for (i = n - 1; i >= k; i--)
		a[i + 1] = a[i];
	a[k] = br;
	n++;
	prikaziNiz(a, n);
	// brisanje na osnovu vrednosti
	br = 3;
	int j = 0;
	for (i = 0; i < n; i++)
		if (a[i] != br)
		{
			a[j] = a[i];
			j++;
		}
	n = j;
	prikaziNiz(a, n);
	// doavanje u sortirani niz
	br = 1;
	for (i = n - 1; (i >= 0) && (a[i] > br); i--)
		a[i + 1] = a[i];
	a[i + 1] = br;
	n++;
	prikaziNiz(a, n);
}
