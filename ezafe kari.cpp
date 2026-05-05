#include <iostream>
#include <string>
using namespace std;
int main(){
	float a,b,c,d,e,f,g,t;
	char end;
	string name;
	while (true){
		cout<<"               *.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*."<<endl;
		cout<<"               ..... List e Karkard Haftegi Personel UNI-BND ....."<<endl;
		cout<<"               *.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*."<<endl<<endl;
		cout<<"lotfan name personel ra vared konid:     ";
		cin>>name;
		cout<<"saat shift dar har rooz ra vared konid:		"<<endl<<endl;
		cout<<"1- shanbe:		";
		cin>>a;
		cout<<"2- yekShanbe:		";
		cin>>b;
		cout<<"3- doShanbe:		";
		cin>>c;	
		cout<<"4- seShanbe:		";
		cin>>d;
		cout<<"5- chaharShanbe:	";
		cin>>e;
		cout<<"6- panjShanbe:		";
		cin>>f;	
		cout<<"7- Jomme:		";
		cin>>g;
		cout<<endl<<endl;
		t=a+b+c+d+e+f+g;
		cout<<endl;
		cout<<"	                      Name Personel:       "<<name<<endl;
		cout<<"               Majmooe Saat Kar dar Yek Hafte:   "<<t<<" Saat"<<endl;
		if(t>44){
			cout<<"                                Ezafe Kari:      "   <<t-44<<" Saat"<<endl;
		}else if(t<44){
			cout<<"                                Kasri Kari:      "   <<t-44<<" Saat"<<endl;
		}else{
			cout<<"                      Ezafe Kar = 0"<<'\t'<<"Kasri Kar = 0"<<endl;
		}
		cout<<"                        ........................................"<<endl<<endl;
		cout<<"aya mikhahid edame dahid? (y/n):  ";
		cin>>end;
		if(end=='n'){
			break;
		}
		cout<<endl;
	}
}
