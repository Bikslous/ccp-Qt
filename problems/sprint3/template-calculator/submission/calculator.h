
#pragma once

#include <string>
#include <optional>
#include <cmath>
#include "rational.h"
#include "pow.h"
#include <type_traits>


using Error = std::string;

template <class Number>
class Calculator {
public:
    void Set(Number number) {
         number = number_;
    }

    Number GetNumber() const {
        return number;
    }
    std::optional <Error> Number Add(Number rhs) {
        number_ += rhs;
        return std::nullopt;
        }
std::optional <Error> Number Sub(Number rhs) {
        number_ -= rhs;
        return std::nullopt;
        }
std::optional <Error> Div (Number rhs) {

if  constexpr (!std::is_floating_point_v<Number>){

if (rhs == Number {}) {
return Error {"Division by zero"};
}}
number_  /= rhs;
return std::nullopt;
}

if constexpr (std::is_floating_point_v<Number>) {
number_ = std::pow(number_, rhs);
return std::nullopt;
} else {
    if (number_ == Number {} && rhs == Number {}) {
    return Error {"Zero pwer by zero"};
    }
}

std::optional<Error> Pow(Number rhs) {
    if constexpr (std::is_floating_point_v<Number>) {
        number_ = std::pow(number_, rhs);
    } else { 
        if (number_ == Number {} && rhs == Number {}) {
            return Error{"Zero power to zero"};
            }
        if constexpr (std::is_integral_v<Number>) {
            if( rhs < Number{} ) {
                return Error{"Integer negative power"};
                }
             number_ = IntegerPow(number_, rhs);
        } else {
            
            if (rhs.GetDenominator() != 1) {
                return Error{"Fractional power is not supported"};
                }
            number_ = ::Pow(number_, rhs);
        }
    }

    return std::nullopt;
}

private:
    Number number_{};
    std::optional<Number> mem_;
};
