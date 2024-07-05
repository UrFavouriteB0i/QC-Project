#include <iostream>
#include "mesin.h"

using namespace std;

void Mesin :: qc_start(int bagian, int score)
{
    while (score < 0 || score > 100){
    if(score < 0 || score >100){
        cout <<"\t\tScore hanya dapat berupa angka 0-100 !!!" << endl;
        cout <<"\t\tInput score : " ; cin >> score;
    }}
    switch(bagian)
    {
        case RADIATOR :
            this -> mesin_qc[RADIATOR] = score;
            break;
        case OLI_MESIN :
            this -> mesin_qc[OLI_MESIN] = score;
            break;
        case OLI_GEARBOX :
            this -> mesin_qc[OLI_GEARBOX] = score;
            break;
        case MINYAK_REM :
            this -> mesin_qc[MINYAK_REM] = score;
            break;
        case AKI :
            this -> mesin_qc[AKI] = score;
            break;
        case ABS :
            this -> mesin_qc[ABS] = score;
            break;
        case SISTEM_PENDINGIN :
            this -> mesin_qc[SISTEM_PENDINGIN] = score;
            break;
        default:
            break;
            
    }
}

float Mesin::MesinScore()
{
    float total = 0;
    for(int i=0 ; i<7 ;i++)
    {
        total += this->mesin_qc[i];
    }
    return total/7;
}

void Mesin::menu()
{
    int temp;
    cout << "Mesin Quality Control" << endl << endl ;
    cout << "Berikan nilai sesuai range (0-100) untuk Quality Control pemasangan!" << endl;
    cout <<"     1. Radiator Mesin          :" ;  cin >> temp; this->qc_start(RADIATOR, temp);
    cout <<"     2. Kondisi Oli Mesin       :" ;  cin >> temp; this->qc_start(OLI_MESIN, temp);
    cout <<"     3. Kondisi Oli Gearbox     :" ;  cin >> temp; this->qc_start(OLI_GEARBOX, temp);
    cout <<"     4. Minyak Rem              :" ;  cin >> temp; this->qc_start(MINYAK_REM, temp);
    cout <<"     5. AKI                     :" ;  cin >> temp; this->qc_start(AKI, temp);
    cout <<"     6. ABS                     :" ;  cin >> temp; this->qc_start(ABS, temp);
    cout <<"     7. Sistem Pendingin (AC)   :" ;  cin >> temp; this->qc_start(SISTEM_PENDINGIN, temp);
    
    cout <<"\t QC Score untuk bagian mesin : " << this->MesinScore() << "\n\n"<<endl;
    
    
    
}

