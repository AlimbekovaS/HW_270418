//2. ��������� ������ ��� �������� ������� ����� : ����, �������, �������������.� ������ ������ ���� ����������� 
//��������++, --, != , == , >, <, >> , << , =, +=, -=, ().��������� ������������ ������, ������ ������ �������� ������.
#include"library.h"
#include"Circle.h"
#include"Square.h"

int main()
{
	setlocale(LC_ALL, "ru");
	size_t kol;
	cout << "������� ���-�� ������: ";
	cin >> kol;
	Square *Sq = new Square[kol]; //sozdaem dinamicheski massiv obektov klassa
	
	for (int i = 0; i < kol; i++) //zapolniaem 
	{
		Sq[i] = rand() % 10;
	}
	for (int i = 0; i < kol; i++)
	{
		cout<<Sq[i];
		cout << endl;
		ChangeA(Sq[i]);
	}
	
	
	delete[]Sq;
	
	system("pause");
	return 0;
}