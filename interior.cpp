#include <iostream>
#include "interior.h"

using namespace std;

void Interior :: qc_start(int bagian, int score)
{
    while (score < 0 || score > 100){
    if(score < 0 || score >100){
        cout <<"\t\tScore hanya dapat berupa angka 0-100 !!!" << endl;
        cout <<"\t\tInput score : " ; cin >> score;
    }}
    switch(bagian)
    {
        case JOK_DEPAN :
            this -> interior_qc[JOK_DEPAN] = score;
            break;
        case JOK_BELAKANG :
            this -> interior_qc[JOK_BELAKANG] = score;
            break;
        case SAFETYBELT :
            this -> interior_qc[SAFETYBELT] = score;
            break;
        case KACA_FILM :
            this -> interior_qc[KACA_FILM] = score;
            break;
        case HEAD_UNIT :
            this -> interior_qc[HEAD_UNIT] = score;
            break;
        case DASHBOARD :
            this -> interior_qc[DASHBOARD] = score;
            break;
        case KARPET_BAWAH :
            this -> interior_qc[KARPET_BAWAH] = score;
            break;
        default:
            break;
            
    }
}

float Interior::InteriorScore()
{
    float total = 0;
    for(int i=0 ; i<7 ;i++)
    {
        total += this->interior_qc[i];
    }
    return total/7;
}

void Interior::menu()
{
    int temp;
    cout << "Interior Quality Control" << endl << endl ;
    cout << "Berikan nilai sesuai range (0-100) untuk Quality Control pemasangan!" << endl;
    cout <<"     1. Pemasangan Jok Depan    :" ;  cin >> temp; this->qc_start(JOK_DEPAN, temp);
    cout <<"     2. Pemasangan Jok Belakang :" ;  cin >> temp; this->qc_start(JOK_BELAKANG, temp);
    cout <<"     3. Sabuk Pengaman          :" ;  cin >> temp; this->qc_start(SAFETYBELT, temp);
    cout <<"     4. Kaca Film               :" ;  cin >> temp; this->qc_start(KACA_FILM, temp);
    cout <<"     5. Head Unit               :" ;  cin >> temp; this->qc_start(HEAD_UNIT, temp);
    cout <<"     6. Dashboard               :" ;  cin >> temp; this->qc_start(DASHBOARD, temp);
    cout <<"     7. Karpet Bawah            :" ;  cin >> temp; this->qc_start(KARPET_BAWAH, temp);
    
    cout <<"QC Score bagian interior : " << this->InteriorScore() << "\n\n" ;
    
    
    
}


