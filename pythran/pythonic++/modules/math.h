#ifndef PYTHONIC_MODULE_MATH_H
#define PYTHONIC_MODULE_MATH_H

namespace pythonic {
    namespace math {
        using std::acos;
        using std::cos;
        using std::exp;
        using std::sin;
        using std::sqrt;
        using std::log10;
        using std::isnan;
        using std::ceil;
        using std::floor;
        double const pi = std::atan(1)*4;
        double const e = std::exp(1);

        PROXY(pythonic::math,acos);
        PROXY(pythonic::math,cos);
        PROXY(pythonic::math,exp);
        PROXY(pythonic::math,sin);
        PROXY(pythonic::math,sqrt);
        PROXY(pythonic::math,log10);
        PROXY(pythonic::math,isnan);
        PROXY(pythonic::math,ceil);
        PROXY(pythonic::math,floor);
    }
}

#endif
