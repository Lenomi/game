#pragma once
#pragma once
#ifndef _MINH_H_
#define _MINH_H_

#include<iostream>
#include <stdio.h>
#include"console.h"
#include<Windows.h>
#include<conio.h>
#include<string>
#include<fstream>
using namespace std;

void menu(int size);
void TheLine();
void hide();
void resizeConsole(int width, int height);
void intro();
void TwoPlay(int index, string fileName,int size);
void AI(int index, string fileName, int size);
void icon(int IconX, int IconO);
void Savegame(int mode, int size);
void saveHistory(int size);
void saveStatis(bool isWin, bool isPVC);
#endif // !_MINH_H_