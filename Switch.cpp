#include "FileName.h"

//一级菜单
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
		cout << "请入格式错误！！！\n\n";
 		break;
	}
}

void Recursion_change(int& choice) {
	switch (choice)
	{
	case 1: //阶乘
		int result;
		cout << "请输入你要计算阶乘的数字：\n";
		cin >> result;
		cout << "结果为：" << factorial(result) <<"\n";	
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