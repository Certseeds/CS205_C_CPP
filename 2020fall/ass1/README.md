# Require Documents

## Given Doc

Things to consider for a big int class:

1. Mathematical operators: `+`, `-`, `/`, `*`, `%`   
   PS: Don't forget that your class may be on either side of the operator, that the operators can be chained, that one of the operands could be an int, float, double, etc.

2. I/O operators: `>>`, `<<` This is where you figure out how to properly create your class from user input, and how to format it for output as well.

3. Conversions/Casts: Figure out what types/classes your big int class should be convertible to, and how to properly handle the conversion.   
   A quick list would include double and float, and may include int (with proper bounds checking) and complex (assuming it can handle the range).