#include <iostream>
#include <string>
using namespace std;

struct Library {
    string nameKetab;
    string nevisande;
    int codeKetab;
    bool mojood;
};

void namayeshKetabha(Library ketabha[], int n) {
    cout << "\n--- List Ketabha ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Code: " << ketabha[i].codeKetab
             << " | Name: " << ketabha[i].nameKetab
             << " | Writer: " << ketabha[i].nevisande
             << " | Status: " << (ketabha[i].mojood ? "Mojood" : "Amanat dade shode")
             << endl;
    }
}

int searchByCode(Library ketabha[], int n, int code) {
    for (int i = 0; i < n; i++) {
        if (ketabha[i].codeKetab == code) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int n = 8;
    Library ketabha[n] = {
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

    cout << "........ salam be ketabkhaneye BND-UNI khosh amadid ........\n";

    while (true) {
        cout << "\nDastoorha:\n";
        cout << "1. list  -> namayesh tamame ketabha\n";
        cout << "2. search -> jostejo bar asas code\n";
        cout << "3. borrow -> amanat gereftan ketab\n";
        cout << "4. return -> bargardandan ketab\n";
        cout << "5. exit -> khorooj\n";
        cout << "Dastoor ra vared konid: ";
        cin >> dastoor;

        if (dastoor == "exit" || dastoor == "5") {
            cout << "Ba tashakkor, khodafez!\n";
            break;
        } 
        else if (dastoor == "list" || dastoor == "1") {
            namayeshKetabha(ketabha, n);
        } 
        else if (dastoor == "search" || dastoor == "2") {
            int code;
            cout << "Code ketab: ";
            cin >> code;

            int index = searchByCode(ketabha, n, code);
            if (index != -1) {
                cout << "Ketab peyda shod:\n";
                cout << "Name: " << ketabha[index].nameKetab << endl;
                cout << "Writer: " << ketabha[index].nevisande << endl;
                cout << "Status: " << (ketabha[index].mojood ? "Mojood" : "Amanat dade shode") << endl;
            } else {
                cout << "Ketabi ba in code peyda nashod.\n";
            }
        } 
        else if (dastoor == "borrow" || dastoor == "3") {
            int code;
            cout << "Code ketabi ke mikhahid amanat begirid: ";
            cin >> code;

            int index = searchByCode(ketabha, n, code);
            if (index != -1) {
                if (ketabha[index].mojood) {
                    ketabha[index].mojood = false;
                    cout << "Ketab ba movafaghiat be amanat dade shod.\n";
                } else {
                    cout << "In ketab alan mojood nist.\n";
                }
            } else {
                cout << "Ketabi ba in code peyda nashod.\n";
            }
        } 
        else if (dastoor == "return" || dastoor == "4") {
            int code;
            cout << "Code ketabi ke mikhahid bargardanid: ";
            cin >> code;

            int index = searchByCode(ketabha, n, code);
            if (index != -1) {
                if (!ketabha[index].mojood) {
                    ketabha[index].mojood = true;
                    cout << "Ketab ba movafaghiat bargardande shod.\n";
                } else {
                    cout << "In ketab az ghabl mojood bood.\n";
                }
            } else {
                cout << "Ketabi ba in code peyda nashod.\n";
            }
        } 
        else {
            cout << "Dastoor na-motabar ast.\n";
        }
    }

    return 0;
}
