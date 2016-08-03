
#include <Rcpp.h>
#include "main.h"

using namespace std;

// [[Rcpp::export]]
void cppTest() {

    int x = 9;
    
    Rcpp::Rcout << "integer x is" << x << "\n";
    
}
