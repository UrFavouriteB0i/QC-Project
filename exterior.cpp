#include "exterior.h"
using namespace std;

void Exterior::Input_Ext(){
        cout <<"Exterior Quality Control" << endl << endl ;
        cout <<"Berikan nilai sesuai range (0-100) untuk Quality Control pemasangan!" << endl;
        cout<<"     1. Lampu Utama      :";
        cin>>exterior_qc[0];
        cout<<"     2. Lampu Sein       :";
        cin>>exterior_qc[1];
        cout<<"     3. Lampu Belakang   :";
        cin>>exterior_qc[2];
        cout<<"     4. Pintu Depan      :";
        cin>>exterior_qc[3];
        cout<<"     5. Pintu Belakang   :";
        cin>>exterior_qc[4];
        cout<<"     6. Roda             :";
        cin>>exterior_qc[5];
        cout<<"     7. Kap Depan        :";
        cin>>exterior_qc[6];
        cout<<"QC Score bagian exterior: "<<this->ExteriorScore()<<"\n\n"<<endl;
};

float Exterior::ExteriorScore(){
        float sum = 0;
        for(int i=0; i<=6; i++){
            sum += exterior_qc[i];
        }
        return sum/7;
};