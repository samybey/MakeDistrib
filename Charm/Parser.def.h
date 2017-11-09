

/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */




/* DEFS: chare Parser: Chare{
Parser();
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Parser::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Parser();
 */

CkChareID CProxy_Parser::ckNew(int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Parser::__idx, CkIndex_Parser::idx_Parser_void(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}

void CProxy_Parser::ckNew(CkChareID* pcid, int impl_onPE, const CkEntryOptions *impl_e_opts)
{
  static_cast<void>(impl_e_opts);
  void *impl_msg = CkAllocSysMsg();
  CkCreateChare(CkIndex_Parser::__idx, CkIndex_Parser::idx_Parser_void(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function

int CkIndex_Parser::reg_Parser_void() {
  int epidx = CkRegisterEp("Parser()",
      _call_Parser_void, 0, __idx, 0);
  return epidx;
}


void CkIndex_Parser::_call_Parser_void(void* impl_msg, void* impl_obj_void)
{
  Parser* impl_obj = static_cast<Parser *>(impl_obj_void);
  CkFreeSysMsg(impl_msg);
  new (impl_obj_void) Parser();
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Parser::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Parser();
  idx_Parser_void();
  CkRegisterDefaultCtor(__idx, idx_Parser_void());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerParser(void)
{
  static int _done = 0; if(_done) return; _done = 1;
  _registerStringNode();

  _registerNode();

/* REG: chare Parser: Chare{
Parser();
};
*/
  CkIndex_Parser::__register("Parser", sizeof(Parser));

}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Parser::virtual_pup(PUP::er &p) {
    recursive_pup<Parser >(dynamic_cast<Parser* >(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
