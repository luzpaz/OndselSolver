#include "AbsConstraint.h"
#include "PartFrame.h"

using namespace MbD;

AbsConstraint::AbsConstraint() {}

AbsConstraint::AbsConstraint(const char* str) : Constraint(str) {}

AbsConstraint::AbsConstraint(size_t i)
{
    axis = i;
}

void AbsConstraint::initialize()
{
    axis = 0;
    iqXminusOnePlusAxis = 0;
}

void MbD::AbsConstraint::calcPostDynCorrectorIteration()
{
    if (axis < 3) {
        aG = static_cast<PartFrame*>(owner)->qX->at(axis);
    }
    else {
        aG = static_cast<PartFrame*>(owner)->qE->at(axis - 3);
    }
}

void MbD::AbsConstraint::useEquationNumbers()
{
    iqXminusOnePlusAxis = static_cast<PartFrame*>(owner)->iqX - 1 + axis;
}

void MbD::AbsConstraint::fillPosICJacob(SpMatDsptr mat)
{
    mat->atijplusNumber(iG, iqXminusOnePlusAxis, 1.0);
    mat->atijplusNumber(iqXminusOnePlusAxis, iG, 1.0);
}
