#include <stdio.h>
#ifndef interior_h
#define interior_h
#define JOK_DEPAN       0
#define JOK_BELAKANG    1
#define SAFETYBELT      2
#define KACA_FILM       3
#define HEAD_UNIT       4
#define DASHBOARD       5
#define KARPET_BAWAH    6


class Interior{
    private :
    int interior_qc[7];

    public :
    void qc_start(int,int);
    float InteriorScore();
    void menu();
};





#endif /* interior_h */
