#include "main.h"

using namespace std;

void Start();
void Select();
void Starter();
void Elite();
void Heroic();
void Ending();
void Hunter();
void Attire();
void Present();
void BugReport();

int i = 0;

void Color(int txt, int bg) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), txt + bg * 16);
}

int main() {
	srand((uint)time(0));
	Start();
	return 0;
}

void Start() {
	cls();
	Color(2, 0);
	cout << "★Krunker.io Spin Tester★" << endl;
	Sleep(2000);
	cls();
	cout << "Made by HakJu12(Discord 이또치#1234)" << endl;
	Sleep(2000);
	cls();
	cout << "스페이스 키를 누르면 시작됩니다." << endl;
	i = _getch();
	if (i == 32) Select();
	else {
		cls();
		cout << "스페이스 바를 눌러주십시오." << endl;
		Sleep(1000);
		Start();
	}
	return;
}

void Select() {
	SELECTSTART:
	cls();
	Color(2, 0);
	cout << "스핀의 종류를 선택해주세요:" << endl;
	cout << "1: Starter(50KR)" << endl;
	cout << "2: Elite(100KR)" << endl;
	cout << "3. Heroic(500KR)" << endl;
	cout << "4. Hunter(600KR)" << endl;
	cout << "5. Attire(750KR)" << endl;
	cout << "6. 확률정보" << endl;
	cout << "7. Bug Report" << endl;
	cout << "0. 프로그램 종료" << endl;
	i = _getch();
	switch (i) {
	case 48:
		cls();
		cout << "프로그램을 종료합니다." << endl;
		Sleep(2000);
		return;
	case 49:
		Starter();
		break;
	case 50:
		Elite();
		break;
	case 51:
		Heroic();
		break;
	case 52:
		Hunter();
		break;
	case 53:
		Attire();
		break;
	case 54:
		Present();
		break;
	case 55:
		BugReport();
		break;
	default:
		cls();
		cout << "올바르지 않은 값입니다. 1부터 6까지만 입력해주십시오." << endl;
		pause();
		goto SELECTSTART;
		break;
	}
	goto SELECTSTART;
	return;
}

void Present() {
	cls();
	Color(2, 0);
	cout << "--------------확률정보--------------------" << endl;
	cout << "0. 메인 메뉴" << endl;
	cout << "1: Starter Spin(50KR)" << endl;
	cout << "2: Elite Spin(100KR)" << endl;
	cout << "3: Heroic Spin(500KR)" << endl;
	cout << "4. 법적 공지" << endl;
	i = _getch();
	switch (i) {
	case 48:
		Select();
		break;
	case 49:
		cls();
		cout << "--------------Starter 확률정보--------------------" << endl;
		cout << "Uncommon:75%" << endl;
		cout << "Rare: 22%" << endl;
		cout << "Epic: 3%" << endl;
		cout << "Rarer than Epic: 0%";
		cout << "아무 키나 누르면 확률정보 메인으로 이동합니다." << endl;
		pause();
		Present();
		break;
	case 50:
		cls();
		cout << "--------------Elite 확률정보--------------------" << endl;
		cout << "Uncommon:50%" << endl;
		cout << "Rare: 30%" << endl;
		cout << "Epic: 15%" << endl;
		cout << "Legendary: 5%" << endl;
		cout << "Rarer than Legendary: 0%" << endl;
		cout << "아무 키나 누르면 확률정보 메인으로 이동합니다." << endl;
		pause();
		Present();
		break;
	case 51:
		cls();
		cout << "--------------Heroic 확률정보--------------------" << endl;
		cout << "Uncommon:0%" << endl;
		cout << "Rare: 48%" << endl;
		cout << "Epic: 35%" << endl;
		cout << "Legendary: 14%" << endl;
		cout << "Relic: 2.49%" << endl;
		cout << "Contraband: 0.5%" << endl;
		cout << "UNOBTAINABLE: 0.01%" << endl;
		cout << "아무 키나 누르면 확률정보 메인으로 이동합니다." << endl;
		pause();
		Present();
		break;
	case 52:
		cls();
		cout << "한국 게임 산업 협회(K-GAMES)에서 발표한 '청소년 보호 및 건전한 게임 문화 조성을 위해 마련한 자율 규제'에 따라" << endl;
		cout << "게임 내 확률형 아이템의 획득 확률 구간 및 리스트를 공개하여야 합니다." << endl;
		cout << "아무 키나 누르면 확률정보 메인으로 돌아갑니다." << endl;
		pause();
		Present();
		break;
	default:
		cls();
		cout << "잘못된 숫자(문자)입니다. 다시 입력해주세요." << endl;
		Sleep(1000);
		Present();
	}
}

void BugReport() {
	cls();
	Color(2, 0);
	cout << "------------------BUG REPORT----------------------" << endl;
	cout << "E-mail: buddylee1002@naver.com" << endl;
	cout << "Discord: 이또치#1234, Only DM Please." << endl;
	cout << "If you show bug, report bug to Developer as fast as you can, Thank you." << endl;
	pause();
	Select();
	return;
}
void Starter() {
	STARTER:
	cls();
	Color(2, 0);
	cout << "*스핀을 돌리시려면 스페이스 바를 누르십시오*" << endl;
	int per = rand() % 100 + 1;
	i = _getch();
	if (i == 32) {
		cls();
		if (1 <= per && per <= 75) {
			Color(10, 0);
			cout << "Uncommon! (75%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto STARTER;
			else return;
		}
		else if (75 < per && per < 97) {
			Color(9, 0);
			cout << "RARE! (22%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto STARTER;
			else return;
		}
		else if (96 < per && per < 101) {
			Color(13, 0);
			cout << "Congratulations, Epic! (3%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto STARTER;
			else return;
		}

	}
	return;
}

void Elite() {
	ELITE:
	cls();
	Color(2, 0);
	cout << "Welecom to Elite Spin! 스핀을 돌리시려면 스페이스 바를 눌러주세요!" << endl;
	int per = rand() % 100 + 1;
	i = _getch();
	if (i == 32) {
		Sleep(10);
		cls();
		if (1 <= per && per <= 50) {
			Color(10, 0);
			cout << "Uncommon! (50%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto ELITE;
			else return;
		}
		else if (50 < per && per < 81) {
			Color(9, 0);
			cout << "Rare! (30%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto ELITE;
			else return;
		}
		else if (80 < per && per < 96) {
			Color(13, 0);
			cout << "Epic! (15%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto ELITE;
			else return;
		}
		else if (95 < per && per < 101) {
			Color(6, 0);
			cout << "Congratulations, Legendary! (5%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto ELITE;
			else return;
		}
	}
	return;
}

void Heroic() {
	HEROIC:
	cls();
	Color(2, 0);
	cout << "Welcome to Heroic Spin! 스핀을 돌리시려면 스페이스 키를 눌러주세요!" << endl;
	int hper = rand() % 10000 + 1;
	i = _getch();
	if (i == 32) {
		cls();
		Sleep(10);
		if (0 < hper && hper < 4801) {
			Color(9, 0);
			cout << "Rare! (48%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto HEROIC;
			else return;
		}
		else if (4800 < hper && hper < 8301) {
			Color(13, 0);
			cout << "Epic! (35%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto HEROIC;
			else return;
		}
		else if (8300 < hper && hper < 9701) {
			Color(6, 0);
			cout << "Legendary! (14%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto HEROIC;
			else return;
		}
		else if (9700 < hper && hper < 9950) {
			Color(12, 0);
			cout << "Relic! (3%)" << endl;
			cout << "재도전하시려면 스페이스 바를 눌러주세요." << endl;
			cout << "다른 키를 누르면 스핀 선택창으로 이동합니다." << endl;
			i = _getch();
			if (i == 32) goto HEROIC;
			else return;
		}
		else if (9949 < hper && hper < 10000) {
			Color(8, 0);
			cout << "LIFE IS GOOD, LG ThinQ(?)" << endl;
			Sleep(300);
			cls();
			cout << "CONTRABAND! (0.5%)" << endl;
			Sleep(5000);
			cout << "Contraband를 축하드립니다!" << endl;
			pause();
			cls();
			cout << "CONTRABAND! (0.5%)" << endl;
			cout << "Contraband를 축하드립니다!" << endl;
			cout << " " << endl;
			cout << "아무 키나 누르면 메인메뉴로 돌아갑니다!" << endl;
			pause();
		}
		else if (hper == 10000) {
			Color(14, 0);
			cout << "★ U N O B T A I N A B L E ★ (0.01%)" << endl;
			Sleep(10000);
			cout << "GG, Please Tab Space Bar to Ending Credit!" << endl;
			pause();
			Ending();
		}
	}
	return;
}

void Hunter() {
	cout << "To be Countinued(어차피 아무도 안하면서)" << endl;
	pause();
	return;
}

void Attire() {
	cout << "To be Countinued(어차피 안돌릴꺼잖음ㅇㅅㅇ)" << endl;
	pause();
	return;
}

void Ending() {
	cls();
	Color(14, 0);
	cout << "★ U N O B T A I N A B L E ★ (0.01%)" << endl;
	Sleep(500);
	cout << "Thanks For Playing, GG Unobtainable!" << endl;
	pause();
	cls();
	cout << "★ U N O B T A I N A B L E ★ (0.01%)" << endl;
	cout << "Thanks For Playing, GG Unobtainable!" << endl;
	cout << "Special Thanks To Tilto" << endl;
	Sleep(5000);
	cls();
	cout << "★ U N O B T A I N A B L E ★ (0.01%)" << endl;
	cout << "Thanks For Playing, GG Unobtainable!" << endl;
	cout << "Developed by HakJu12(TheRealDochy)" << endl;
	Sleep(500);
	cout << "Take Screenshot and send me(Discord 이또치#1234)" << endl;
	Sleep(500);
	cout << "Screenshot Code: DL1EHC2L" << endl;
	Sleep(500);
	cout << "Conglatulations!" << endl;
	Sleep(5000);
	pause();
	return;
}