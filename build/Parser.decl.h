#ifndef _DECL_Parser_H_
#define _DECL_Parser_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "Node.decl.h"

/* DECLS: chare Parser: Chare{
Parser();
};
 */
 class Parser;
 class CkIndex_Parser;
 class CProxy_Parser;
/* --------------- index object ------------------ */
class CkIndex_Parser:public CkIndex_Chare{
  public:
    typedef Parser local_t;
    typedef CkIndex_Parser index_t;
    typedef CProxy_Parser proxy_t;
    typedef CProxy_Parser element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Parser();
     */
    // Entry point registration at startup
    
    static int reg_Parser_void();
    // Entry point index lookup
    
    inline static int idx_Parser_void() {
      static int epidx = reg_Parser_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Parser_void(); }
    
    static void _call_Parser_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Parser_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Parser:public CProxy_Chare{
  public:
    typedef Parser local_t;
    typedef CkIndex_Parser index_t;
    typedef CProxy_Parser proxy_t;
    typedef CProxy_Parser element_t;

    CProxy_Parser(void) {};
    CProxy_Parser(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Parser(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Parser *ckLocal(void) const
    { return (Parser *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Parser();
 */
    static CkChareID ckNew(int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_Parser)
#define Parser_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Parser>CBase_Parser;


/* ---------------- method closures -------------- */
class Closure_Parser {
  public:

};

extern void _registerParser(void);
#endif
