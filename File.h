#pragma once
#include "FileName.h"

class File
{
private:
	string file_name;
	string content;
	
public:
	File();
	//创建并录入文件
	File(string File_name, string Content);
	//删除文件
	void Delect_file(string File_name);


};
 