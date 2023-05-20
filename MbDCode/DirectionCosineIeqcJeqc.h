#pragma once

#include "DirectionCosineIeqcJec.h"

namespace MbD {
    class DirectionCosineIeqcJeqc : public DirectionCosineIeqcJec
    {
        //pAijIeJepEJ ppAijIeJepEIpEJ ppAijIeJepEJpEJ pAjOJepEJT ppAjOJepEJpEJ 
    public:
        DirectionCosineIeqcJeqc();
        DirectionCosineIeqcJeqc(EndFrmcptr frmi, EndFrmcptr frmj, int axisi, int axisj);
        void initialize();
        void initializeGlobally();
        void calcPostDynCorrectorIteration() override;

        FRowDsptr pAijIeJepEJ;
        FMatDsptr ppAijIeJepEIpEJ;
        FMatDsptr ppAijIeJepEJpEJ;
        FMatDsptr pAjOJepEJT;
        std::shared_ptr<FullMatrix<std::shared_ptr<FullColumn<double>>>> ppAjOJepEJpEJ;

    };
}
