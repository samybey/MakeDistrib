#ifndef _DECL_Parser_H_
#define _DECL_Parser_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: chare Parser: Chare{
Parser();
sync std::string parseFile(char* inputFile);
sync std::vector<CProxy_StringNode > firstPass(char* inputFile);
sync std::vector<CProxy_Node > secondPass(const std::vector<stringNode > &firstPassTab);
sync std::vector<CProxy_Node > secondPassVecInit(const std::vector<stringNode > &firstPassVec);
sync std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec);
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
    /* DECLS: sync std::string parseFile(char* inputFile);
     */
    // Entry point registration at startup
    
    static int reg_parseFile_marshall2();
    // Entry point index lookup
    
    inline static int idx_parseFile_marshall2() {
      static int epidx = reg_parseFile_marshall2();
      return epidx;
    }

    
    inline static int idx_parseFile(std::string (Parser::*)(char* inputFile) ) {
      return idx_parseFile_marshall2();
    }


    
    static int parseFile(char* inputFile) { return idx_parseFile_marshall2(); }
    
    static void _call_parseFile_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_parseFile_marshall2(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_parseFile_marshall2(PUP::er &p,void *msg);
    /* DECLS: sync std::vector<CProxy_StringNode > firstPass(char* inputFile);
     */
    // Entry point registration at startup
    
    static int reg_firstPass_marshall3();
    // Entry point index lookup
    
    inline static int idx_firstPass_marshall3() {
      static int epidx = reg_firstPass_marshall3();
      return epidx;
    }

    
    inline static int idx_firstPass(std::vector<CProxy_StringNode > (Parser::*)(char* inputFile) ) {
      return idx_firstPass_marshall3();
    }


    
    static int firstPass(char* inputFile) { return idx_firstPass_marshall3(); }
    
    static void _call_firstPass_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_firstPass_marshall3(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_firstPass_marshall3(PUP::er &p,void *msg);
    /* DECLS: sync std::vector<CProxy_Node > secondPass(const std::vector<stringNode > &firstPassTab);
     */
    // Entry point registration at startup
    
    static int reg_secondPass_marshall4();
    // Entry point index lookup
    
    inline static int idx_secondPass_marshall4() {
      static int epidx = reg_secondPass_marshall4();
      return epidx;
    }

    
    inline static int idx_secondPass(std::vector<CProxy_Node > (Parser::*)(const std::vector<stringNode > &firstPassTab) ) {
      return idx_secondPass_marshall4();
    }


    
    static int secondPass(const std::vector<stringNode > &firstPassTab) { return idx_secondPass_marshall4(); }
    
    static void _call_secondPass_marshall4(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_secondPass_marshall4(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_secondPass_marshall4(PUP::er &p,void *msg);
    /* DECLS: sync std::vector<CProxy_Node > secondPassVecInit(const std::vector<stringNode > &firstPassVec);
     */
    // Entry point registration at startup
    
    static int reg_secondPassVecInit_marshall5();
    // Entry point index lookup
    
    inline static int idx_secondPassVecInit_marshall5() {
      static int epidx = reg_secondPassVecInit_marshall5();
      return epidx;
    }

    
    inline static int idx_secondPassVecInit(std::vector<CProxy_Node > (Parser::*)(const std::vector<stringNode > &firstPassVec) ) {
      return idx_secondPassVecInit_marshall5();
    }


    
    static int secondPassVecInit(const std::vector<stringNode > &firstPassVec) { return idx_secondPassVecInit_marshall5(); }
    
    static void _call_secondPassVecInit_marshall5(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_secondPassVecInit_marshall5(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_secondPassVecInit_marshall5(PUP::er &p,void *msg);
    /* DECLS: sync std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec);
     */
    // Entry point registration at startup
    
    static int reg_createNodeDep_marshall6();
    // Entry point index lookup
    
    inline static int idx_createNodeDep_marshall6() {
      static int epidx = reg_createNodeDep_marshall6();
      return epidx;
    }

    
    inline static int idx_createNodeDep(std::vector<CProxy_Node > (Parser::*)(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec) ) {
      return idx_createNodeDep_marshall6();
    }


    
    static int createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec) { return idx_createNodeDep_marshall6(); }
    
    static void _call_createNodeDep_marshall6(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_createNodeDep_marshall6(void* impl_msg, void* impl_obj);
    
    static void _marshallmessagepup_createNodeDep_marshall6(PUP::er &p,void *msg);
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

/* DECLS: sync std::string parseFile(char* inputFile);
 */
    
    std::string parseFile(char* inputFile, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::vector<CProxy_StringNode > firstPass(char* inputFile);
 */
    
    std::vector<CProxy_StringNode > firstPass(char* inputFile, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::vector<CProxy_Node > secondPass(const std::vector<stringNode > &firstPassTab);
 */
    
    std::vector<CProxy_Node > secondPass(const std::vector<stringNode > &firstPassTab, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::vector<CProxy_Node > secondPassVecInit(const std::vector<stringNode > &firstPassVec);
 */
    
    std::vector<CProxy_Node > secondPassVecInit(const std::vector<stringNode > &firstPassVec, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: sync std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec);
 */
    
    std::vector<CProxy_Node > createNodeDep(const std::vector<std::string > &stringDepVec, const std::vector<CProxy_Node > &secondPassVec, const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_Parser)
#define Parser_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Parser>CBase_Parser;

/* ---------------- method closures -------------- */
class Closure_Parser {
  public:


    struct parseFile_2_closure;


    struct firstPass_3_closure;


    struct secondPass_4_closure;


    struct secondPassVecInit_5_closure;


    struct createNodeDep_6_closure;

};

extern void _registerParser(void);
#endif
