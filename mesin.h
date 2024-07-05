#include <stdio.h>
#ifndef mesin_h
#define mesin_h
#define RADIATOR     0
#define OLI_MESIN    1
#define OLI_GEARBOX  2
#define MINYAK_REM   3
#define AKI          4
#define ABS          5
#define SISTEM_PENDINGIN  6




class Mesin{
    private :
    int mesin_qc[7];

    public :
    void qc_start(int,int);
    float MesinScore();
    void menu();
};


#endif /* mesin_h */
