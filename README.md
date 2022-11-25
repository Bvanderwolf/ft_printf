# A simpler printf function from the c std library rewritten.

Made as a project, part of the [Codam](https://www.codam.nl/) curiculum.

It works with the following conversions:

- %c: Prints a single character.
- %s: Prints a string (as defined by the common C convention).
- %p: The void * pointer argument has to be printed in hexadecimal format.
- %d: Prints a decimal (base 10) number.
- %i: Prints an integer in base 10.
- %u: Prints an unsigned decimal (base 10) number.
- %x: Prints a number in hexadecimal (base 16) lowercase format.
- %X: Prints a number in hexadecimal (base 16) uppercase format.
- %%: Prints a percent sign

It works with field width, precision and the following flags:

- '#': For x and X conversions, a nonzero result has the string "0x" (or "0X" for X conversions) prepended to it.
- '0': The value should be zero padded.
- '-': The converted value is padded on the right with blanks, rather than on the left with blanks or zeros.
- ' ': A blank should be left before a positive number produced by a signed conversion.
- '+': A plus should be left before a positive number produced by a signed conversion. 

