#pragma once
#include <memory>

#include "KinematicIeJe.h"

namespace MbD {
    template<typename T>
    class FullColumn;

    class DirectionCosineIecJec : public KinematicIeJe
    {
        //aAijIeJe axisI axisJ aAjOIe aAjOJe 
    public:
        DirectionCosineIecJec();
        DirectionCosineIecJec(EndFrmcptr frmi, EndFrmcptr frmj, size_t axisi, size_t axisj);
        void calcPostDynCorrectorIteration() override;

        size_t axisI, axisJ;   //0, 1, 2 = x, y, z
        double aAijIeJe;
        std::shared_ptr<FullColumn<double>> aAjOIe, aAjOJe;
    };
}

