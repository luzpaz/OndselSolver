#pragma once

#include "DirectionCosineConstraintIJ.h"

namespace MbD {
    class DirectionCosineConstraintIqcJc : public DirectionCosineConstraintIJ
    {
        //pGpEI ppGpEIpEI iqEI 
    public:
        DirectionCosineConstraintIqcJc(EndFrmcptr frmi, EndFrmcptr frmj, int axisi, int axisj);
        void initaAijIeJe() override;
        void calcPostDynCorrectorIteration() override;
        void useEquationNumbers() override;

        FRowDsptr pGpEI;
        FMatDsptr ppGpEIpEI;
        int iqEI;
    };
}

