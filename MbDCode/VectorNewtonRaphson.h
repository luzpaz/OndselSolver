#pragma once

#include "NewtonRaphson.h"
#include "MatrixSolver.h"

namespace MbD {
    class VectorNewtonRaphson : public NewtonRaphson
    {
        //matrixSolver n
    public:
        void run() override;
        virtual std::shared_ptr<MatrixSolver> matrixSolverClassNew();
        void fillY() override;
        void calcyNorm() override;
        void solveEquations() override;
        void updatexold() override;
        void calcdxNorm() override;
        bool isConverged() override;
        void xEqualxoldPlusdx() override;
        virtual void basicSolveEquations() = 0;
        virtual void handleSingularMatrix();

        std::shared_ptr<MatrixSolver> matrixSolver;
        size_t n;
        std::shared_ptr<FullColumn<double>> xold, x, dx, y;
        //std::shared_ptr<RowTypeMatrix<double>> pypx;
    };
}

