#include "FileName.h"

//һ���˵�
void Change(int& choice) {
	switch (choice)
	{
	case 1:
		Recursion_menu();
		break;
	case 2:	
		Menu_2();
		break;
	case 0:
		exit; break;
	default:
		cout << "�����ʽ���󣡣���\n\n";
 		break;
	}
}

void Recursion_change(int& choice) {
	switch (choice)
	{
	case 1: //�׳�
		int result;
		cout << "��������Ҫ����׳˵����֣�\n";
		cin >> result;
		cout << "���Ϊ��" << factorial(result) <<"\n";	
		break;
	case 2:;;
	default:
		break;
	}
}

void Stack(int& choice) {
	switch (choice ) {
	case 1:;;
	}
}