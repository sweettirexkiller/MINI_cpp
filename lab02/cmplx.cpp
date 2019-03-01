// 
// Created by  Peter Yankievich on 01/03/2019.
//
#include <iostream>
#include "cmplx.h"

using namespace std;

using namespace std;

CMPLX::CMPLX(double Re, double Im) { this->Re = Re, this->Im = Im; };

CMPLX::CMPLX(const CMPLX &z) : Re{z.Re}, Im{z.Im} {};

CMPLX::~CMPLX() {};

void CMPLX::Read() const { cout << "Re=" << this->Re << " Im=" << this->Im << endl; }