// Main Menu
// Rifda 22 Nov 2017

#include <stdio.h>
#include "boolean.h"
#include <stdlib.h>
#include <string.h>

void about() {
	printf("-------ABOUT-------\n");
	printf("Game ini terinspirasi dari game Candy Crush Saga.\nGame ini dibuat dalam rangka Tugas Besar Matakuliah Algoritma dan Struktur Data, 2017\n");
}

void howToPlay() {
	printf("-------HOW TO PLAY-------\n");
	printf("Game ini terinspirasi dari game Candy Crush Saga.\nGame ini dibuat dalam rangka Tugas Besar Matakuliah Algoritma dan Struktur Data, 2017\n");
}

void swap(char *X, char *Y){
	char temp;
	temp=*X;
	*X=*Y;
	*Y=temp;
}

string welcomescrn(){
	string name;
	//system("clear");
	printf("  /$$$$$$   /$$$$$$  /$$   /$$ /$$$$$$$  /$$     /$$        /$$$$$$  /$$$$$$$  /$$   /$$  /$$$$$$  /$$   /$$\n");
	printf(" /$$__  $$ /$$__  $$| $$$ | $$| $$__  $$|  $$   /$$/       /$$__  $$| $$__  $$| $$  | $$ /$$__  $$| $$  | $$\n");
	printf("| $$  \\__/| $$  \\ $$| $$$$| $$| $$  \\ $$ \\  $$ /$$/       | $$  \\__/| $$  \\ $$| $$  | $$| $$  \\__/| $$  | $$\n");
	printf("| $$      | $$$$$$$$| $$ $$ $$| $$  | $$  \\  $$$$/        | $$      | $$$$$$$/| $$  | $$|  $$$$$$ | $$$$$$$$\n");
	printf("| $$    $$| $$  | $$| $$\\  $$$| $$  | $$    | $$          | $$    $$| $$  \\ $$| $$  | $$ /$$  \\ $$| $$  | $$\n");
	printf("|  $$$$$$/| $$  | $$| $$ \\  $$| $$$$$$$/    | $$          |  $$$$$$/| $$  | $$|  $$$$$$/|  $$$$$$/| $$  | $$\n");
	printf(" \\______/ |__/  |__/|__/  \\__/|_______/     |__/           \\______/ |__/  |__/ \\______/  \\______/ |__/  |__/\n");
    printf("\n\n\n 									Who's Playing?\n")                                                                                                        
    scanf(" %s",&name);

    return name; 
}

void menu() {
	char conf_exit;
	int pil=0;
	                                                                                                     
                                                                                                            

	printf("-------MENU-------\n");
	printf("1. Play\n");
	printf("2. How To Play\n");
	printf("3. Highscore\n");
	printf("4. About\n");
	printf("5. Quit\n");

	do {
		printf("Pilihan Anda: ");
		scanf("%d",&pil);
		if (pil<1 || pil>5) {
			printf("Input Salah!\nMasukkan Angka 1-5!\n");
		}
	} while (pil<1 || pil>5);

	//masuk ke menu pilihan doi
	switch (pil) {
		case (1): 
			printf("Masuk ke game ini\n");
			menu();
			break;

		case (2):
			printf("Masuk ke How to Play\n");
			menu();
			break;

		case (3):
			printf("Masuk ke highscore\n");	
			
			menu();
			break;

		case (4):
			about();
			menu();
			break;

		case (5):
			do{
				printf("Kamu yakin mau keluar? (Y/N)\n");
				scanf(" %c",&conf_exit);
				if (conf_exit=='N'|| conf_exit=='n') {
					menu();
					break;
				} else if (conf_exit=='Y'|| conf_exit=='y'){
					printf("BYE!\n");
				} else
				printf("Input Salah!\n");
			} while (conf_exit!='N' && conf_exit!='Y' && conf_exit!='y' && conf_exit!='n');
			break;
	}
}

boolean isValidMove(int row, int col, char dir)
{	
	boolean valid=true;
	//pengecekan ujung-ujung matriks
	if ((row==0 && (dir=='W' || dir =='w')) || (col==0 &&(dir=='A' || dir=='a')) || (col==7 &&(dir=='D' || dir=='d'))|| (row==7 &&(dir=='S' || dir=='s'))) 
	{
		valid=false;
	}

	return valid;
}
/*
void Move(Candy *M){
	int select,row1,row2,col1,col2;
	char dir;
	do {
		do {
			printf("Masukkan Nomor Kotak! (1-64)\n");
			scanf("%d",&select);
			if (select<1 || select>64) {
				printf("Input Salah! Masukkan angka 1-64!\n");
			}
		} while (select<1 || select>64);

		//konversi dari table ke matriks
		row1=select/8;
		col1=select%8;

		do {
			printf("Arah Perpindahan? (W,S,A,D) \n");
			scanf(" %c",&dir);
		} while (dir!='W' || dir!='S' || dir!='A' || dir!='D' || dir!='w' || dir!='d' || dir!='a' || dir!='s');
		//belum ada verifikasi kalo diujung-ujung hehe


		switch (dir) {
			case ('W' || 'w') : 
								row2=row1-1;
								col2=col1;
								break;
			case ('D' || 'd') : 
								row2=row1;
								col2=col1+1;
								break;
			case ('S' || 's') : 
								row2=row1-1;
								col2=col1;
								break;
			case ('A' || 'a') : 
								row2=row1;
								col2=col1-1;
								break;
		}

		if (!isValidMove(row1,col1,dir)) {
			printf("Perpindahan tidak valid! Ulangi masukkan!\n");
		}
	} while (!isValidMove(row1,col1,dir));
	//melakukan pertukaran
	swap (((*M)[row1][col1]),((*M)[row2][col2]));

}
*/

int main() {
	menu();
	return 0;
}
