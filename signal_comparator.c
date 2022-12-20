#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

COORD coord = {0,0};
int kode;
char Ad;

void gotoxy(int x,int y){
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main (){

	menu:
	system("color 0A");
	printf("\t \t------------------------- \n");
	printf("\t \t: : Sinyal Comparator : : \n");
	printf("\t \t------------------------- \n");

	printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");
	printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n"); printf("| \n");printf("| \n");printf("- \n");

	gotoxy(8,3);printf("1 \n");	gotoxy(9,3);printf("1 \n");	gotoxy(10,3);printf("1 \n");gotoxy(11,3);printf("1 \n");gotoxy(12,3);printf("1 \n");
	gotoxy(6,4);printf("1 \n");	gotoxy(7,4);printf("1 \n");gotoxy(13,4);printf("1 \n");	gotoxy(14,4);printf("1 \n");
	gotoxy(5,5);printf("1 \n");gotoxy(6,5);printf("1 \n");gotoxy(14,5);printf("1 \n");gotoxy(15,5);printf("1 \n");
	gotoxy(5,6);printf("1 \n");gotoxy(5,6);printf("1 \n");gotoxy(15,6);printf("1 \n");
	gotoxy(4,7);printf("1 \n");gotoxy(16,7);printf("1 \n");
	gotoxy(4,8);printf("1 \n");gotoxy(16,8);printf("1 \n");
	gotoxy(4,9);printf("1 \n");gotoxy(16,9);printf("1 \n");
	gotoxy(16,10);printf("1 \n"); gotoxy(28,10);printf("1 \n");
	gotoxy(16,11);printf("1 \n");gotoxy(28,11);printf("1 \n");
	gotoxy(16,12);printf("1 \n");gotoxy(28,12);printf("1 \n");
	gotoxy(17,13);printf("1 \n");gotoxy(27,13);printf("1 \n");
	gotoxy(17,14);printf("1 \n");gotoxy(18,14);printf("1 \n");gotoxy(26,14);printf("1 \n");gotoxy(27,14);printf("1 \n");
	gotoxy(18,15);printf("1 \n");gotoxy(19,15);printf("1 \n");gotoxy(25,15);printf("1 \n");gotoxy(26,15);printf("1 \n");
	gotoxy(20,16);printf("1 \n");gotoxy(21,16);printf("1 \n");gotoxy(22,16);printf("1 \n");gotoxy(23,16);printf("1 \n");gotoxy(24,16);printf("1 \n");

	printf("|-----------------------------------| \n");
	printf("\t Amplitudo 6 volt \n");
	printf("\n");
	printf("Sinyal Keluarannya Adalah: \n");
	printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");
	printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n"); printf("| \n");printf("- \n");
	gotoxy(4,22);printf("1 \n");gotoxy(5,22);printf("1 \n");gotoxy(6,22);printf("1 \n");gotoxy(7,22);printf("1 \n");gotoxy(8,22);printf("1 \n");
	gotoxy(9,22);printf("1 \n");gotoxy(10,22);printf("1 \n");gotoxy(11,22);printf("1 \n");gotoxy(12,22);printf("1 \n");gotoxy(13,22);printf("1 \n");
	gotoxy(14,22);printf("1 \n");gotoxy(15,22);printf("1 \n");gotoxy(16,22);printf("1 \n");
	gotoxy(4,23);printf("1 \n");gotoxy(16,23);printf("1 \n");
	gotoxy(4,24);printf("1 \n");gotoxy(16,24);printf("1 \n");
	gotoxy(4,25);printf("1 \n");gotoxy(16,25);printf("1 \n");
	gotoxy(4,26);printf("1 \n");gotoxy(16,26);printf("1 \n");
	gotoxy(4,27);printf("1 \n");gotoxy(16,27);printf("1 \n");
	gotoxy(16,28);printf("1 \n");gotoxy(28,28);printf("1 \n");
	gotoxy(16,29);printf("1 \n");gotoxy(28,29);printf("1 \n");
	gotoxy(16,30);printf("1 \n");gotoxy(28,30);printf("1 \n");
	gotoxy(16,31);printf("1 \n");gotoxy(28,31);printf("1 \n");
	gotoxy(16,32);printf("1 \n");gotoxy(28,32);printf("1 \n");
	gotoxy(16,33);printf("1 \n");
	gotoxy(17,33);printf("1 \n");gotoxy(18,33);printf("1 \n");gotoxy(19,33);printf("1 \n");gotoxy(20,33);printf("1 \n");gotoxy(21,33);printf("1 \n");
	gotoxy(22,33);printf("1 \n");gotoxy(23,33);printf("1 \n");gotoxy(24,33);printf("1 \n");gotoxy(25,33);printf("1 \n");gotoxy(26,33);printf("1 \n");
	gotoxy(27,33);printf("1 \n");gotoxy(28,33);printf("1 \n");

	gotoxy(0,35);printf("|-----------------------------------| \n");
	printf("\t Amplitudo 6 volt \n");

	printf("\n");
	printf("------------------------------------------------------ \n");
	printf("Pilihan Reference Signal : \n");
	printf("1. U-Reference  = 0 volt \n");
	printf("2. U-Reference  = 2 volt \n");
	printf("3. U-Reference  = 3 volt \n");
	printf("4. U-Reference  = -2 volt \n");
	printf("Silahkan Pilih Signal reference yang Diinginkan : \n");
	scanf("%d",&kode);
	system("cls");
	switch (kode)
	{
		case 1:
			system("color 14");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("- \n");

			gotoxy(1,5);printf("- \n");gotoxy(2,5);printf("- \n");gotoxy(3,5);printf("- \n");gotoxy(4,5);printf("- \n");gotoxy(5,5);printf("- \n");gotoxy(6,5);printf("- \n");gotoxy(7,5);printf("- \n");
			gotoxy(8,5);printf("- \n");gotoxy(9,5);printf("- \n");gotoxy(10,5);printf("- \n");gotoxy(11,5);printf("- \n");gotoxy(12,5);printf("- \n");gotoxy(13,5);printf("- \n");gotoxy(14,5);printf("- \n");
			gotoxy(15,5);printf("| \n");

			printf("\n");
 			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n ============================================== \n");
			printf("\t Ampitudo 0 volt \n");
			printf("\n ============================================== \n");
			getchar();
			getchar();
			printf("Sinyal Keluarannya Adalah: \n");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("- \n");

			gotoxy(1,23);printf("- \n");gotoxy(2,23);printf("- \n");gotoxy(3,23);printf("- \n");gotoxy(4,23);printf("- \n");gotoxy(5,23);printf("- \n");gotoxy(6,23);printf("- \n");gotoxy(7,23);printf("- \n");
			gotoxy(8,23);printf("- \n");gotoxy(9,23);printf("- \n");gotoxy(10,23);printf("- \n");gotoxy(11,23);printf("- \n");gotoxy(12,23);printf("- \n");gotoxy(13,23);printf("- \n");gotoxy(14,23);printf("- \n");
			gotoxy(15,23);printf("| \n");

			printf("\n");
 			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n ============================================== \n");
			printf("\t Ampitudo 0 volt \n");
			printf("\n ============================================== \n");
		break ;
		goto akhir;
		case 2:
			system("color 61");
			printf("- \n");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("- \n");

			gotoxy(6,1);printf("1 \n");gotoxy(7,1);printf("1 \n");gotoxy(8,1);printf("1 \n");
			gotoxy(5,2);printf("1 \n");gotoxy(9,2);printf("1 \n");
			gotoxy(5,3);printf("1 \n");gotoxy(9,3);printf("1 \n");gotoxy(13,3);printf("1 \n");
			gotoxy(9,4);printf("1 \n");gotoxy(13,4);printf("1 \n");
			gotoxy(10,5);printf("1 \n");gotoxy(11,5);printf("1 \n");gotoxy(12,5);printf("1 \n");

			gotoxy(0,8);printf("|-----------------------------------| \n");
			printf("\n");
			printf("\t Amplitudo 2 Volt \n");
			printf("\n");
			printf("\n ============================================== \n");
			getchar();
			getchar();
			printf("Sinyal Keluarannya Adalah : \n");
			printf("- \n");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("- \n");

			gotoxy(5,17);printf("1 \n");gotoxy(6,17);printf("1 \n");gotoxy(7,17);printf("1 \n");gotoxy(8,17);printf("1 \n");gotoxy(9,17);printf("1 \n");
			gotoxy(5,18);printf("1 \n");gotoxy(9,18);printf("1 \n");
			gotoxy(5,19);printf("1 \n");gotoxy(9,19);printf("1 \n");gotoxy(13,19);printf("1 \n");
			gotoxy(9,20);printf("1 \n");gotoxy(13,20);printf("1 \n");
			gotoxy(9,21);printf("1 \n");gotoxy(10,21);printf("1 \n");gotoxy(11,21);printf("1 \n");gotoxy(12,21);printf("1 \n");gotoxy(13,21);printf("1 \n");


			gotoxy(0,22);printf("\n|-----------------------------------| \n");
			printf("\n");
			printf("\t Amplitudo 2 volt \n");

		break;
		goto akhir;
		case 3:
			system("color F0");
			printf("- \n");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("- \n");

			gotoxy(6,1);printf("1 \n");gotoxy(7,1);printf("1 \n");gotoxy(8,1);printf("1 \n");
			gotoxy(5,2);printf("1 \n");gotoxy(9,2);printf("1 \n");
			gotoxy(4,3);printf("1 \n");gotoxy(10,3);printf("1 \n");
			gotoxy(4,4);printf("1 \n");gotoxy(10,4);printf("1 \n");gotoxy(16,4);printf("1 \n");
			gotoxy(10,5);printf("1 \n");gotoxy(16,5);printf("1 \n");
			gotoxy(11,6);printf("1 \n");gotoxy(15,6);printf("1 \n");
			gotoxy(12,7);printf("1 \n");gotoxy(13,7);printf("1 \n");gotoxy(14,7);printf("1 \n");

			gotoxy(0,9);printf("|-----------------------------------| \n");
			printf("\n");
			printf("\t Amplitudo 3 Volt \n");
			printf("\n");
			printf("\n ============================================== \n");
			getchar();
			getchar();
			printf("Sinyal Keluarannya Adalah : \n");
			printf("- \n");
			printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("| \n");printf("- \n");

			gotoxy(4,18);printf("1 \n");gotoxy(5,18);printf("1 \n");gotoxy(6,18);printf("1 \n");gotoxy(7,18);printf("1 \n");gotoxy(8,18);printf("1 \n");gotoxy(9,18);printf("1 \n");gotoxy(10,18);printf("1 \n");
			gotoxy(10,18);printf("1 \n");
			gotoxy(4,19);printf("1 \n");gotoxy(10,19);printf("1 \n");
			gotoxy(4,20);printf("1 \n");gotoxy(10,20);printf("1 \n");
			gotoxy(4,21);printf("1 \n");gotoxy(10,21);printf("1 \n");gotoxy(16,22);printf("1 \n");
			gotoxy(10,22);printf("1 \n");gotoxy(16,22);printf("1 \n");
			gotoxy(10,23);printf("1 \n");gotoxy(16,23);printf("1 \n");
			gotoxy(10,24);printf("1 \n");gotoxy(11,24);printf("1 \n");gotoxy(12,24);printf("1 \n");gotoxy(13,24);printf("1 \n");gotoxy(14,24);printf("1 \n");gotoxy(15,24);printf("1 \n");gotoxy(16,24);printf("1 \n");

			gotoxy(0,26);printf("|-----------------------------------| \n");
			printf("\n");
			printf("\t Amplitudo 3 volt \n");

		break;
			goto akhir;

		case 4:
			system("color 2E");
			printf("-\n");printf("|\n");printf("|\n");printf("|\n");printf("|\n");printf("|\n");printf("-\n");

			gotoxy(9,1);printf("1");gotoxy(10,1);printf("1");gotoxy(11,1);printf("1");
			gotoxy(8,2);printf("1");gotoxy(12,2);printf("1");
			gotoxy(4,3);printf("1");gotoxy(8,3);printf("1");gotoxy(12,3);printf("1");
			gotoxy(4,4);printf("1");gotoxy(8,4);printf("1");
			gotoxy(5,5);printf("1");gotoxy(6,5);printf("1");gotoxy(7,5);printf("1");
			gotoxy(0,7);printf("|-----------------------------------|");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t Amplitudo -2 Volt \n");
			printf("\n");
			printf("\n ============================================== \n");
			getchar();
			getchar();
			printf("Sinyal Keluarannya Adalah : \n");
			printf("-\n");printf("|\n");printf("|\n");printf("|\n");printf("|\n");printf("|\n");printf("-\n");
			gotoxy(0,23);printf("|-----------------------------------|");

			gotoxy(8,17);printf("1");gotoxy(9,17);printf("1");gotoxy(10,17);printf("1");gotoxy(11,17);printf("1");gotoxy(12,17);printf("1");
			gotoxy(8,18);printf("1");gotoxy(12,18);printf("1");
			gotoxy(4,19);printf("1");gotoxy(8,19);printf("1");gotoxy(12,19);printf("1");
			gotoxy(4,20);printf("1");gotoxy(8,20);printf("1");
			gotoxy(4,21);printf("1");gotoxy(5,21);printf("1");gotoxy(6,21);printf("1");gotoxy(7,21);printf("1");gotoxy(8,21);printf("1\n\n");

		break;
			goto akhir;
		default:
			printf("Kode yang Dimasukkan salah. \n");
			getchar();
			goto akhir;
	}
	akhir:
	printf ("\n\nTekan E untuk exit atau tombol lain untuk mengulang : ");
	Ad = getchar();

	if (Ad == 'E')
	{
		return 0;
	}
	else
	{
		system ("cls");
		goto menu;
	}
}
