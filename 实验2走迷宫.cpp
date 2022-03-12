#include<stdio.h>
#include<conio.h>
#include<windows.h>
char a[50][50]={"###############",
                "#o   #######   ",
				"#   #######   #",
				"##    ###     #",
			    "##   #####   ##",
				"##           ##",
  				"###############",
				};  
				int main(){
					int x=1,y=1,i;
					char ch;
					for(i=0;i<=6;i++)
					    puts(a[i]);
					    while(1){
					    	ch=getch();
					    	if(ch=='s'){
					    		if(a[x+1][y]=' '){
					    			a[x][y]=' ';
					    			x++;
					    			a[x][y]='0';
								}
							}
							else if(ch=='w'){
							if(a[x-1][y]=' '){
					    			a[x][y]=' ';
					    			x--;
					    			a[x][y]='0';
								}	
							}
							else if(ch=='a'){
								if(a[x][y-1]=' '){
					    			a[x][y]=' ';
					    			y--;
					    			a[x][y]='0';
								}
							}
							else if(ch=='d'){
								if(a[x][y+1]=' '){
					    			a[x][y]=' ';
					    			y++;
					    			a[x][y]='0';
								}
							}
							system("cls");
							for(i=0;i<=6;i++)
							puts(a[i]);
							if(x==1&&y==14)
							break;
						}
						return 0;
				}
