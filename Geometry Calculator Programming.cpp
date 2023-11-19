#include<iostream>//Biblioteca de entrada/saida
#include<locale.h>//Biblioteca de Portugues
using namespace std;
int main()
{    
   
    inicio:
    setlocale(LC_ALL, "Portuguese");
    system("Color 3A");
    cout<<"\t\tWelcome Geometry Calculator" <<endl;
    float v1, v2;
    char OP;
    cout<<"_________________________________________________________" <<endl;
    cout<<"|\t\t\tQ=Square\t\t\t|" <<endl;
    cout<<"|\t\t\tR=Rectangle\t\t\t|" <<endl;
    cout<<"|\t\t\tT=Triangle\t\t\t|" <<endl;
    cout<<"|\t\t\tC=Circle\t\t\t|" <<endl;
     cout<<"_________________________________________________________" <<endl;
    cout<<"\t\t\tChoose Options:";
    cin>>OP;
     if(OP=='Q' || OP=='q')
     {
    cout<<"\t\t\tType Side:";
    cin>>v1;
    cout<<"\t\t\tArea:"<<v1*v1 <<endl;
    }
    else 
     if(OP=='R' || OP=='r')
     {
     cout<<"Enter Base:";
     cin>>v1;
     cout<<"Type Height";
     cin>>v2;
     cout<<"\t\t\tArea:"<<v1*v2 <<endl;
     }
    else
     if(OP=='T' || OP=='t')
     {
     cout<<"Enter Base:";
     cin>>v1;
     cout<<"Type Height:";
     cin>>v2;
     cout<<"\t\t\tArea:"<<(v1*v2)/2 <<endl;
     }
     else
      if(OP=='C' || OP=='c')
      {
     cout<<"Enter Ray:";
     cin>>v1;
     cout<<"\t\t\tArea: "<<3.14*v1*v1 <<endl;
     }
     else
     cout<<"Option Invalidates:";
     system("pause");
     goto inicio;
     return 0;
}
