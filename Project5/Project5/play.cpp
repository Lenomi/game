#include"minh.h"
#include <vector>
#include <string>

bool isQuit;

void Exit(int mode, int size=0);
char a[90][25];
int n, x, y, i;
char key;
void Winning(bool isPvC);
// ham ke board 
void hide2() {
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ci;
	ci.bVisible = TRUE;
	ci.dwSize = 100;
	SetConsoleCursorInfo(output, &ci);
}
void hihii(){
	string c[100], a[100];
c[1] = "      <>>          ";
c[2] = "     o  <>>        ";
c[3] = "   o=-=-=-<>>    ";
c[4] = "<>>         <>>";
c[5] = "  <>>-=-=-=-=-<>>  ";
c[6] = "    <>>         <>>    ";
c[7] = "      <>>-=-=-=o      ";
c[8] = "        <>>  o          ";
c[9] = "          <>>          ";
c[10] = "         o  <>>           ";
c[11] = "       o-=-=-=<>>       ";
c[12] = "     o          <>>  ";
c[13] = "   o=-=-=-=-=-=o   ";
c[14] = "<>>          o    ";
c[15] = "  <>>=-=-=-o  ";
c[16] = "    <>>  o  ";
c[17] = "      <>>      ";
c[18] = "     o  <>>       ";
c[19] = "   o-=-=-=<>>   ";
c[20] = "<>>         <>>        ";
c[21] = "  <>>-=-=-=-=-<>>  ";
c[22] = "    <>>         <>>    ";
c[23] = "      <>>-=-=-=o       ";
c[24] = "        <>>  o      ";
c[25] = "          <>>           ";
c[26] = "        o   <>>          ";
c[27] = "      o=-=-=-=<>>      ";
c[28] = "    o           <>> ";
c[29] = "  o-=-=-=-=-=-=o ";
c[30] = "o            o    ";

a[1] = "          <>>      ";
a[2] = "        <>>  o     ";
a[3] = "      <>>=-=-=-o   ";
a[4] = "    <>>         <>>";
a[5] = "  <>>-=-=-=-=-<>>  ";
a[6] = "<>>         <>>    ";
a[7] = "   o-=-=-=<>>      ";
a[8] = "     o  <>>        ";
a[9] = "      <>>          ";
a[10] = "    <>>  o         ";
a[11] = "  <>>-=-=-=o       ";
a[12] = "<>>          o     ";
a[13] = "   o-=-=-=-=-=-o   ";
a[14] = "     o          <>>";
a[15] = "       o=-=-=-<>>  ";
a[16] = "         o  <>>    ";
a[17] = "          <>>      ";
a[18] = "        <>>  o     ";
a[19] = "      <>>-=-=-=o   ";
a[20] = "    <>>         <>>";
a[21] = "  <>>-=-=-=-=-<>>  ";
a[22] = "<>>         <>>     ";
a[23] = "   o-=-=-=<>>       ";
a[24] = "     o  <>>         ";
a[25] = "      <>>           ";
a[26] = "    <>>  o          ";
a[27] = "  <>>-=-=-=o      ";
a[28] = "<>>          o ";
a[29] = "   o-=-=-=-=-=-o ";
a[30] = "     o           o";
for (int i = 1; i < 31; ++i)
{
	gotoXY(3, i);
	TextColor(12);
	cout << a[i];
	gotoXY(92, i);
	TextColor(11);
	cout << c[i];
	Sleep(20);
}

}
////
char p1 = 'X', p2 = 'O', Icon;
void MakeBoard(int size)
{
	if (size == 1)
	{
		short i, n = 5;
		char k;
		TextColor(7);
		gotoXY(32, 4);//goc1
		k = 218;
		cout << k;
		gotoXY(80, 4);//goc2
		k = 191;
		cout << k;
		gotoXY(80, 26);//goc3
		k = 217;
		cout << k;
		gotoXY(32, 26);//goc4
		k = 192;
		cout << k;
		for (int t = 0; t <= 46; t++)
		{
			if (t % 3 == 0) {
				for (i = 0; i <= 18; i += 2)//ngang 
				{

					k = 195;
					gotoXY(32 + t, i + 6);
					cout << k;
				}
			}
			else {
				for (i = 0; i <= 22; i += 2)//nggang  canh 2
				{

					k = 196;
					gotoXY(32 + t, i + 4);
					cout << k;

				}
			}
		}
		//canh doc
		n = 2;
		for (int t = 5; t <= 26; t += 2)

			for (i = 32; i <= 81; i += 3)
			{
				gotoXY(i, t);
				k = 179;
				cout << k;
			}
		/*Sleep(n);
		gotoXY(i, 26);
		cout << k;
		gotoXY(13, 13);
		Sleep(n);*/
		for (i = 6; i <= 25; i += 2)
		{
			k = 180;
			gotoXY(80, i);
			cout << k;
		}
		for (i = 35; i < 80; i += 3)
		{
			k = 194;
			gotoXY(i, 4);
			cout << k;
			k = 193;
			gotoXY(i, 26);
			cout << k;
		}
	}
	if (size == 2)
	{
		short i, n = 5;
		char k;
		TextColor(7);
		gotoXY(23, 4);//goc1
		k = 218;
		cout << k;
		gotoXY(89, 4);//goc2
		k = 191;
		cout << k;
		gotoXY(89, 26);//goc3
		k = 217;
		cout << k;
		gotoXY(23, 26);//goc4
		k = 192;
		cout << k;
		for (int t = 0; t <= 64; t++)
		{
			if (t % 3 == 0) {
				for (i = 0; i <= 18; i += 2)//ngang 
				{

					k = 195;
					gotoXY(23 + t, i + 6);
					cout << k;
				}
			}
			else {
				for (i = 0; i <= 22; i += 2)//nggang  canh 2
				{
					k = 196;
					gotoXY(23 + t, i + 4);
					cout << k;
				}
			}
		}
		//canh doc
		n = 2;
		for (int t = 5; t <= 26; t += 2)

			for (i =23 ; i <= 89; i += 3)
			{
				gotoXY(i, t);
				k = 179;
				cout << k;
			}
		/*Sleep(n);
		gotoXY(i, 26);
		cout << k;
		gotoXY(13, 13);
		Sleep(n);*/
		for (i = 6; i <= 25; i += 2)
		{
			k = 180;
			gotoXY(89, i);
			cout << k;
		}
		for (i = 26; i < 89; i += 3)
		{
			k = 194;
			gotoXY(i, 4);
			cout << k;
			k = 193;
			gotoXY(i, 26);
			cout << k;
		}
	}
	if (size == 3)
	{
		short i, n = 5;
		char k;
		TextColor(7);
		gotoXY(38, 8);//goc1
		k = 218;
		cout << k;
		gotoXY(74, 8);//goc2
		k = 191;
		cout << k;
		gotoXY(74, 24);//goc3
		k = 217;
		cout << k;
		gotoXY(38, 24);//goc4
		k = 192;
		cout << k;
		for (int t = 0; t <= 34; t++)
		{
			if (t % 3 == 0)
			{
				for (i = 0; i <= 12; i += 2)//ngang 
				{

					k = 195;
					gotoXY(38 + t, i + 10);
					cout << k;
				}
			}
			else {
				for (i = 0; i <= 16; i += 2)//nggang  canh 2
				{

					k = 196;
					gotoXY(39 + t, i + 8);
					cout << k;

				}
			}
		}
		//canh doc
		n = 2;
		for (int t = 9; t <= 24; t += 2)
			for (i = 38; i <= 74; i += 3)
			{
				gotoXY(i, t);
				k = 179;
				cout << k;
			}

		for (i = 10; i <= 23; i += 2)
		{
			k = 180;
			gotoXY(74, i);
			cout << k;
		}
		for (i = 41; i < 74; i += 3)
		{
			k = 194;
			gotoXY(i, 8);
			cout << k;
			k = 193;
			gotoXY(i, 24);
			cout << k;
		}

	}	
	
}
void GameRule(int rule,int size) {
	if (rule == 1) {}
	if (rule == 2) {}
}
//ham chon icon nguoi choi
void icon(int IconX, int IconO)
{
	
//icon player 1:
p1 = IconX;

//icon player 2;
p2 = IconO;
}

//ham doi luot choi
bool Turn(int i)
{
	if (i % 2 == 0)
	{
		
		Icon = p1; //key : in ra man hinh icon cua player
		

		return true;
	}
	else {
		Icon = p2;
		return false;	
		
	}
}


//ham xuat hinh anh len console

void DrawOX()
{
	if (a[x][y] != p1 && a[x][y] != p2 )
	{
		if (Turn(i)) TextColor(11); //doi mau xanh 11
		else TextColor(12);//doi mau do 12
		a[x][y] = Icon;
		cout << a[x][y];
		Winning(false);
		i++;
	}

}


//ham dich chuyen con tro tren console(chua hoan thien)
void up(int size)
{
	if (size == 1)
	{
		y -= 2;
		if (y < 5) y = 5;
	}
	if(size==2)
	{
		y -= 2;
		if (y < 5) y = 5;
	}
		if(size==3)
		{
			y -= 2;
			if (y < 9) y = 9;
		}
}

void down(int size)
{
	if (size == 1)
	{
		y += 2;
		if (y > 25) y = 25;
	}
	if (size == 2)
	{
		y += 2;
		if (y > 25) y = 25;
	}
	if (size == 3)
	{
		y += 2;
		if (y > 23) y = 23;
	}
}

void right(int size)
{
	if (size == 1)
	{
		x += 3;
		if (x > 79) x = 79;
	}
	if (size == 2)
	{
		x += 3;
		if (x > 88) x = 88;
	}
	if (size == 3)
	{
		x += 3;
		if (x > 73) x = 73;
	}
}

void left(int size)
{
	if (size == 1) {
		x -= 3;
		if (x < 34) x = 34;
	}
	if (size == 2)
	{
		x -= 3;
		if (x < 24) x = 24;
	}
	if (size == 3)
	{
		x -= 3;
		if (x < 39) x = 39;
	}
}



bool Owin()
{
	
	int m1 = y, n1 = x;
	while (a[n1][y] == p2)
		n1++;
	n1--;

		 if ((a[n1][y] == p2) && (a[n1 + 3][y] == p2) && (a[n1 + 6][y] == p2) && (a[n1 + 9][y] == p2) && (a[n1 +12][y] == p2)) return true;
	else if ((a[n1][y] == p2) && (a[n1 - 3][y] == p2) && (a[n1 - 6][y] == p2) && (a[n1 - 9][y] == p2) && (a[n1 - 12][y] == p2)) return true;
	m1 = y; n1 = x;
	while (a[x][m1] == p2)
		m1++;
	m1--;

		 if ((a[x][m1] == p2) && (a[x][m1 + 2] == p2) && (a[x][m1 + 4] == p2) && (a[x][m1 + 6] == p2) && (a[x][m1 + 8] == p2)) return true;
	else if ((a[x][m1] == p2) && (a[x][m1 - 2] == p2) && (a[x][m1 - 4] == p2) && (a[x][m1 - 6] == p2) && (a[x][m1 - 8] == p2)) return true;

	m1 = y; n1 = x;
	while (a[n1][m1] == p2)
	{
		m1++; n1++;
	}
	m1--; n1--;
		 if ((a[n1][m1] == p2) && (a[n1 + 3][m1 + 2] == p2) && (a[n1 + 6][m1 + 4] == p2) && (a[n1 + 9][m1 + 6] == p2) && (a[n1 + 12][m1 + 8] == p2)) return true;
	else if ((a[n1][m1] == p2) && (a[n1 - 3][m1 - 2] == p2) && (a[n1 - 6][m1 - 4] == p2) && (a[n1 - 9][m1 - 6] == p2) && (a[n1 - 12][m1 - 8] == p2)) return true;
	m1 = y; n1 = x;
	while (a[n1][m1] == p2)
	{
		n1++; m1--;
	}
	n1--; m1++;
		 if ((a[n1][m1]) == p2 && (a[n1 + 3][m1 - 2]) == p2 && (a[n1 + 6][m1 - 4]) == p2 && (a[n1 + 9][m1 - 6]) == p2 && (a[n1 + 12][m1 - 8] == p2)) return true;
	else if ((a[n1][m1]) == p2 && (a[n1 - 3][m1 + 2]) == p2 && (a[n1 - 6][m1 + 4 ]) == p2 && (a[n1 - 9][m1 + 6]) == p2 && (a[n1 - 12][m1 + 8] == p2)) return true;

	return false;
}

bool Xwin()
{
	int m1 = y, n1 = x;
	while (a[n1][y] == p1)
	{
		n1++;
	}
	n1--;

		 if ((a[n1][y] == p1) && (a[n1 + 3][y] == p1) && (a[n1 + 6][y] == p1) && (a[n1 + 9][y] == p1) && (a[n1 + 12][y] == p1)) return true;
	else if ((a[n1][y] == p1) && (a[n1 - 3][y] == p1) && (a[n1 - 6][y] == p1) && (a[n1 - 9][y] == p1) && (a[n1 - 12][y] == p1)) return true;

	m1 = y; n1 = x;
	while (a[x][m1] == p1)
	{
		m1++;
	}
	m1--;
		 if ((a[x][m1] == p1) && (a[x][m1 + 2] == p1) && (a[x][m1 + 4] == p1) && (a[x][m1 + 6] == p1) && (a[x][m1 + 8] == p1)) return true;
	else if ((a[x][m1] == p1) && (a[x][m1 - 2] == p1) && (a[x][m1 - 4] ==p1) && (a[x][m1 - 6] == p1) && (a[x][m1 - 8] == p1)) return true;

	m1 = y; n1 = x;
	while (a[n1][m1] ==p1)
	{
		m1++; n1++;
	}
	m1--; n1--;
		 if ((a[n1][m1] == p1) && (a[n1 + 3][m1 + 2] == p1) && (a[n1 + 6][m1 + 4] == p1) && (a[n1 + 9][m1 + 6] == p1) && (a[n1 + 12][m1 + 8] == p1)) return true;
	else if ((a[n1][m1] == p1) && (a[n1 - 3][m1 - 2] == p1) && (a[n1 - 6][m1 - 4] == p1) && (a[n1 - 9][m1 - 6] == p1) && (a[n1 - 12][m1 - 8] == p1)) return true;

	m1 = y; n1 = x;
	while (a[n1][m1] == p1)
	{
		n1++; m1--;
	}
	n1--; m1++;
	     if ((a[n1][m1]) == p1 && (a[n1 + 3][m1 - 2]) == p1 && (a[n1 + 6][m1 - 4]) == p1 && (a[n1 + 9][m1 - 6]) == p1 && (a[n1 + 12][m1 - 8] == p1)) return true;
	else if ((a[n1][m1]) == p1 && (a[n1 - 3][m1 + 2]) == p1 && (a[n1 - 6][m1 + 4]) == p1 && (a[n1 - 9][m1 + 6]) == p1 && (a[n1 - 12][m1 + 8] == p1)) return true;
	return false;
}
void control2(int size)//ham dichchuyen bang keyboard
{
	key = _getch();
	if (key == 'a' || key == 'A' || int(key == 75)) left(size); else
		if (key == 'd' || key == 'D' || int(key == 77)) right(size); else
			if (key == 'w' || key == 'W' || int(key == 72)) up(size); else
				if (key == 's' || key == 'S' || int(key == 80)) down(size); else
					if (key == 'p' || key == 'P' || int(key == 27)) Exit(1, size); else
						if (key == 13 || key == 32 || key == 'x' || key == 'X' || key == 'O' || key == 'o') DrawOX();
	if (Owin() || Xwin()) {
		while (key != 'N' && key != 'n' && key != 'Y' && key != 'y')
		{
			key = _getch();
		}
		if (key == 'N' || key == 'n') Exit(0, size); else

			if (key == 'y' || key == 'Y') {
				for (int i = 34; i < 80; i++)
				{
					for (int j = 5; j < 26; j++)
					{
						a[i][j] = ' ';
					}
				}
				system("cls");
				x = 58; y = 15;
				TwoPlay(0, "",size);
			}
	}

}
void Winning(bool isPvC)
{
	if (Owin())
	{
		saveStatis(false, isPvC);
		TextColor(12);
		gotoXY(36, 11);
		cout << "<>> <>>           <><><>          <<> <<>";
		gotoXY(36, 12);
		cout << "<>> <>>           "<<p2<<" Win           <<> <<>";
		gotoXY(36, 13);
		cout << "       DO YOU WANT TO PLAY AGAIN??       ";
		gotoXY(36, 14);
		cout << "Press (Y) to continue  Press (N) to EXIT ";
		gotoXY(36, 15);
		cout << "<>> <>>           <><><>          <<> <<>";
		
	}
	else
		if (Xwin())
		{	
			saveStatis(true, isPvC);
			TextColor(11);
			gotoXY(36, 11);
			cout << "<>> <>>           <><><>          <<> <<>";
			gotoXY(36, 12);
			cout << "<>> <>>           " << p1 << " Win           <<> <<>";
			gotoXY(36, 13);
			cout << "       DO YOU WANT TO PLAY AGAIN??       ";
			gotoXY(36, 14);
			cout << "Press (Y) to continue  Press (N) to EXIT ";
		
			
		}
	TextColor(7);
}

void TwoPlay(int index, string fileName, int size)
{
	system("cls");
	hihii();
	 hide2();
	 TextColor(7);
	int mode, iconX, iconO;

	i = 0;
	if (index > 0)
	{
		ifstream fi;
		fi.open("save\\" + fileName + ".txt");

		fi >> mode;
		fi >> size;
		MakeBoard(size);
		fi >> iconX;
		fi >> iconO;
		icon(iconX, iconO);
		while (1)
		{
			int c;
			fi >> x >>  y >> c;
			if (x == -1 && y == -1 && c == -1) break;
			gotoXY(x, y);
			if (c == iconX) TextColor(11);
			else TextColor(12);
			a[x][y] = (char)c;
			i++;
			cout << a[x][y];
		}
		fi.close();
	}
	else  if (index == -1)
	{
		ifstream fi;
		fi.open("C:\\Users\\Win 10\\source\\repos\\Project5\\Project5\\stat\\" + fileName + ".txt");
		int tmpSize;
		fi >> tmpSize;
		MakeBoard(tmpSize);
		fi >> iconX;
		fi >> iconO;
		icon(iconX, iconO);
		while (1)
		{
			int c;
			fi >> x >> y >> c;
			if (x == -1 && y == -1 && c == -1) break;
			gotoXY(x, y);
			if (c == iconX) TextColor(11);
			else TextColor(12);
			a[x][y] = (char)c;
			i++;
			cout << a[x][y];

		}
		gotoXY(33, 33);
		fi.close();
		while (1) {
			int n = _getch();
			if (n > 0) {
				for (int i = 34; i < 80; i++)
				{
					for (int j = 5; j < 26; j++)
					{

						a[i][j] = ' ';
					}
				}
				clrscr();
				isQuit = true;
				menu(size);
				return;
			}
		}
	} else	MakeBoard(size);
	x = 58; y  = 15;
	
	isQuit = false;
	do {
		gotoXY(x, y);
		control2(size);
		if (isQuit) {
			break;
		}
	} while (1);
}

//ai
struct OX
{
	int x;
	int y;
};
long long MangDiemTanCong[7] = { 0,10,100,1000,10000,100000,1000000 };
long long MangDiemPhogNgu[7] = { 0,5,25,125,625,3125,15625 };

//Tan cong
#pragma region Tancong
long long TCDoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 2; dem <= 12 && currY + dem < 26; dem += 2)
	{
		if (a[currX][currY + dem] == p1)
			SoQuanTa++;
		else if (a[currX][currY + dem] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem = 2; dem <= 12 && currY - dem > 5; dem += 2)
	{
		if (a[currX][currY - dem] == p1)
			SoQuanTa++;
		else if (a[currX][currY - dem] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich]*2;
	DiemTong += MangDiemTanCong[SoQuanTa]*2;

	return DiemTong;
}
long long TCNgang(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 3; dem <= 18 && currX + dem < 80; dem += 3)
	{
		if (a[currX + dem][currY] == p1)
			SoQuanTa++;
		else if (a[currX + dem][currY] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem = 3; dem <= 18 && currX - dem > 33; dem += 3)
	{
		if (a[currX - dem][currY] == p1)
			SoQuanTa++;
		else if (a[currX - dem][currY] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich]*2;
	DiemTong += MangDiemTanCong[SoQuanTa]*2;

	return DiemTong;
}
long long TCCheoNguoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY - dem2> 4; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY - dem2] == p1)
			SoQuanTa++;
		else if (a[currX + dem1][currY - dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY + dem2] == p1)
			SoQuanTa++;
		else if (a[currX - dem1][currY + dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich]*2;
	DiemTong += MangDiemTanCong[SoQuanTa]*2;
	return DiemTong;
}
long long TCCheoXuoi(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY + dem2] == p1)
			SoQuanTa++;
		else if (a[currX + dem1][currY + dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY - dem2 > 3; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY - dem2] == p1)
			SoQuanTa++;
		else if (a[currX - dem1][currY - dem2] == p2)
		{
			SoQuanDich++;
			break;
		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich ]*2;
	DiemTong += MangDiemTanCong[SoQuanTa]*2;
	return DiemTong;
}

#pragma endregion


//Phong ngu
#pragma region Phongngu
long long PNDoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 2; dem <= 12 && currY + dem < 26; dem += 2)
	{
		if (a[currX][currY + dem] == p1)
			break;
		else if (a[currX][currY + dem] == p2)
		{
			SoQuanDich++;
		}
		else
			break;
	}
	for (int dem = 2; dem <= 12 && currY - dem > 4; dem += 2)
	{
		if (a[currX][currY - dem] == p1)
			break;
		else if (a[currX][currY - dem] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanDich == 2)
		return 0;
	DiemTong -= MangDiemPhogNgu[SoQuanDich]*2;
	DiemTong += MangDiemTanCong[SoQuanTa]*2;

	return DiemTong;
}
long long PNNgang(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem = 3; dem <= 18 && currX + dem < 80; dem += 3)
	{
		if (a[currX + dem][currY] == p1)
			break;
		else if (a[currX + dem][currY] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	for (int dem = 3; dem <= 18 && currX - dem > 33; dem += 3)
	{
		if (a[currX - dem][currY] == p1)
			break;
		else if (a[currX - dem][currY] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanTa == 2)
		return 0;

	DiemTong += MangDiemPhogNgu[SoQuanDich]/2;

	return DiemTong;
}
long long PNCheoNguoc(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY - dem2>3; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY - dem2] == p1)
			break;
		else if (a[currX + dem1][currY - dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY + dem2] == p1)
			break;
		else if (a[currX - dem1][currY + dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanTa == 2)
		return 0;

	DiemTong += MangDiemPhogNgu[SoQuanDich]/2;
	return DiemTong;
}
long long PNCheoXuoi(int currX, int currY) {
	long long DiemTong = 0;
	int SoQuanTa = 0;
	int SoQuanDich = 0;
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX + dem1 < 80 && currY + dem2 < 26; dem1 += 3, dem2 += 2)
	{
		if (a[currX + dem1][currY + dem2] == p1)
			break;
		else if (a[currX + dem1][currY + dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	for (int dem1 = 3, dem2 = 2; dem1 <= 18 && dem2 <= 12 && currX - dem1 > 33 && currY - dem2 > 3; dem1 += 3, dem2 += 2)
	{
		if (a[currX - dem1][currY - dem2] == p1)
			break;
		else if (a[currX - dem1][currY - dem2] == p2)
		{
			SoQuanDich++;

		}
		else
			break;
	}
	if (SoQuanTa == 2)
		return 0;
	DiemTong += MangDiemPhogNgu[SoQuanDich]/2;
	return DiemTong;
}

#pragma endregion

void AITurn() {
	long long DiemMax = -100000000;
	int tmpx = 0;
	int tmpy = 0;
	char tmpicon = ' ';
	for (int i = 34; i < 80; i += 3)//ngang
	{
		for (int j = 5; j < 26; j += 2)//doc
		{
			if (a[i][j] != p1 && a[i][j] != p2)
			{
				long long DiemTanCong = TCDoc(i, j) + TCNgang(i, j) + TCCheoNguoc(i, j) + TCCheoXuoi(i, j);
				long long DiemPhongNgu = PNDoc(i, j) + PNNgang(i, j) + PNCheoNguoc(i, j) + PNCheoXuoi(i, j);
				long long DiemTam = DiemTanCong > DiemPhongNgu ? DiemTanCong : DiemPhongNgu;
				if (DiemMax <= DiemTam)
				{
					DiemMax = DiemTam;
					tmpx = i;
					tmpy = j;
					tmpicon = p2;
				}
				

			}
			
		}
	}
	TextColor(12);
	gotoXY(tmpx, tmpy);
	a[tmpx][tmpy] = tmpicon;
	x = tmpx; y = tmpy;
	cout << tmpicon;
	
	
}
void DrawOXAI()
{

	if (a[x][y] != p1 && a[x][y] != p2)
	{
		
		TextColor(11);//doi mau xanh 11
		Icon = p1;
		a[x][y] = Icon;
		cout << a[x][y];
		Winning(true);
		if (Xwin() != true)
		{
			AITurn();
			Winning(true);
		}
	}
}
void controlAI(int size)//ham dichchuyen bang keyboard
{
	key = _getch();
	if (key == 'a' || key == 'A' || int(key == 75)) left(size); else
		if (key == 'd' || key == 'D' || int(key == 77)) right(size); else
			if (key == 'w' || key == 'W' || int(key == 72)) up(size); else
				if (key == 's' || key == 'S' || int(key == 80)) down(size); else
					if (key == 'p' || key == 'P' || int(key == 27)) Exit(2, size); else
						if (key == 13 || key == 32 || key == 'x' || key == 'X' || key == 'O' || key == 'o') DrawOXAI(); else
							if (Owin() || Xwin())
							{
								while (key != 'N' && key != 'n' && key != 'Y' && key != 'y')
								{
									key = _getch();
								}
								if (key == 'N' || key == 'n')
								{
									for (int i = 34; i < 80; i++)
									{
										for (int j = 5; j < 26; j++)
										{
											a[i][j] = ' ';
										}
									}

									Exit(0, size);
								}

								else if (key == 'y' || key == 'Y')
								{
									for (int i = 34; i < 80; i++)
									{
										for (int j = 5; j < 26; j++)
										{
											a[i][j] = ' ';
										}
									}
									system("cls");
									x = 58; y = 15;
									AI(0, "",size);
								}

							}
}
void AI(int index, string fileName,int size) {
	clrscr();
	hihii();
	hide2();

	i = 0;
	int mode, iconX, iconO;
	if (index)
	{
		ifstream fi;
		fi.open("save\\" + fileName + ".txt");

		fi >> mode;
		fi >> size;
		MakeBoard(size);
		fi >> iconX;
		fi >> iconO;
		icon(iconX, iconO);
		while (1)
		{
			int c;
			fi >> x >> y >> c;
			if (x == -1 && y == -1 && c == -1) break;
			gotoXY(x, y);
			if (c == iconX) TextColor(11);
			else TextColor(12);
			a[x][y] = (char)c;
			i++;
			cout << a[x][y];
		}
		fi.close();
	} else MakeBoard(size);
	x = 58; y = 15;
	isQuit = false;
	while(1) {
		gotoXY(x, y);
		controlAI(size);
		if (isQuit) break;
	}

}


void Exit(int mode, int size)
{
	if (mode != 0) Savegame(mode, size);
	saveHistory(size);
	for (int i = 34; i < 80; i++)
	{
		for (int j = 5; j < 26; j++)
		{
			
			a[i][j] = ' ';
		}
	}

	clrscr();
	isQuit = true;
	menu(size);
}

void saveStatis(bool isWin, bool isPVC)
{
	ifstream filein("C:\\Users\\Win 10\\source\\repos\\Project5\\Project5\\stat\\statistic.txt");
	int countPVP = 0, countPVC = 0, countWin = 0;
	if (filein.is_open())
	{
		filein >> countPVP;
		filein >> countPVC;
		filein >> countWin;
	}
	if (isPVC) countPVC++; else		countPVP++;
	if (isPVC && isWin) countWin++;
	filein.close();
	ofstream fileout("C:\\Users\\Win 10\\source\\repos\\Project5\\Project5\\stat\\statistic.txt");
	fileout << countPVP << "\n";
	fileout << countPVC << "\n";
	fileout << countWin << "\n";	
	fileout.close();
}
void saveHistory(int size)
{
	vector<string> loadHis;

	ifstream filein("C:\\Users\\Win 10\\source\\repos\\Project5\\Project5\\stat\\history.txt");
	string line;
	while (getline(filein, line))
	{
		loadHis.push_back(line);
	}
	string tmp = loadHis[0];
	if (loadHis.size() >= 3) {
		for (int i = 0; i < loadHis.size() - 1; ++i)
		{
			loadHis[i] = loadHis[i + 1];
		}
		loadHis.pop_back();
	}
	loadHis.push_back(tmp);
	filein.close();
	ofstream fi("C:\\Users\\Win 10\\source\\repos\\Project5\\Project5\\stat\\History.txt");
	for (int i = 0; i < loadHis.size(); ++i)
	{
		fi << loadHis[i] << "\n";
	}
	fi.close();
	ofstream file("C:\\Users\\Win 10\\source\\repos\\Project5\\Project5\\stat\\" + tmp + ".txt");
	file << size << "\n";
	file << (int)p1 << "\n";
	file << (int)p2 << "\n";
	for (int j = 4; j <= 25; j++)
	{
		for (int i = 33; i <= 80; i++)
		{
			if (a[i][j] == p1 || a[i][j] == p2)
				file << i << " " << j << " " << (int)a[i][j] << " ";
		}
	}
	file << -1 << " " << -1 << " " << -1;
	file.close();
}
void Savegame(int mode, int size)
{
	while (1) 
	{
		TextColor(6);
		gotoXY(30, 2);
		cout << "        <><>  DO  YOU  WANNA  SAVE  GAME? <><>  " << endl;
		TextColor(7);
		gotoXY(30, 3);
		cout << "     << Press (Y) to save <> Press (N) to quit >>" << endl;
		char abc = _getch();
		if (abc == 'y' || abc == 'Y')
		{
			TextColor(6);
			gotoXY(30, 2);
			cout << "      <<>>        :ADD THE NAME FILE:       <<>>" << endl;
			TextColor(7);
			gotoXY(30, 3);
			cout << "      :><:                                  :><:            " << endl;
			gotoXY(40, 3);
			string name;
			cin >> name;
			
			vector<string> loadFiles;

			ifstream filein("save\\savedgame.txt");
			string line;
			while (getline(filein, line))
			{
				loadFiles.push_back(line);
			}
			if (loadFiles.size() >= 8) {
				for (int i = 0; i < loadFiles.size() - 1; ++i)
				{
					loadFiles[i] = loadFiles[i + 1];
				}
				loadFiles.pop_back();
			}
			loadFiles.push_back(name);
			filein.close();
			ofstream fi("save\\savedgame.txt");
			for (int i = 0; i < loadFiles.size(); ++i)
			{
				fi << loadFiles[i] << "\n";
			}
			fi.close();
			ofstream file("save\\" + name + ".txt");
			file << mode << "\n";
			file << size << "\n";
			file << (int) p1 << "\n";
			file << (int) p2 << "\n";
			for (int j = 4; j <= 25; j++)
			{
				for (int i = 33; i <= 80; i++)
				{
					if (a[i][j] == p1 || a[i][j] == p2)
						file << i << " " << j << " " << (int) a[i][j] << " ";
				}
			}
			file << -1 << " " << -1 << " " << -1;
			file.close();
			break;
		}
		else if (abc == 'n' || abc == 'N')
			break;
	}
}

#pragma warning(disable:4996)


