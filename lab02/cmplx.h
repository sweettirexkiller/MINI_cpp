// 
// Created by  Peter Yankievich on 01/03/2019.
//

#ifndef LAB02_CMPLX_H
#define LAB02_CMPLX_H

class CMPLX {
private:
    double Re, Im;
public:
    CMPLX();

    CMPLX(double Re=0, double Im=0);

    CMPLX(const CMPLX &z);

    ~CMPLX();

    void Read() const;
};

#endif //LAB02_CMPLX_H
