# <center> Call by Value - Call by Reference - Call by Pointer </center>

### <ins>**Date:**</ins> 21 - 12 - 2024

Consider the following code:   
```
Void S(int *x, int &y, int* &z, int w)
{
    int* t;

    t = y;
    
    x = y + z ;

    y =  z + t ;

    z =  x + y ;

    w = t + w;

    cout << w << x << y << z << endl;
}

main()
{
    int a = 1 , b = 2 , *c = new int(3), *d = new int(4) ;

    S( a , b , c , d ) ;

    cout << a << b << c << d;
}
```

The mentioned lines of code **should not be changed**.  
You may have to *change/adjust* the other statements in such a way that the output should be:  
```
9 5 5 10
5 5 10 4
```

