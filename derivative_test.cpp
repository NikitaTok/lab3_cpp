#include "catch2/catch.hpp"
#include "derivative.cpp"

TEST_CASE("Derivative Calculation", "[derivative]") {
  // Тестовая функция f(x) = x^2
  auto f = [](double x) { return x * x; };

  // Проверка для x = 2.0
  double eps = 0.0001;
  double expected_derivative = 4.0;
  double calculated_derivative = derivative(f, 2.0, eps);
  REQUIRE(std::abs(calculated_derivative - expected_derivative) < eps);
}