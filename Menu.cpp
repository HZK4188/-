#include "FileName.h"

void Menu(){

	int choice;

	cout << "\t\t\t�㷨�������ž��� \n\n";
	cout << "\t\t\t1��������Ŀ\n\n";
	cout << "\t\t\t2���㷨����\n\n";
	cout << "\t\t\t3���˳�\n\n";

	cin >> choice;

	system("cls");
	Change(choice);
}

void Menu_2() {
	
	int choice;
	cout << "\t\t\tһ��֪ʶ�� \n\n";
	cout << "\t\t\t1���ݹ�\n\n";
	cout << "\t\t\t2��ջ\n\n";

	cin >> choice;
	
	system("cls");
	Change(choice);
}

//�ݹ�˵�
void Recursion_menu() {
	int choice=0;
	cout << "\t\t\t1���ݹ����׳�\n\n";
	cout << "\t\t\t2����������Ϸ\n\n";

	cin >> choice;

	system("cls");
	Recursion_change(choice);
}

void Stack() {
	
	int choice=0;

	cout << "\t\t\tջ\n\n";
	cout << "\t\t\t1��\n\n";

	
}
