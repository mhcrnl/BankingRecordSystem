/**
	@Author:	Mihai Cornel	Romania			mhcrnl@gmail.com
	@System:	Ubuntu 16.04	Code::Blocks 13.12	gcc 5.4.0
                Fedora 24	    Code::Blocks 16.01	gcc 5.3.1
                Windows Vista 	Code::Blocks 16.01
	@Copyright:	2018
	@file:
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

#include "cont.h"

cont::cont(int nrCont, string nume, string prenume, float leiCont)
{
    //ctor
    setNrCont(nrCont);
    setNume(nume);
    setPrenume(prenume);
    setLeiCont(leiCont);
}

cont::~cont()
{
    //dtor
}

void cont::afiseaza(void){
    cout<<nrCont<<" "<<nume<<" "<<prenume<<" "<<leiCont<<endl;
}
