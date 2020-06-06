#ifndef ANOTHER_PROGA_SEM2_LAB4_PARALLELOGRAM_H
#define ANOTHER_PROGA_SEM2_LAB4_PARALLELOGRAM_H
#pragma once

#include "base.h"


class parallelogram : public IFigure {

public:

    parallelogram();

    ~parallelogram();

    double square() override;

    double perimeter() override;

    double mass() const override;

    CVector2D position() const override;

    bool operator==(const IPhysObject &obj) const override;

    bool operator<(const IPhysObject &obj) const override;

    void draw() override;

    void initFromDialogue() override;

    const char *className() override;

    unsigned int size() override;

private:
    CVector2D A;
    CVector2D B;
    CVector2D C;
    CVector2D D;
    double weight = 0;
    const char *name = "parallelogram";
};

#endif //ANOTHER_PROGA_SEM2_LAB4_PARALLELOGRAM_H
