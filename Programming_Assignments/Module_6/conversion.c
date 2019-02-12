//conversion.c -- compile with convert_driver.c

const int conversion_diff = 32; //offset for conversion
const double conversion_mult = (5.0/9.0); //multiplier for conversion

//takes temp in F as argument and returns temp in C
double convert(double temperature_in_farenheit)
{
  double temperature_in_celcius; //store temp in C
  temperature_in_celcius = (
  (temperature_in_farenheit - conversion_diff) * conversion_mult //C = (F-32) * (5/9)
  );
  
  return temperature_in_celcius;
}