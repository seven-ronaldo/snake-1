
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

void initgame(){
	system("cls");
	s_e = 120-speed;
	t = 0;
	vx = 1;
	vy = 0;
	score = 0;
	length = 10;
	character[0] = 11510;
	character[1] = 11410;
	character[2] = 11310;
	character[3] = 11210;
	character[4] = 11110;
	character[5] = 11010;
	character[6] = 10910;
	character[7] = 10810;
	character[8] = 10710;
	character[9] = 10610;
	fruit = 15010;
}
void creatfruit(){
	int notok = 1;
	while(notok){
		notok = 0;
		fruit = 10000 + Random(1,77)*100 + Random(1,23);
		int i = 0;
		for(i;i<length;i++){
		if(character[i]	== fruit){
			notok = 1;
		}
		}
	}
}
int getx(int a){
	return (a-10000)/100;
}
int gety(int a){
	return a%100;
}
void drawscore(){

	gotoxy(79,3);
 	printf("  s");
 	gotoxy(79,4);
 	printf("  c");
 	gotoxy(79,5);
 	printf("  o");
 	gotoxy(79,6);
 	printf("  r");
 	gotoxy(79,7);
 	printf("  e");
 	
 	gotoxy(79,9); 
 	printf("0");
 	gotoxy(79,10); 
 	printf("0");
 	gotoxy(79,11);
 	printf("0");
 	gotoxy(79,12); 
 	printf("0");
 	gotoxy(79,13);
 	printf("0");
}
