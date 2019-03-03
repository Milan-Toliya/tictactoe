#include <iostream>

using namespace std;

int counter=1;
int mat[9]{1,1,1,1,1,1,1,1,1};
int matuse[9]{0,0,0,0,0,0,0,0,0};
char caller;

int checking(){
    cout<<"\nChecking for Winner... \n";
if (((mat[0] == mat[1] && mat[1] == mat [2] && mat[2] == mat[0]) && mat[1] != 1) ||
    ((mat[3] == mat[4] && mat[4] == mat [5] && mat[5] == mat[3]) && mat[4] != 1) ||
    ((mat[6] == mat[7] && mat[7] == mat [8] && mat[8] == mat[6]) && mat[7] != 1) ||
    ((mat[0] == mat[3] && mat[3] == mat [6] && mat[6] == mat[0]) && mat[3] != 1) ||
    ((mat[1] == mat[4] && mat[4] == mat [7] && mat[7] == mat[1]) && mat[4] != 1) ||
    ((mat[2] == mat[5] && mat[5] == mat [8] && mat[8] == mat[2]) && mat[5] != 1) ||
    ((mat[0] == mat[4] && mat[4] == mat [8] && mat[8] == mat[0]) && mat[4] != 1) ||
    ((mat[2] == mat[4] && mat[4] == mat [6] && mat[6] == mat[2]) && mat[4] != 1)
    ){
        cout<<"\nWinner is player "<<caller<<endl;
        return 1;
     }
else return 0;
}

int main(){
int i,j;
int flag=0;
int ch;
int c;

lable:

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

cout<<"\n\n\n\n\t\t\t\t\t Welcome to my tic-tac game"<<endl<<endl<<endl;
cout<<"First player will use X and Second player have to use O"<<endl<<endl<<endl;
cout<<"*******************************************************************************************************************";
cout<<endl<<"instructions :   player will enter 1 for printing character at first place 2 for second place and so on.... ";
cout<<endl<<"*******************************************************************************************************************";
cout<<endl<<"\n\nGame is starts now, \n";

do{
rech:
if(counter%2==0){
    cout<<endl<<"Enter Second player his/her choice \n";
    c=79;
    caller='O';
    cin>>ch;
}
else{
    cout<<endl<<"Enter First player his/her choice \n";
    c=88;
    caller='X';
    cin>>ch;
}

switch (ch){
    case 1: if(matuse[0]==0){mat[0]=c; matuse[0]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
        case 2: if(matuse[1]==0){mat[1]=c; matuse[1]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
            case 3:  if(matuse[2]==0){mat[2]=c; matuse[2]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
                case 4: if(matuse[3]==0){mat[3]=c; matuse[3]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
                    case 5: if(matuse[4]==0){mat[4]=c; matuse[4]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
                        case 6: if(matuse[5]==0){mat[5]=c; matuse[5]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
                            case 7: if(matuse[6]==0){mat[6]=c; matuse[6]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
                                case 8: if(matuse[7]==0){mat[7]=c; matuse[7]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
                                    case 9: if(matuse[8]==0){mat[8]=c; matuse[8]=1;} else {cout<<"\nWarning number is already used\n"; goto rech;} break;
                                        default : cout<<"\n wrong choice \n";
}

counter++;

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

cout<<endl;cout<<endl;

if(counter>5){
    flag=checking();
        if (flag==1){
            goto endgame;
        }
    }
}while(counter<10);

endgame:

cout<<"\nFinal result is:\n";

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

cout<<"Do you want to play again? (y/n)";
char re;
cin>>re;

if(re!='n'){
    for(i=0;i<10;i++){
     mat[i]=1;
     matuse[i]=0;
     counter=1;
    }
    goto lable;
}

return 0;
}
