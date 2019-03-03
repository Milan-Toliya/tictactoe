#include<iostream>

using namespace std;

class mat{
private:
    int matuse[9]{0,0,0,0,0,0,0,0,0};
    int mat[9]{35,35,35,35,35,35,35,35,35};
public:
    void reset(){
        int i;
         for(i=0;i<=9;i++){
         matuse[i]=0;
         mat[i]=35;
      };mat[0]=35;
    }
int putdata(int p,int d){
    if(matuse[p]==0){
        mat[p]=d;
        matuse[p]=1;
        return 1;
        }
    else{
        cout<<"\nWarning number is already used\n";
        return 0;
    };

}
int checking(char caller){
        cout<<"\nChecking for Winner...\n";
    if (((mat[0] == mat[1] && mat[1] == mat [2] && mat[2] == mat[0]) && mat[1] != 35) ||
        ((mat[3] == mat[4] && mat[4] == mat [5] && mat[5] == mat[3]) && mat[4] != 35) ||
        ((mat[6] == mat[7] && mat[7] == mat [8] && mat[8] == mat[6]) && mat[7] != 35) ||
        ((mat[0] == mat[3] && mat[3] == mat [6] && mat[6] == mat[0]) && mat[3] != 35) ||
        ((mat[1] == mat[4] && mat[4] == mat [7] && mat[7] == mat[1]) && mat[4] != 35) ||
        ((mat[2] == mat[5] && mat[5] == mat [8] && mat[8] == mat[2]) && mat[5] != 35) ||
        ((mat[0] == mat[4] && mat[4] == mat [8] && mat[8] == mat[0]) && mat[4] != 35) ||
        ((mat[2] == mat[4] && mat[4] == mat [6] && mat[6] == mat[2]) && mat[4] != 35)
        ){
            cout<<"\nWinner is player "<<caller<<endl;
            return 1;
         }
    else return 0;
    }
void showdata(){
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
    }
};

int main(){
int counter=1,flag=0,i,j,p,c,rpy=1000;
char caller;
mat m;
m.showdata();

cout<<"\n\n\n\n\t\t\t\t\t Welcome to my tic-tac game"<<endl<<endl<<endl;
cout<<"First player will use X and Second player have to use O"<<endl<<endl<<endl;
cout<<"*******************************************************************************************************************";
cout<<endl<<"instructions :   player will enter 1 for printing character at first place 2 for second place and so on.... ";
cout<<endl<<"*******************************************************************************************************************";

lable:
    if(rpy!=1000)
m.showdata();
cout<<endl<<"\n\nGame is starts now, \n";


do{
rech:
if(counter%2==0){
    cout<<endl<<"Enter Second player his/her choice \n";
    c=79;
    caller='O';
    cin>>p;
}
else{
    cout<<endl<<"Enter First player his/her choice \n";
    c=88;
    caller='X';
    cin>>p;
}

switch (p){
    case 1:  rpy=m.putdata(0,c); if (rpy!=1){ goto rech;} break;
        case 2:  rpy=m.putdata(1,c); if (rpy!=1){ goto rech;} break;
            case 3:  rpy=m.putdata(2,c); if (rpy!=1){ goto rech;} break;
                case 4:  rpy=m.putdata(3,c); if (rpy!=1){ goto rech;} break;
                    case 5:  rpy=m.putdata(4,c); if (rpy!=1){ goto rech;} break;
                        case 6:  rpy=m.putdata(5,c); if (rpy!=1){ goto rech;} break;
                            case 7:  rpy=m.putdata(6,c); if (rpy!=1){ goto rech;} break;
                                case 8:  rpy=m.putdata(7,c); if (rpy!=1){ goto rech;} break;
                                    case 9:  rpy=m.putdata(8,c); if (rpy!=1){ goto rech;} break;
                                        default : cout<<"\n wrong choice \n"; goto rech;
}

counter++;

m.showdata();

cout<<endl;cout<<endl;

if(counter>5){
    flag=m.checking(caller);
        if (flag==1){
            goto endgame;
        }
    }
}while(counter<10);

endgame:

cout<<"\nFinal result is:\n";

m.showdata();

cout<<"Do you want to play again? (y/n)";
char re;
cin>>re;

if(re!='n'){
    m.reset();
    counter=1;
    }
    goto lable;

return 0;

}

