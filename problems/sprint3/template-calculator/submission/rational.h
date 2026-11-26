#pragma once

#include <compare>
#include <ios>
#include <istream>
#include <numeric>
#include <ostream>
#include <stdexcept>

class Rational {
public:
    Rational() : numerator_(0), denominator_(1) {
    }

    Rational(int numerator) : numerator_(numerator), denominator_(1) {
    }

    Rational(int numerator, int denominator)
        : numerator_(numerator), denominator_(denominator) {
        if (denominator_ == 0) {
            throw std::invalid_argument("Denominator cannot be zero");
        }
        Reduction();
    }

    Rational(const Rational& other) = default;
    Rational& operator=(const Rational& other) = default;

    int GetNumerator() const {
        return numerator_;
    }

    int GetDenominator() const {
        return denominator_;
    }

    Rational Inv() const {
        if (numerator_ == 0) {
            throw std::domain_error("Zero has no inverse");
        }
        return Rational{denominator_, numerator_};
    }

    Rational operator+() const {
        return *this;
    }

    Rational operator-() const {
        return Rational{-numerator_, denominator_};
    }

    Rational& operator+=(const Rational& rhs) {
        numerator_ =
            numerator_ * rhs.denominator_ +
            rhs.numerator_ * denominator_;
        denominator_ *= rhs.denominator_;
        Reduction();
        return *this;
    }

    Rational& operator-=(const Rational& rhs) {
        numerator_ =
            numerator_ * rhs.denominator_ -
            rhs.numerator_ * denominator_;
        denominator_ *= rhs.denominator_;
        Reduction();
        return *this;
    }

    Rational& operator*=(const Rational& rhs) {
        numerator_ *= rhs.numerator_;
        denominator_ *= rhs.denominator_;
        Reduction();
        return *this;
    }

    Rational& operator/=(const Rational& rhs) {
        if (rhs.numerator_ == 0) {
            throw std::domain_error("Division by zero");
        }

        numerator_ *= rhs.denominator_;
        denominator_ *= rhs.numerator_;
        Reduction();
        return *this;
    }

    friend Rational operator+(Rational lhs, const Rational& rhs) {
        lhs += rhs;
        return lhs;
    }

    friend Rational operator-(Rational lhs, const Rational& rhs) {
        lhs -= rhs;
        return lhs;
    }

    friend Rational operator*(Rational lhs, const Rational& rhs) {
        lhs *= rhs;
        return lhs;
    }

    friend Rational operator/(Rational lhs, const Rational& rhs) {
        lhs /= rhs;
        return lhs;
    }

    bool operator==(const Rational& rhs) const = default;

    std::strong_ordering operator<=>(const Rational& rhs) const {
        const long long lhs_value =
            static_cast<long long>(numerator_) * rhs.denominator_;
        const long long rhs_value =
            static_cast<long long>(rhs.numerator_) * denominator_;

        return lhs_value <=> rhs_value;
    }

    friend std::ostream& operator<<(std::ostream& output,
                                    const Rational& value) {
        output << value.numerator_;

        if (value.denominator_ != 1) {
            output << " / " << value.denominator_;
        }

        return output;
    }

    friend std::istream& operator>>(std::istream& input, Rational& value) {
        int numerator = 0;

        if (!(input >> numerator)) {
            return input;
        }

        input >> std::ws;

        // Если после числителя нет '/', считываем обычное целое число.
        if (input.peek() != '/') {
            value = Rational{numerator};
            return input;
        }

        input.get(); // Извлекаем символ '/'.

        int denominator = 0;
        if (!(input >> denominator) || denominator == 0) {
            input.setstate(std::ios::failbit);
            return input;
        }

        value = Rational{numerator, denominator};
        return input;
    }

private:
    void Reduction() {
        if (denominator_ < 0) {
            numerator_ = -numerator_;
            denominator_ = -denominator_;
        }

        const int divisor = std::gcd(numerator_, denominator_);
        numerator_ /= divisor;
        denominator_ /= divisor;
    }

    int numerator_;
    int denominator_;
};// Ваше решение задачи последнего урока темы "Перегрузка операций".
