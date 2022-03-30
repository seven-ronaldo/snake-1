
void gameover(){	
    SetColor(4);
    system("cls");
	gotoxy(30,9);
	printf("....Game over....");
	gotoxy(15,11);
	printf("Choi ngu duoc co %d diem, an phim bat ki de ve menu",score);
	gotoxy(27,13);
	printf("|---- anh's thanh ----|");
	getchar();
	state = MENU;	
}
void menu(){
	SetColor(14);
	system("cls");
    gotoxy(25,3);
	printf("Game ran an moi ");
	gotoxy(30,5);
	SetColor(4);
	printf("1. vao game");
	gotoxy(30,6);
	printf("2. tuy chinh");
	gotoxy(30,7);
	printf("3. thong tin");
	int choice = 1;
	int oldChoice = 1;
	int next = 1;
	int key;
	SetColor(14);
	gotoxy(29,5);
				printf("%c",16);
	while(state==MENU){
		if(kbhit()){
			key = getch();
			if(key==80) {
			choice++;
			if(choice ==4) choice = 1;
			}
			if(key==72) {
			choice --;
			if(choice == 0) choice = 3;
			}
		switch (choice) {
			case 1 :
				if(oldChoice!=choice){
				
				gotoxy(29,6);
				printf(" ");
				gotoxy(29,7);
				printf(" ");
				oldChoice = 1;
				
				gotoxy(29,5);
				SetColor(14);
				printf("%c",16);
				}
				break;
			case 2 :
				if(oldChoice!=choice){
			
				gotoxy(29,5);
				printf(" ");
				gotoxy(29,7);
				printf(" ");
		        gotoxy(29,6);
		        SetColor(14);
				printf("%c",16);
				oldChoice = 2;
				}
				break;
			case 3 :
				if(oldChoice!=choice){
				
				
				gotoxy(29,6);
				printf(" ");
				gotoxy(29,5);
				printf(" ");
				gotoxy(29,7);
				SetColor(14);
				printf("%c",16);
				
				oldChoice = 3;
				}
				break;
		}
		if(key==13){
		switch (choice){
		case 1:			
			state = INGAME;
			break;
			case 2:
				state = SETTING;
				break;
			case 3 :
				state = INFORMATION;
				break;
				
		}
		}
		
	}
	
	}
	
}
