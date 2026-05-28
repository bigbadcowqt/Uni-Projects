#include <iostream>
using namespace std;
struct Library{
    string nameKetab;
    string nevisande;
    int codeKetab;
    bool mojood;
};
int main(){
    int n=8;
    Library ketabha[n]={
        {"Amoozeshe BarnameNevisi", "Dr.Dallaki", 111, true},
        {"Ensanhaye Khoshbakht", "Javad Hosseini", 112, true},
        {"Dar JoosteJooye Hana", "Nima Sadati", 113, false},
        {"Chegoone yek Millioner shavim", "Rick Erickman", 114, true},
        {"Raze Afarinesh", "Mehrnoosh Rezaei", 115, false},
        {"Jenayat va Mokafat", "Meysam Hematinezhad", 116, true},
        {"Bar Baad rafte", "Aliakbar Ezatti", 117, false},
        {"Gorg va Mish", "Simim Behbahani", 118, true}
    };
    string dastoor;
    cout<<"........ salam be ketabkhaneye BND-UNI khosh amadid ........"<<endl;
    while(true){
        cout<<endl<<"--------------------------------------------------"<<endl;
        cout<<"baraye moshahede list kamele Ketab ha \"list\" ra vared Konid."<<endl;
        cout<<"baraye moshahede ketabhaye mojood: \"mojood\" ra vared Konid."<<endl;
        cout<<"baraye amanat gereftan ketab: \"amanat\" ra Vared koin."<<endl;
        cout<<"baraye khorooj az barname: \"exit\" ra Vared konid."<<endl;
        cout<<"Dastoor ra vared konid:  ";
        cin>>dastoor;
        if(dastoor == "exit"){
            cout<<"Ba tashakkor, khodafez!"<<endl;
            break; 
        }
        if(dastoor == "list"){
            cout<<endl<<"--- Liste Tamame Ketab ha ---"<<endl;
            for(int i=0; i<n; i++){
                cout<<"Name: " << ketabha[i].nameKetab<<" , Nevisande: "<< ketabha[i].nevisande<<" , Code: "<< ketabha[i].codeKetab<<" , Vaziat: "<<(ketabha[i].mojood ? "Mojood" : "Namojood")<<endl;
            }
        }
        else if(dastoor == "mojood"){
            cout<<endl<<"--- Ketabhaye Mojood baraye Amanat ---"<<endl;
            bool hastyana = false;
            for (int i=0; i<n; i++){
                if(ketabha[i].mojood){
                    cout<<"Name: "<< ketabha[i].nameKetab<<" , Code: "<<ketabha[i].codeKetab<<endl;
                    hastyana=true;
                }
            }
        if(!hastyana)
			cout<<"hich Ketabi dar hale hazer mojood nist."<<endl;
        }
        else if(dastoor == "amanat"){
            int code;
            bool peydaShod = false;
            cout<<"Code ketab ra vared konid: ";
            cin>>code;
            for(int i=0; i<n; i++){
                if(ketabha[i].codeKetab == code){
                    peydaShod= true;
                    if(ketabha[i].mojood){
                        string javab;
                        cout<<"Ketab >"<< ketabha[i].nameKetab<<"< mojood ast. Amanat migirid? (bale/kheyr): ";
                        cin>>javab;
                        if(javab == "bale"){
                            ketabha[i].mojood = false;
                            cout<<"Ketab ba movafaghiat be Amant dade shod."<<endl;
                        }else{
                            cout<<"amaliyat laghv shod."<<endl;
                        }
                    }else{
                        cout<<"Motaasefane in ketab dar hale hazer mojood Nist."<<endl;
                    }
                    break;
                }
            }
            if(!peydaShod){
                cout<<"Ketabi ba in code peyda nashod!"<<endl;
            }
        }
        else{
            cout<<"Khatta!"<<endl;
        }
    }

}
