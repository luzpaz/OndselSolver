#include "DirectionCosineIeqctJeqc.h"
#include "EndFrameqc.h"

using namespace MbD;

DirectionCosineIeqctJeqc::DirectionCosineIeqctJeqc()
{

}

DirectionCosineIeqctJeqc::DirectionCosineIeqctJeqc(EndFrmcptr frmi, EndFrmcptr frmj, int axisi, int axisj) :
	DirectionCosineIeqcJeqc(frmi, frmj, axisi, axisj)
{

}

void DirectionCosineIeqctJeqc::initialize()
{
	ppAijIeJepEIpt = std::make_shared<FullRow<double>>(4);
	ppAijIeJepEJpt = std::make_shared<FullRow<double>>(4);
}

void MbD::DirectionCosineIeqctJeqc::initializeGlobally()
{
	ppAjOJepEJpEJ = std::static_pointer_cast<EndFrameqc>(frmJ)->ppAjOepEpE(axisJ);
}

void MbD::DirectionCosineIeqctJeqc::calcPostDynCorrectorIteration()
{
}