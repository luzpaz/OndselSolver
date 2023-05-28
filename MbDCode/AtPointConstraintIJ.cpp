#include "AtPointConstraintIJ.h"
#include "DispCompIecJecO.h"
#include "CREATE.h"

using namespace MbD;

AtPointConstraintIJ::AtPointConstraintIJ(EndFrmcptr frmi, EndFrmcptr frmj, int axisi) :
	ConstraintIJ(frmi, frmj), axis(axisi)
{
}

void AtPointConstraintIJ::initialize()
{
	initriIeJeO();
}

void MbD::AtPointConstraintIJ::initializeLocally()
{
	riIeJeO->initializeLocally();
}

void MbD::AtPointConstraintIJ::initializeGlobally()
{
	riIeJeO->initializeGlobally();
}

void AtPointConstraintIJ::initriIeJeO()
{
	riIeJeO = CREATE<DispCompIecJecO>::With(frmI, frmJ, axis);
}

void MbD::AtPointConstraintIJ::postInput()
{
}

void MbD::AtPointConstraintIJ::calcPostDynCorrectorIteration()
{
	aG = riIeJeO->riIeJeO - aConstant;
}

void MbD::AtPointConstraintIJ::prePosIC()
{
	riIeJeO->prePosIC();
	Constraint::prePosIC();
}
