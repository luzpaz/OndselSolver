#include "Part.h"
#include "PartFrame.h"
#include "FullColumn.h"

using namespace MbD;

Part::Part() {
	partFrame = std::make_shared<PartFrame>();
}

void Part::setqX(FullColDptr x) {
	partFrame.get()->setqX(x);
}

FullColDptr Part::getqX() {
	return partFrame.get()->getqX();
}

void Part::setqE(FullColDptr x) {
	partFrame.get()->setqE(x);
}

FullColDptr Part::getqE() {
	return partFrame.get()->getqE();
}

void Part::setSystem(System& sys)
{
	//May be needed in the future
}
