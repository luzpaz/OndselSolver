/***************************************************************************
 *   Copyright (c) 2023 Ondsel, Inc.                                       *
 *                                                                         *
 *   This file is part of OndselSolver.                                    *
 *                                                                         *
 *   See LICENSE file for details about copyright.                         *
 ***************************************************************************/

#pragma once
#include "MBDynItem.h"

namespace MbD {
    class MBDynNode;

    class MBDynNodes : public MBDynItem
    {
    public:
        void initialize() override;
        void parseMBDyn(std::vector<std::string>& lines) override;

        std::shared_ptr<std::vector<std::shared_ptr<MBDynNode>>> nodes;
    };
}
