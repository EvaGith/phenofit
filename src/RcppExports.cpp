// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fix_dt
void fix_dt(DataFrame d);
RcppExport SEXP _phenofit_fix_dt(SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type d(dSEXP);
    fix_dt(d);
    return R_NilValue;
END_RCPP
}
// sgmat_S
arma::mat sgmat_S(int halfwin, int d);
RcppExport SEXP _phenofit_sgmat_S(SEXP halfwinSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type halfwin(halfwinSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(sgmat_S(halfwin, d));
    return rcpp_result_gen;
END_RCPP
}
// sgmat_B
arma::mat sgmat_B(const arma::mat S);
RcppExport SEXP _phenofit_sgmat_B(SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(sgmat_B(S));
    return rcpp_result_gen;
END_RCPP
}
// sgmat_wB
arma::mat sgmat_wB(const arma::mat S, const arma::colvec w);
RcppExport SEXP _phenofit_sgmat_wB(SEXP SSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(sgmat_wB(S, w));
    return rcpp_result_gen;
END_RCPP
}
// smooth_wSG
NumericVector smooth_wSG(const arma::colvec y, const arma::colvec w, const int halfwin, const int d);
RcppExport SEXP _phenofit_smooth_wSG(SEXP ySEXP, SEXP wSEXP, SEXP halfwinSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type w(wSEXP);
    Rcpp::traits::input_parameter< const int >::type halfwin(halfwinSEXP);
    Rcpp::traits::input_parameter< const int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_wSG(y, w, halfwin, d));
    return rcpp_result_gen;
END_RCPP
}
// smooth_SG
Rcpp::NumericVector smooth_SG(const arma::colvec y, const int halfwin, const int d);
RcppExport SEXP _phenofit_smooth_SG(SEXP ySEXP, SEXP halfwinSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type halfwin(halfwinSEXP);
    Rcpp::traits::input_parameter< const int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_SG(y, halfwin, d));
    return rcpp_result_gen;
END_RCPP
}
// wTSM_cpp
NumericVector wTSM_cpp(NumericVector y, NumericVector yfit, NumericVector w, int iter, int nptperyear, double wfact);
RcppExport SEXP _phenofit_wTSM_cpp(SEXP ySEXP, SEXP yfitSEXP, SEXP wSEXP, SEXP iterSEXP, SEXP nptperyearSEXP, SEXP wfactSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yfit(yfitSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< int >::type nptperyear(nptperyearSEXP);
    Rcpp::traits::input_parameter< double >::type wfact(wfactSEXP);
    rcpp_result_gen = Rcpp::wrap(wTSM_cpp(y, yfit, w, iter, nptperyear, wfact));
    return rcpp_result_gen;
END_RCPP
}
