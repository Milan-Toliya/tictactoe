#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


using namespace std;

int counter=1;
int xw=0,ow=0;
int mat[9]={35,35,35,35,35,35,35,35,35};
int matuse[9]={0,0,0,0,0,0,0,0,0};
int caller;
char xp[10],op[10];
int s,t;
int xmax,ymax;
int checking(){
//    cout<<"\nChecking for Winner...\n";
/*if ( if( (mat[0] == mat[1] && mat[1] == mat [2] && mat[2] == mat[0]) && mat[1] != 35){t=1;} ||
     if( (mat[3] == mat[4] && mat[4] == mat [5] && mat[5] == mat[3]) && mat[4] != 35){t=2;} ||
     if( (mat[6] == mat[7] && mat[7] == mat [8] && mat[8] == mat[6]) && mat[7] != 35){t=3;} ||
     if( (mat[0] == mat[3] && mat[3] == mat [6] && mat[6] == mat[0]) && mat[3] != 35){t=4;} ||
     if( (mat[1] == mat[4] && mat[4] == mat [7] && mat[7] == mat[1]) && mat[4] != 35){t=5;} ||
     if( (mat[2] == mat[5] && mat[5] == mat [8] && mat[8] == mat[2]) && mat[5] != 35){t=6;} ||
     if( (mat[0] == mat[4] && mat[4] == mat [8] && mat[8] == mat[0]) && mat[4] != 35){t=7;} ||
     if( (mat[2] == mat[4] && mat[4] == mat [6] && mat[6] == mat[2]) && mat[4] != 35){t=8;}
  )  */

if( (mat[0] == mat[1] && mat[1] == mat [2] && mat[2] == mat[0]) && mat[1] != 35) {t=1;}
else if( (mat[3] == mat[4] && mat[4] == mat [5] && mat[5] == mat[3]) && mat[4] != 35){t=2;}
else if( (mat[6] == mat[7] && mat[7] == mat [8] && mat[8] == mat[6]) && mat[7] != 35){t=3;}
else if( (mat[0] == mat[3] && mat[3] == mat [6] && mat[6] == mat[0]) && mat[3] != 35){t=4;}
else if( (mat[1] == mat[4] && mat[4] == mat [7] && mat[7] == mat[1]) && mat[4] != 35){t=5;}
else if( (mat[2] == mat[5] && mat[5] == mat [8] && mat[8] == mat[2]) && mat[5] != 35){t=6;}
else if( (mat[0] == mat[4] && mat[4] == mat [8] && mat[8] == mat[0]) && mat[4] != 35){t=7;}
else if( (mat[2] == mat[4] && mat[4] == mat [6] && mat[6] == mat[2]) && mat[4] != 35){t=8;}
else{t=9;}

  switch(t){
  setcolor(RED);
    case 1:line(0,ymax/12,xmax/2,ymax/12);line(0,ymax/12,xmax/2,ymax/12);line(0,ymax/12,xmax/2,ymax/12);cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;}  cout<<endl; return 1;break;
    case 2:line(0,ymax/4,xmax/2,ymax/4);line(0,ymax/4,xmax/2,ymax/4);line(0,ymax/4,xmax/2,ymax/4);cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;} cout<<endl; return 1;break;
    case 3:line(0,5*ymax/12,xmax/2,5*ymax/12);line(0,5*ymax/12,xmax/2,5*ymax/12);line(0,5*ymax/12,xmax/2,5*ymax/12); cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;} cout<<endl; return 1;break;
    case 4:line(xmax/12,0,xmax/12,ymax/2);line(xmax/12,0,xmax/12,ymax/2);line(xmax/12,0,xmax/12,ymax/2);cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;} cout<<endl; return 1;break;
    case 5:line(xmax/4,0,xmax/4,ymax/2);line(xmax/4,0,xmax/4,ymax/2);line(xmax/4,0,xmax/4,ymax/2);cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;} cout<<endl; return 1;break;
    case 6:line(5*xmax/12,0,5*xmax/12,ymax/2);line(5*xmax/12,0,5*xmax/12,ymax/2);line(5*xmax/12,0,5*xmax/12,ymax/2); cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;} cout<<endl; return 1;break;
    case 7:line(0,0,xmax/2,ymax/2);line(0,0,xmax/2,ymax/2);line(0,0,xmax/2,ymax/2); cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;} cout<<endl; return 1;break;
    case 8:line(0,ymax/2,xmax/2,0);line(0,ymax/2,xmax/2,0);line(0,ymax/2,xmax/2,0); cout<<"\nWinner is player ";if (caller==1){cout<<xp;xw++;} else{cout<<op;ow++;} cout<<endl; return 1;break;
    default:  return 0;
  }
}

int main(){
   int gdriver = DETECT, gmode, errorcode;
   int left, top, right, bottom;


      initgraph(&gdriver, &gmode, "c://turboc3//bgi");

   left = getmaxx()  ;
   top = getmaxy()  ;
   right = getmaxx()  ;
   bottom = getmaxy()  ;
   xmax = getmaxx()  ;
   ymax= getmaxy()  ;


int i,j;
int flag=0;
char ch;
int c;
cout<<"                                          Enter first players name:";
cin>>xp;
//cout<<xp<<endl;
cout<<"                                          Enter second players name:";
cin>>op;
//cout<<op<<endl;

lable:
  setcolor(BLUE);
   /* draw a rectangle */
   rectangle(0,0,right/2,bottom/2);
   line(left/6,0,right/6,bottom/2);
   line(left/3,0,right/3,bottom/2);
   line(0,top/3,right/2,bottom/3);
   line(0,top/6,right/2,bottom/6);
/*
cout<<char(mat[0])<<"\t";
cout<<char(mat[1])<<"\t";
cout<<char(mat[2])<<"\t";
cout<<endl;
cout<<char(mat[3])<<"\t";
cout<<char(mat[4])<<"\t";
cout<<char(mat[5])<<"\t";
cout<<endl;
cout<<char(mat[6])<<"\t";
cout<<char(mat[7])<<"\t";
cout<<char(mat[8])<<"\t";
cout<<endl;*/


/*
cout<<"\n\n\n\n\t\t\t\t\t Welcome to my tic-tac game"<<endl<<endl<<endl;
cout<<"First player will use X and Second player have to use O"<<endl<<endl<<endl;
cout<<"*******************************************************************************************************************";
cout<<endl<<"instructions :   player will enter 1 for printing character at first place 2 for second place and so on.... ";
cout<<endl<<"*******************************************************************************************************************";
cout<<endl<<"\n\nGame is starts now, \n";
*/

do{
rech:
if(counter%2==0){
  //  cout<<endl<<"Enter Second player his/her choice \n";
    c=79; s=0;
    caller=0;
    cin>>ch;
    setcolor(YELLOW);
    if(int(ch)< 49 || int(ch) >59){
	ch=1;
  //	s=0;
    }
}
else{
  //  cout<<endl<<"Enter First player his/her choice \n";
    c=88;      s=1;
    caller=1;
    cin>>ch;
    setcolor(GREEN);
    if(int(ch)< 49 || int(ch) >59){
	ch=1;
   //	s=1;
    }
}

switch (int(ch)){
    case 49: if(matuse[0]==0){mat[0]=c; matuse[0]=1; if(s)
      {
       line(0,0,xmax/6,ymax/6);
       line(xmax/6,0,0,ymax/6);

       }
       else{
       circle(xmax/12,ymax/12,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
	case 50: if(matuse[1]==0){mat[1]=c; matuse[1]=1;if(s){
       line(xmax/3,0,xmax/6,ymax/6);
       line(xmax/6,0,xmax/3,ymax/6);
       }
       else{
       circle(xmax/4,ymax/12,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
	    case 51:  if(matuse[2]==0){mat[2]=c; matuse[2]=1; if(s){
       line(xmax/3,0,xmax/2,ymax/6);
       line(xmax/3,ymax/6,xmax/2,0);

       }
       else{
       circle(5*xmax/12,ymax/12,30);

       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
		case 52: if(matuse[3]==0){mat[3]=c; matuse[3]=1;if(s){
       line(0,ymax/6,xmax/6,ymax/3);
       line(0,ymax/3,xmax/6,ymax/6);

       }
       else{
       circle(xmax/12,ymax/4,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
		    case 53: if(matuse[4]==0){mat[4]=c; matuse[4]=1;   if(s){
       line(xmax/6,ymax/6,xmax/3,ymax/3);
       line(xmax/6,ymax/3,xmax/3,ymax/6);

       }
       else{
       circle(xmax/4,ymax/4,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
			case 54: if(matuse[5]==0){mat[5]=c; matuse[5]=1; if(s){
       line(xmax/3,ymax/6,xmax/2,ymax/3);
       line(xmax/3,ymax/3,xmax/2,ymax/6);

       }
       else{
       circle(5*xmax/12,ymax/4,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
			    case 55: if(matuse[6]==0){mat[6]=c; matuse[6]=1; if(s){
       line(0,ymax/3,xmax/6,ymax/2);
       line(0,ymax/2,xmax/6,ymax/3);

       }
       else{
       circle(xmax/12,5*ymax/12,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
				case 56: if(matuse[7]==0){mat[7]=c; matuse[7]=1;    if(s){
       line(xmax/6,ymax/3,xmax/3,ymax/2);
       line(xmax/6,ymax/2,xmax/3,ymax/3);

       }
       else{
       circle(xmax/4,5*ymax/12,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
				    case 57: if(matuse[8]==0){mat[8]=c; matuse[8]=1; if(s){
       line(xmax/3,ymax/3,xmax/2,ymax/2);
       line(xmax/3,ymax/2,xmax/2,ymax/3);

       }
       else{
       circle(5*xmax/12,5*ymax/12,30);
       }} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
					default : cout<<"\n wrong choice \n"; goto rech;

}

counter++;
/*
cout<<char(mat[0])<<"\t";
cout<<char(mat[1])<<"\t";
cout<<char(mat[2])<<"\t";
cout<<endl;
cout<<char(mat[3])<<"\t";
cout<<char(mat[4])<<"\t";
cout<<char(mat[5])<<"\t";
cout<<endl;
cout<<char(mat[6])<<"\t";
cout<<char(mat[7])<<"\t";
cout<<char(mat[8])<<"\t";
cout<<endl;
*/
cout<<endl;cout<<endl;

if(counter>5){
    setcolor(WHITE);
    flag=checking();
	if (flag==1){
	    goto endgame;
	}
    }
}while(counter<10);

endgame:

/*cout<<"\nFinal result is:\n";

cout<<char(mat[0])<<"\t";
cout<<char(mat[1])<<"\t";
cout<<char(mat[2])<<"\t";
cout<<endl;
cout<<char(mat[3])<<"\t";
cout<<char(mat[4])<<"\t";
cout<<char(mat[5])<<"\t";
cout<<endl;
cout<<char(mat[6])<<"\t";
cout<<char(mat[7])<<"\t";
cout<<char(mat[8])<<"\t";
cout<<endl;
*/
cout<<xp<<"="<<xw<<endl;
cout<<op<<"="<<ow<<endl;
cout<<"Do you want to play again? (y/n)";
char re;
cin>>re;

if(re!='n'){
 counter=1;
 matuse[0]=0;
 mat[0]=35;
 matuse[1]=0;
 mat[1]=35;
 matuse[2]=0;
 mat[2]=35;
 matuse[3]=0;
 mat[3]=35;
 matuse[4]=0;
 mat[4]=35;
 matuse[5]=0;
 mat[5]=35;
 matuse[6]=0;
 mat[6]=35;
 matuse[7]=0;
 mat[7]=35;
 matuse[8]=0;
 mat[8]=35;

    cleardevice();
  //  clrscr();
    cleardevice();
    goto lable;
}

return 0;
}
