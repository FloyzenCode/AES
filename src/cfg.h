#pragma once
#include <Windows.h>
#include <iostream>

class configCMD {
public:
	void _config(void) {
		system("color FC");
		SetConsoleTitle(title);
		setlocale(NULL, _Command);
		system(_SysChcp);
	}
private:
	LPCWSTR title = L"AES - Algorithm encrypt";
	const char* _Command = "chcp 1251 > null";
	const char* _Color = "color FC";
	const char* _SysChcp = "chcp 1251 > null";
}; configCMD class_configCMD;