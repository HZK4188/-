#include "FileName.h"

void Menu(){

	int choice;

	cout << "\t\t\t算法竞赛入门经典 \n\n";
	cout << "\t\t\t1、输入题目\n\n";
	cout << "\t\t\t2、算法调用\n\n";
	cout << "\t\t\t3、退出\n\n";

	cin >> choice;

	system("cls");
	Change(choice);
}

void Menu_2() {
	
	int choice;
	cout << "\t\t\t一、知识点 \n\n";
	cout << "\t\t\t1、递归\n\n";
	cout << "\t\t\t2、栈\n\n";

	cin >> choice;
	
	system("cls");
	Change(choice);
}

//递归菜单
void Recursion_menu() {
	int choice=0;
	cout << "\t\t\t1、递归计算阶乘\n\n";
	cout << "\t\t\t2、刽子手游戏\n\n";

	cin >> choice;

	system("cls");
	Recursion_change(choice);
}

void Stack() {
	
	int choice=0;

	cout << "\t\t\t栈\n\n";
	cout << "\t\t\t1、\n\n";

	
}
