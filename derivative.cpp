#include <cmath>

double derivative(double (*f)(double), double x, double eps) {
  double h = 1.0;
  double f_x_h = f(x + h);
  double f_x = f(x);
  double f_x_h_half = f(x + h / 2);
  double diff = std::abs((f_x_h - f_x) / h - (f_x_h_half - f_x) / (h / 2));

  while (diff >= eps) {
    h /= 2;
    f_x_h = f(x + h);
    f_x_h_half = f(x + h / 2);
    diff = std::abs((f_x_h - f_x) / h - (f_x_h_half - f_x) / (h / 2));
  }

  return (f_x_h - f_x) / h;
}
