#include <stdio.h>

// Simulation Params
// Generated by gen_params function
int Cn; // No. of initial tumor cells
float B; // Transforming Growth Factor TGF—β

int K; // No. of initial NKs
int M1; // No. of initial Macrophages
int N1; // No of initial Neutrophils

float p1; // P. of antigen production by CCs
float p2; // P. of recruiting NKs
float p6; // P. of recruiting Macrophages
float p1_3; // P. of recruiting Neutrophils
float pA8; // P. of NKs Attacking CCs
float pA6; // P. of M1 cells attacking CCs.
float pA3; // P. of N1 cells Attacking CCs.
float pA7; // P. of Mϕs becoming M2
float p1_4; // P. of Neutrophils becoming N2
float i_pA6; // P. of M2 cells promoting tumor cells
float i_pA3; // P. of N2 cells promoting tumor cells

// Max Ages
float Am1, Am2, An1, An2, Ak;

int T; // No. of initial CD8+T cells
int Th; // No. of initial CD4+T cells
int Treg; // No. of initial Treg cells

float p8; // P. of recruiting CD4+T cells
float p7; // P. of recruiting CD8+T cells
float p9; // P. of recruiting Treg cells
float u1; // P. of Treg strengthening T cells
float u2; // P. of Treg strengthening Th cells
float u4; // P. of Th strengthening T cells 
float u3; // P. of CD8+T cells attacking CCs
//Max Ages
float At, Ath, Atreg;


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


void gen_params(float v1, float o1, float v2, float o2) { // Generate parameters for the simulation with 4 Hyperparameters

}