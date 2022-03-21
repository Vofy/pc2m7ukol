void add(double a_real, double a_imaginary, double b_real, double b_imaginary, double *result_real, double *result_imaginary)
{
    *result_real = a_real + b_real;
    *result_imaginary = a_imaginary + b_imaginary;
}

void substract(double a_real, double a_imaginary, double b_real, double b_imaginary, double *result_real, double *result_imaginary)
{
    *result_real = a_real - b_real;
    *result_imaginary = a_imaginary - b_imaginary;
}

void multiply(double a_real, double a_imaginary, double b_real, double b_imaginary, double *result_real, double *result_imaginary)
{
    *result_real = a_real * b_real;
    *result_imaginary = a_imaginary * b_imaginary;
}

void divide(double a_real, double a_imaginary, double b_real, double b_imaginary, double *result_real, double *result_imaginary)
{
    *result_real = a_real / b_real;
    *result_imaginary = a_imaginary / b_imaginary;
}
