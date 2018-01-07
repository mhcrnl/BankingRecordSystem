#ifndef CONT_H
#define CONT_H

using namespace std;

class cont
{
public:
    //Constructor default
    cont();
    cont(int nrCont, string nume, string prenume, float leiCont);
    //Destructor
    virtual ~cont();
    //getter
    int getNrCont(){return this->nrCont;}
    string getNume(){return this->nume;}
    string getPrenume(){return this->prenume;}
    float getLeiCont(){return this->leiCont;}
    //setter
    void setNrCont(int nrCont){this->nrCont = nrCont;}
    void setNume(string nume){this->nume = nume;}
    void setPrenume(string prenume){this->prenume = prenume;}
    void setLeiCont(float leiCont){this->leiCont = leiCont;}

    void afiseaza();

protected:

private:
    int nrCont;
    string nume;
    string prenume;
    float leiCont;
};

#endif // CONT_H
