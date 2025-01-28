# <center> Call by Value - Call by Reference - Call by Pointer </center>

### <ins>**Date:**</ins> 21 - 12 - 2024

Consider the following code:   
```
Void S(int *x, int &y, int* &z, int w) // This Line
{
    int* t; // This Line

    t = y;
    
    x = y + z ;

    y =  z + t ;

    z =  x + y ;

    w = t + w;

    cout << w << x << y << z << endl;
}

main() // This Line
{
    int a = 1 , b = 2 , *c = new int(3), *d = new int(4) ; // This Line

    S( a , b , c , d ) ;

    cout << a << b << c << d;
}
```

The mentioned lines of code **should not be changed**.  
You may have to *change/adjust* the other statements in such a way that the output should be:  
### Output
```
9 5 5 10
5 5 10 4
```
> 💡 **Note:** You can only add the symbols **' * '** and/or **' & '** as part of the change to the code. You also cannot add any extra statements or lines of codes.

### IYKYK
> *" Be Own <br> to be Won "*
