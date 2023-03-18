// Auta.cpp : Defines the entry point for the application.
//

#include "Hudba.h"

#include <stdio.h>
#include <ctype.h>              // tolower
#include <stdlib.h>				// system

#include "HudbaDB.h"

struct t_album* prvni = NULL; // globalni ukazatel na prvni auto

void OnAdd()
{
	char interpret[STRING_SIZE], nazevAlba[STRING_SIZE];
	int rokVydani;

	printf("\nInterpret : ");         // dotazeme se na polozky
	scanf_s("%s", interpret, STRING_SIZE);
	while (getchar() != '\n');
	printf("\nNazev Alba : ");         // dotazeme se na polozky
	scanf_s("%s", nazevAlba, STRING_SIZE);
	while (getchar() != '\n');
	printf("\nRok Vydani : ");
	scanf_s("%d", &rokVydani);
	while (getchar() != '\n');
	add(interpret, nazevAlba, rokVydani, &prvni);         // volame pridavaci funkci
}

void OnDel()
{
	int rokVydani;

	printf("\nRok Vydani: ");
	scanf_s("%d", &rokVydani);
	while (getchar() != '\n');
	del(rokVydani, &prvni);         // volame mazaci funkci
}

void ShowAlbums()
{
	struct t_album* aktAlbum = prvni; // ukazatel na aktualni auto
	printf("\nZadejte prvni pismeno pro zobrazeni vsech alb jejich interpreti na nej zacinaji\nNebo zadejte ; pro zobrazeni vsech alb: ");
	char prvniZnak;
	scanf("%c", &prvniZnak);
	printf("\n\n");
	
	while (aktAlbum) // prochazeni seznamu
	{
		if ((prvniZnak == ';') || (prvniZnak != ';' and tolower(aktAlbum->interpret[0]) == prvniZnak))
			printf("%s %s %d\n", aktAlbum->interpret, aktAlbum->nazevAlba, aktAlbum->rokVydani); // tisk radku
		aktAlbum = aktAlbum->dalsi; // posun na dalsi auto
	}
	scanf("%c", &prvniZnak);
	getchar();
}

int main()
{
	char  cmd;

	do
	{
		system("cls");		// smaze obrazovku
		printf("A: Pridat     ");
		printf("D: Smazat     ");
		printf("P: Tisk     ");
		printf("Q: Konec\n\n");

		cmd = tolower(getchar());
		while (getchar() != '\n');

		switch (cmd)
		{
		case 'a':
			OnAdd();					// volame pridani
			break;
		case 'd':
			OnDel();					// volame mazani
			break;
		case 'p':
			ShowAlbums();
			break;
		}
	} while (cmd != 'q');     // koncime az pri Q
	return 0;
}


