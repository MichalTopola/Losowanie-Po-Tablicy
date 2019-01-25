// ConsoleApplication13.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int wczytywanie(int taba[]) {
	int i = 0;
	cout << "Podaj 3 liczby " << endl;
	do {
		cin >> taba[i];
		i++;
	} while (i < 3);
	return 0 ;
}
int losuj(int tablica[],int tablicc[]) {
	
		int i=0;
		do{ 
			tablicc[i] =tablica[rand() % 3];
		i++;
		} while (i < 2);
		cout << "Pierwsze losowanie: " << tablicc[0]<<endl;
		cout << "Drugie losowanie: " << tablicc[1] << endl;;
			
	return 0;
}
int loswanie(int tablicaUzytkownika[],int tablicaLosowa[]){

	tablicaLosowa[0] =  tablicaUzytkownika[rand() % 3 ];
	return 0;
}
bool sprawdzaniePoprawnosci(int tablicaa[]) {
	
	if (tablicaa[0] == tablicaa[1])
				return true;
	else return false;
		
}

int main(int taba[],int losowaneLiczby[])
{
	srand(time(NULL));
	int liczbyUzytkownika[3];
	int wylosowanaTab[2];
	wczytywanie(liczbyUzytkownika);
	cout << "Liczby podane przez uzytkownika: "<<liczbyUzytkownika[0]<<" "<<liczbyUzytkownika[1]<<" "<<liczbyUzytkownika[2]<<  endl;
	losuj(liczbyUzytkownika, wylosowanaTab);
	bool sprawdzanie = sprawdzaniePoprawnosci(wylosowanaTab);
	int i;
	do {
		wylosowanaTab[0] = loswanie(liczbyUzytkownika, wylosowanaTab);

		
	} while (sprawdzanie == true);



    
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
