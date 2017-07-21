#pragma once
#include "resource.h"
#include <direct.h>
#include <fstream>
#include <iostream>


#include <io.h> 
#include <locale>
#include <codecvt>
using namespace std;


#define VK_C 0x43

BOOL g_isStart = FALSE;

bool KeyPressed(int a);

void Start(HWND);
void Stop(HWND);

PBITMAPINFO CreateBitmapInfoStruct(HWND hwnd, HBITMAP hBmp);
void CreateBMPFile(HWND hwnd, LPTSTR pszFile, PBITMAPINFO pbi, HBITMAP hBMP, HDC hDC);

void LogTxt(LPCWSTR);