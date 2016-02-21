
#ifndef C_CPP_DIARY_VECTOR_H
#define C_CPP_DIARY_VECTOR_H


class Vector {
    int sz;
    double *elem;

public:
    Vector(int s);
    double& operator[] (int i);
    int size();
};


#endif //C_CPP_DIARY_VECTOR_H
