#pragma once
#include "FileName.h"

class File
{
private:
	string file_name;
	string content;
	
public:
	File();
	//������¼���ļ�
	File(string File_name, string Content);
	//ɾ���ļ�
	void Delect_file(string File_name);


};
 