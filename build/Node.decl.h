#ifndef _DECL_Node_H_
#define _DECL_Node_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
/* DECLS: chare Node: Chare{
Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
void addDependence(const CProxy_Node &dep);
void exec(const CProxy_Node &pereProxy);
void exec();
void execCommand();
void done();
};
 */
 class Node;
 class CkIndex_Node;
 class CProxy_Node;
/* --------------- index object ------------------ */
class CkIndex_Node:public CkIndex_Chare{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxy_Node element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
     */
    // Entry point registration at startup
    
    static int reg_Node_marshall1();
    // Entry point index lookup
    
    inline static int idx_Node_marshall1() {
      static int epidx = reg_Node_marshall1();
      return epidx;
    }

    
    static int ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande) { return idx_Node_marshall1(); }
    
    static void _call_Node_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Node_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Node_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Node_marshall1(PUP::er &p,void *msg);
    /* DECLS: void addDependence(const CProxy_Node &dep);
     */
    // Entry point registration at startup
    
    static int reg_addDependence_marshall2();
    // Entry point index lookup
    
    inline static int idx_addDependence_marshall2() {
      static int epidx = reg_addDependence_marshall2();
      return epidx;
    }

    
    inline static int idx_addDependence(void (Node::*)(const CProxy_Node &dep) ) {
      return idx_addDependence_marshall2();
    }


    
    static int addDependence(const CProxy_Node &dep) { return idx_addDependence_marshall2(); }
    
    static void _call_addDependence_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_addDependence_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_addDependence_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_addDependence_marshall2(PUP::er &p,void *msg);
    /* DECLS: void exec(const CProxy_Node &pereProxy);
     */
    // Entry point registration at startup
    
    static int reg_exec_marshall3();
    // Entry point index lookup
    
    inline static int idx_exec_marshall3() {
      static int epidx = reg_exec_marshall3();
      return epidx;
    }

    
    inline static int idx_exec(void (Node::*)(const CProxy_Node &pereProxy) ) {
      return idx_exec_marshall3();
    }


    
    static int exec(const CProxy_Node &pereProxy) { return idx_exec_marshall3(); }
    
    static void _call_exec_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exec_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_exec_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_exec_marshall3(PUP::er &p,void *msg);
    /* DECLS: void exec();
     */
    // Entry point registration at startup
    
    static int reg_exec_void();
    // Entry point index lookup
    
    inline static int idx_exec_void() {
      static int epidx = reg_exec_void();
      return epidx;
    }

    
    inline static int idx_exec(void (Node::*)() ) {
      return idx_exec_void();
    }


    
    static int exec() { return idx_exec_void(); }
    
    static void _call_exec_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_exec_void(void* impl_msg, void* impl_obj);
    /* DECLS: void execCommand();
     */
    // Entry point registration at startup
    
    static int reg_execCommand_void();
    // Entry point index lookup
    
    inline static int idx_execCommand_void() {
      static int epidx = reg_execCommand_void();
      return epidx;
    }

    
    inline static int idx_execCommand(void (Node::*)() ) {
      return idx_execCommand_void();
    }


    
    static int execCommand() { return idx_execCommand_void(); }
    
    static void _call_execCommand_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_execCommand_void(void* impl_msg, void* impl_obj);
    /* DECLS: void done();
     */
    // Entry point registration at startup
    
    static int reg_done_void();
    // Entry point index lookup
    
    inline static int idx_done_void() {
      static int epidx = reg_done_void();
      return epidx;
    }

    
    inline static int idx_done(void (Node::*)() ) {
      return idx_done_void();
    }


    
    static int done() { return idx_done_void(); }
    
    static void _call_done_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_done_void(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Node:public CProxy_Chare{
  public:
    typedef Node local_t;
    typedef CkIndex_Node index_t;
    typedef CProxy_Node proxy_t;
    typedef CProxy_Node element_t;

    CProxy_Node(void) {};
    CProxy_Node(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Node(const Chare *c) : CProxy_Chare(c){  }

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
    Node *ckLocal(void) const
    { return (Node *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande);
 */
    static CkChareID ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, CkChareID* pcid, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);
    CProxy_Node(const std::string &nom, const std::vector<CProxy_Node > &dependancesVector, const std::string &commande, int onPE=CK_PE_ANY, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void addDependence(const CProxy_Node &dep);
 */
    
    void addDependence(const CProxy_Node &dep, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void exec(const CProxy_Node &pereProxy);
 */
    
    void exec(const CProxy_Node &pereProxy, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void exec();
 */
    
    void exec(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void execCommand();
 */
    
    void execCommand(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void done();
 */
    
    void done(const CkEntryOptions *impl_e_opts=NULL);

};
PUPmarshall(CProxy_Node)
#define Node_SDAG_CODE 
typedef CBaseT1<Chare, CProxy_Node>CBase_Node;

/* ---------------- method closures -------------- */
class Closure_Node {
  public:


    struct addDependence_2_closure;


    struct exec_3_closure;


    struct exec_4_closure;


    struct execCommand_5_closure;


    struct done_6_closure;

};

extern void _registerNode(void);
#endif
