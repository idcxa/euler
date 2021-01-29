(function() {
'use strict'
    var i, j, sum = 0,
    is_prime = (x) => {
        for (j = 2; j < x; j++){
            if ( x%j == 0 ) {
                return false
            }
        }
        console.log(i)
        return true
    }

    const main = () => {
        for (i = 2; i <= 10; i++) {
            //console.log(i)
            if (is_prime(i)) {
                sum = sum + i
            }
        }
        return sum
    }
    console.log("sum = ", main())

}())
