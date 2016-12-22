// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// BWA__from_string
void BWA__from_string(SEXP xp, std::string& querySeq, std::string& seqname);
RcppExport SEXP rSeqLib_BWA__from_string(SEXP xpSEXP, SEXP querySeqSEXP, SEXP seqnameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::string& >::type querySeq(querySeqSEXP);
    Rcpp::traits::input_parameter< std::string& >::type seqname(seqnameSEXP);
    BWA__from_string(xp, querySeq, seqname);
    return R_NilValue;
END_RCPP
}
// BWA__from_fasta
void BWA__from_fasta(SEXP xp, std::string& fasta);
RcppExport SEXP rSeqLib_BWA__from_fasta(SEXP xpSEXP, SEXP fastaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::string& >::type fasta(fastaSEXP);
    BWA__from_fasta(xp, fasta);
    return R_NilValue;
END_RCPP
}
// BWA__query
std::string BWA__query(SEXP xp, std::string& qstring, std::string& qname, bool hardclip, double keep_sec_with_frac_of_primary_score, int max_secondary);
RcppExport SEXP rSeqLib_BWA__query(SEXP xpSEXP, SEXP qstringSEXP, SEXP qnameSEXP, SEXP hardclipSEXP, SEXP keep_sec_with_frac_of_primary_scoreSEXP, SEXP max_secondarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< std::string& >::type qstring(qstringSEXP);
    Rcpp::traits::input_parameter< std::string& >::type qname(qnameSEXP);
    Rcpp::traits::input_parameter< bool >::type hardclip(hardclipSEXP);
    Rcpp::traits::input_parameter< double >::type keep_sec_with_frac_of_primary_score(keep_sec_with_frac_of_primary_scoreSEXP);
    Rcpp::traits::input_parameter< int >::type max_secondary(max_secondarySEXP);
    rcpp_result_gen = Rcpp::wrap(BWA__query(xp, qstring, qname, hardclip, keep_sec_with_frac_of_primary_score, max_secondary));
    return rcpp_result_gen;
END_RCPP
}
// fastqReader_Open
bool fastqReader_Open(const std::string& f);
RcppExport SEXP rSeqLib_fastqReader_Open(SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(fastqReader_Open(f));
    return rcpp_result_gen;
END_RCPP
}
