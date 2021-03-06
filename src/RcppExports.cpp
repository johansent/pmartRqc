// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// kw_rcpp
std::list<double> kw_rcpp(arma::mat mtr, std::vector<std::string> group);
RcppExport SEXP pmartRqc_kw_rcpp(SEXP mtrSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mtr(mtrSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(kw_rcpp(mtr, group));
    return rcpp_result_gen;
END_RCPP
}
// nonmissing_per_grp
arma::Mat<int> nonmissing_per_grp(arma::mat mtr, std::vector<std::string> group);
RcppExport SEXP pmartRqc_nonmissing_per_grp(SEXP mtrSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mtr(mtrSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(nonmissing_per_grp(mtr, group));
    return rcpp_result_gen;
END_RCPP
}
// pooled_cv_rcpp
std::list<double> pooled_cv_rcpp(arma::mat mtr, std::vector<std::string> group);
RcppExport SEXP pmartRqc_pooled_cv_rcpp(SEXP mtrSEXP, SEXP groupSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mtr(mtrSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type group(groupSEXP);
    rcpp_result_gen = Rcpp::wrap(pooled_cv_rcpp(mtr, group));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP pmartRqc_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
