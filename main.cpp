#include <iostream>
#include <iomanip>

#include "interior.h"
#include "exterior.h"
#include "mesin.h"

using namespace std;

string QC_Status;
float Final_QC;

void check_QC_Pass(float n_exterior, float n_interior, float n_mesin){
    
    Final_QC = ((n_exterior + n_interior + n_mesin)/300)*100;
    
    if (Final_QC >= 98.0){
        QC_Status = "LOLOS";
    }
    else{
        QC_Status = "GAGAL";
    }
    
}

int main(int argc, const char * argv[]) {
    Interior a;
    Exterior b;
    Mesin c;
    
    a.menu();
    c.menu();
    b.Input_Ext();
    
    float x = b.ExteriorScore();
    float y = a.InteriorScore();
    float z = c.MesinScore();
    cout << "Nilai QC Exterior: " << x <<endl;
    cout << "Nilai QC Interior: " << y <<endl;
    cout << "Nilai QC Mesin: " << z <<endl;

    check_QC_Pass(x,y,z);
    cout<<"Status QC Produk Mobil: " << QC_Status << endl;
    cout<<"Nilai kepresisian dalam perakitan: " << setprecision(4) <<Final_QC << "%" <<endl;
    return 0;
}
